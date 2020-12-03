//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditorMeshBlueprintLibrary.generated.h"


class UProceduralMeshComponent;
class UStaticMeshComponent;
class UStaticMesh;

UCLASS(MinimalAPI, meta = (ScriptName = "EditorProceduralMeshLibrary"))
class UEditorMeshBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Procedural Mesh")
		static bool ConvertProceduralMeshToStaticMesh(UProceduralMeshComponent* ProceduralMeshComponent, UStaticMesh*& OutStaticMesh);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Procedural Mesh")
		static void OverrideWireframeColor(UStaticMeshComponent* StaticMeshComp, FColor NewColor);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Procedural Mesh")
		static void ResetWireframeColor(UStaticMeshComponent* StaticMeshComp);
};