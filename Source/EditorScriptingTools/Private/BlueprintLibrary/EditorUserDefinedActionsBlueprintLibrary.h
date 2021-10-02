//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditorUserDefinedActionsBlueprintLibrary.generated.h"

UCLASS()
class UEditorUserDefinedActionsBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Editor User Defined Actions")
		static bool RegisterEditorActions(class UEditorUserDefinedActions* ActionsAsset);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Editor User Defined Actions")
		static bool UnregisterEditorActions();

	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editor User Defined Actions")
		static class UEditorUserDefinedActions* GetActiveEditorActionsAsset();

};