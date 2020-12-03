//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "BluEdModeBlueprintLibrary.generated.h"


class UEditorModeToolInstance;
class UEditorModeToolUtilityBlueprint;

UCLASS()
class UBluEdModeBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Editor Mode")
		static bool RunEditorModeToolInstance(TSoftObjectPtr<UEditorModeToolUtilityBlueprint> ToolBlueprint);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Editor Mode")
		static bool StopActiveEditorModeToolInstance();

	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editor Mode")
		static bool IsAnyEditorModeToolInstanceRunning();

	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editor Mode")
		static bool IsEditorModeToolInstanceRunning(TSoftObjectPtr<UEditorModeToolUtilityBlueprint> ToolBlueprint);

	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editor Mode", meta = (DeterminesOutputType = "ToolClass"))
		static UEditorModeToolInstance* GetActiveEditorModeToolInstanceInstance(TSubclassOf<UEditorModeToolInstance> ToolClass);

	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editor Mode")
		static TSoftObjectPtr<UEditorModeToolUtilityBlueprint> GetActiveEditorModeToolUtilityBlueprint();

};