//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "UObject/SoftObjectPtr.h"
#include "EditorModeToolUtilityBlueprint.h"
#include "EditorModeToolInstance.h"
#include "BluEdModeBlueprintLibrary.generated.h"


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