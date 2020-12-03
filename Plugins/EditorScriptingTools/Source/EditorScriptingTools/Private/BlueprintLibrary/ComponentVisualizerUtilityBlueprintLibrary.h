//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditorTypesWrapperTypes.h"
#include "ComponentVisualizerUtilityBlueprintLibrary.generated.h"

class UActorComponent;

UCLASS()
class UComponentVisualizerUtilityBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/** Determines whether the property path is valid or not. */
	UFUNCTION(BlueprintPure, Category = "ComponentVisualizer|ComponentPropertyPathHandle")
		static bool IsValidPropertyPathHandle(UPARAM(ref) FComponentPropertyPathHandle& Handle);

	/** creates a new component property handle from a given component pointer. */
	UFUNCTION(BlueprintCallable, Category = "ComponentVisualizer|ComponentPropertyPathHandle")
		static FComponentPropertyPathHandle CreateComponentPropertyPathHandle(UActorComponent* Component);

	/** Resets the property path. */
	UFUNCTION(BlueprintCallable, Category = "ComponentVisualizer|ComponentPropertyPathHandle")
		static void ResetPropertyPathHandle(UPARAM(ref) FComponentPropertyPathHandle& Handle);

	/** Gets the parent owning actor for the component, or nullptr if it is not valid. */
	UFUNCTION(BlueprintPure, Category = "ComponentVisualizer|ComponentPropertyPathHandle")
		static AActor* GetParentOwningActorByPropertyPathHandle(UPARAM(ref) FComponentPropertyPathHandle& Handle);

	/** Gets a pointer to the component, or nullptr if it is not valid. */
	UFUNCTION(BlueprintPure, Category = "ComponentVisualizer|ComponentPropertyPathHandle")
		static UActorComponent* GetComponentByPropertyPathHandle(UPARAM(ref) FComponentPropertyPathHandle& Handle);

};