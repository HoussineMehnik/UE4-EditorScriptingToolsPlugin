//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "ComponentVisualizerUtilityBlueprintLibrary.h"



#define LOCTEXT_NAMESPACE "ComponentVisualizerUtilityBlueprintLibrary"

bool UComponentVisualizerUtilityBlueprintLibrary::IsValidPropertyPathHandle(UPARAM(ref) FComponentPropertyPathHandle& Handle)
{
	return Handle.PropertyPath.IsValid();
}

FComponentPropertyPathHandle UComponentVisualizerUtilityBlueprintLibrary::CreateComponentPropertyPathHandle(UActorComponent* Component)
{
	return FComponentPropertyPathHandle(Component);
}

void UComponentVisualizerUtilityBlueprintLibrary::ResetPropertyPathHandle(UPARAM(ref) FComponentPropertyPathHandle& Handle)
{
	Handle.PropertyPath.Reset();
}

AActor* UComponentVisualizerUtilityBlueprintLibrary::GetParentOwningActorByPropertyPathHandle(UPARAM(ref) FComponentPropertyPathHandle& Handle)
{
	return Handle.PropertyPath.GetParentOwningActor();
}

UActorComponent* UComponentVisualizerUtilityBlueprintLibrary::GetComponentByPropertyPathHandle(UPARAM(ref) FComponentPropertyPathHandle& Handle)
{
	return Handle.PropertyPath.GetComponent();
}

#undef LOCTEXT_NAMESPACE