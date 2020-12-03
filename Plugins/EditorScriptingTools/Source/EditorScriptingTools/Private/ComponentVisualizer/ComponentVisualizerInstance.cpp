//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "ComponentVisualizerInstance.h"
#include "NativeComponentVisualizerInstance.h"


UComponentVisualizerInstance::UComponentVisualizerInstance()
	: NativeInstanceWeakPtr(nullptr)
{

}

ELevelEditingContextType UComponentVisualizerInstance::GetLevelEditingContext()
{
	return ELevelEditingContextType::ComponentVisulizer;
}

const FDrawPrimitivesContext& UComponentVisualizerInstance::GetDrawPrimitivesContext()
{
	return NativeInstanceWeakPtr.IsValid() ? NativeInstanceWeakPtr.Pin()->GetDrawPrimitivesContext() : FDrawPrimitivesContext::InvalidContext;
}

const FDrawHUDContext& UComponentVisualizerInstance::GetDrawHUDContext()
{
	return NativeInstanceWeakPtr.IsValid() ? NativeInstanceWeakPtr.Pin()->GetDrawHUDContext() : FDrawHUDContext::InvalidContext;
}

void UComponentVisualizerInstance::SetNativeInstance(const TSharedPtr<FNativeComponentVisualizerInstance>& InNativeInstance)
{
	NativeInstanceWeakPtr = InNativeInstance;
}

void UComponentVisualizerInstance::CreateWorldHitProxyByIndex(FDummyStruct OnlyWithDrawPrimitives, int32 Index, UActorComponent* Component, EHitProxyPriorityType Priority, EMouseCursor::Type CursorType, bool bAllowsTranslucentPrimitives)
{
	if (NativeInstanceWeakPtr.IsValid())
	{
		NativeInstanceWeakPtr.Pin()->CreateWorldHitProxyByIndex(Index, Component, Priority, CursorType, bAllowsTranslucentPrimitives);
	}
}

void UComponentVisualizerInstance::ClearActiveWorldHitProxy()
{
	if (NativeInstanceWeakPtr.IsValid())
	{
		NativeInstanceWeakPtr.Pin()->ClearActiveWorldHitProxy();
	}
}


bool UComponentVisualizerInstance::NotifyPropertyModifiedByName(UActorComponent* Component, FName PropertyName)
{
	if (NativeInstanceWeakPtr.IsValid())
	{
		return NativeInstanceWeakPtr.Pin()->NotifyPropertyModifiedByName(Component, PropertyName);
	}
	return false;
}

bool UComponentVisualizerInstance::HandleClickVisualizerHitProxy_Implementation(const FIndexedComponentVisProxyInfo& HitInfo, const FLevelEditingViewportClick& ViewportClick)
{
	return false;
}

bool UComponentVisualizerInstance::OverrideTransformGizmoLocation_Implementation(FVector& NewLocation)
{
	return false;
}

bool UComponentVisualizerInstance::HandleTransformGizmoMove_Implementation(FVector& Drag, FRotator& DeltaRotation, FVector& DeltaScale)
{
	return false;
}

bool UComponentVisualizerInstance::OverrideTransformGizmoCoordinateSystem_Implementation(FTransform& NewTransform)
{
	return false;
}

bool UComponentVisualizerInstance::HandleInputKey_Implementation(FKey Key, EInputKeyEventType Event)
{
	return false;
}


bool UComponentVisualizerInstance::HandleSelectionBox_Implementation(const FBox& InBox)
{
	return false;
}

bool UComponentVisualizerInstance::HandleSelectionFrustum_Implementation(const FSelectionFrustumVolume& InFrustum)
{
	return false;
}

bool UComponentVisualizerInstance::HasFocusOnSelectionBoundingBox_Implementation(FBox& OutBoundingBox)
{
	return false;
}

bool UComponentVisualizerInstance::HandleSnapTo_Implementation(bool bInAlign, bool bInUseLineTrace, bool bInUseBounds, bool bInUsePivot, AActor* InDestination)
{
	return false;
}


TSubclassOf<UEditorUserWidget> UComponentVisualizerInstance::GetContextMenuUserWidgetClass_Implementation()
{
	return nullptr;
}
