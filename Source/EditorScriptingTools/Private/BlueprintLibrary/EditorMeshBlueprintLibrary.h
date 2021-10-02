//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//


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