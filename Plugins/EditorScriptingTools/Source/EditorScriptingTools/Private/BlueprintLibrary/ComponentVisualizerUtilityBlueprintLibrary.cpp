//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

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