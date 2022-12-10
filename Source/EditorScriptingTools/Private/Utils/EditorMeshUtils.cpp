//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "EditorMeshUtils.h"

#include "ProceduralMeshConversion.h"
#include "Modules/ModuleManager.h"
#include "Misc/PackageName.h"
#include "Engine/StaticMesh.h"
#include "IAssetTools.h"
#include "AssetToolsModule.h"
#include "ProceduralMeshComponent.h"
#include "StaticMeshAttributes.h"
#include "PhysicsEngine/BodySetup.h"
#include "Dialogs/DlgPickAssetPath.h"
#include "AssetRegistry/AssetRegistryModule.h"

#define LOCTEXT_NAMESPACE "EditorMeshUtils"

namespace EditorMeshUtils
{
	bool CreateStaticMeshAssetFromProceduralMesh(UProceduralMeshComponent* InProcMeshComp, UStaticMesh*& OutStaticMesh)
	{
		if (InProcMeshComp != nullptr)
		{
			FString NewNameSuggestion = FString(TEXT("ProcMesh"));
			FString PackageName = FString(TEXT("/Game/Meshes/")) + NewNameSuggestion;
			FString Name;
			FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");
			AssetToolsModule.Get().CreateUniqueAssetName(PackageName, TEXT(""), PackageName, Name);

			TSharedPtr<SDlgPickAssetPath> PickAssetPathWidget =
				SNew(SDlgPickAssetPath)
				.Title(LOCTEXT("ConvertToStaticMeshPickName", "Choose New StaticMesh Location"))
				.DefaultAssetPath(FText::FromString(PackageName));

			if (PickAssetPathWidget->ShowModal() == EAppReturnType::Ok)
			{
				// Get the full name of where we want to create the physics asset.
				FString UserPackageName = PickAssetPathWidget->GetFullAssetPath().ToString();
				FName MeshName(*FPackageName::GetLongPackageAssetName(UserPackageName));

				// Check if the user inputed a valid asset name, if they did not, give it the generated default name
				if (MeshName == NAME_None)
				{
					// Use the defaults that were already generated.
					UserPackageName = PackageName;
					MeshName = *Name;
				}


				FMeshDescription MeshDescription = BuildMeshDescription(InProcMeshComp);

				// If we got some valid data.
				if (MeshDescription.Polygons().Num() > 0)
				{
					// Then find/create it.
					UPackage* Package = CreatePackage(*UserPackageName);
					check(Package);

					// Create StaticMesh object
					UStaticMesh* StaticMesh = NewObject<UStaticMesh>(Package, MeshName, RF_Public | RF_Standalone);
					StaticMesh->InitResources();

					StaticMesh->SetLightingGuid(FGuid::NewGuid());

					// Add source to new StaticMesh
					FStaticMeshSourceModel& SrcModel = StaticMesh->AddSourceModel();
					SrcModel.BuildSettings.bRecomputeNormals = false;
					SrcModel.BuildSettings.bRecomputeTangents = false;
					SrcModel.BuildSettings.bRemoveDegenerates = false;
					SrcModel.BuildSettings.bUseHighPrecisionTangentBasis = false;
					SrcModel.BuildSettings.bUseFullPrecisionUVs = false;
					SrcModel.BuildSettings.bGenerateLightmapUVs = true;
					SrcModel.BuildSettings.SrcLightmapIndex = 0;
					SrcModel.BuildSettings.DstLightmapIndex = 1;
					StaticMesh->CreateMeshDescription(0, MoveTemp(MeshDescription));
					StaticMesh->CommitMeshDescription(0);

					//// SIMPLE COLLISION
					if (!InProcMeshComp->bUseComplexAsSimpleCollision)
					{
						StaticMesh->CreateBodySetup();
						UBodySetup* NewBodySetup = StaticMesh->GetBodySetup();
						NewBodySetup->BodySetupGuid = FGuid::NewGuid();
						NewBodySetup->AggGeom.ConvexElems = InProcMeshComp->ProcMeshBodySetup->AggGeom.ConvexElems;
						NewBodySetup->bGenerateMirroredCollision = false;
						NewBodySetup->bDoubleSidedGeometry = true;
						NewBodySetup->CollisionTraceFlag = CTF_UseDefault;
						NewBodySetup->CreatePhysicsMeshes();
					}

					//// MATERIALS
					TSet<UMaterialInterface*> UniqueMaterials;
					const int32 NumSections = InProcMeshComp->GetNumSections();
					for (int32 SectionIdx = 0; SectionIdx < NumSections; SectionIdx++)
					{
						FProcMeshSection* ProcSection =
							InProcMeshComp->GetProcMeshSection(SectionIdx);
						UMaterialInterface* Material = InProcMeshComp->GetMaterial(SectionIdx);
						UniqueMaterials.Add(Material);
					}
					// Copy materials to new mesh
					for (auto* Material : UniqueMaterials)
					{
						StaticMesh->GetStaticMaterials().Add(FStaticMaterial(Material));
					}

					//Set the Imported version before calling the build
					StaticMesh->ImportVersion = EImportStaticMeshVersion::LastVersion;

					// Build mesh from source
					StaticMesh->Build(false);
					StaticMesh->PostEditChange();

					// Notify asset registry of new asset
					FAssetRegistryModule::AssetCreated(StaticMesh);
					return true;
				}
			}
		}

		
		return false;
	}
}

#undef LOCTEXT_NAMESPACE 