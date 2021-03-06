//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditorMeshBlueprintLibrary.generated.h"


UCLASS(MinimalAPI, meta = (ScriptName = "EditorProceduralMeshLibrary"))
class UEditorMeshBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Procedural Mesh")
		static bool ConvertProceduralMeshToStaticMesh(class UProceduralMeshComponent* ProceduralMeshComponent, class UStaticMesh*& OutStaticMesh);
};