//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "EditorMeshBlueprintLibrary.h"
#include "EditorMeshUtils.h"

#define LOCTEXT_NAMESPACE "FBluEdMode"

bool UEditorMeshBlueprintLibrary::ConvertProceduralMeshToStaticMesh(UProceduralMeshComponent* ProceduralMeshComponent, UStaticMesh*& OutStaticMesh)
{
	return EditorMeshUtils::CreateStaticMeshAssetFromProceduralMesh(ProceduralMeshComponent, OutStaticMesh);
}

#undef LOCTEXT_NAMESPACE