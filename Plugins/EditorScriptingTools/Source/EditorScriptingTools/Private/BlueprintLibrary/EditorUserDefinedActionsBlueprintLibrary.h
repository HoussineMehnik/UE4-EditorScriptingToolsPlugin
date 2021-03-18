//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

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