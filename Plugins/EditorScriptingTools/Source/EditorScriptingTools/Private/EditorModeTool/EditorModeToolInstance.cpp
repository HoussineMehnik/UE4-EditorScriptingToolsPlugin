//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorModeToolInstance.h"
#include "BluEdMode.h"
#include "Editor.h"
#include "Editor/EditorEngine.h"
#include "HitProxiesTypes.h"
#include "CanvasTypes.h"
#include "BluEdModeTypes.h"
#include "LevelViewportPrimitiveDrawingUtils.h"
#include "LevelViewportCanvasDrawingUtils.h"



UEditorModeToolInstance::UEditorModeToolInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

ELevelEditingContextType UEditorModeToolInstance::GetLevelEditingContext()
{
	return ELevelEditingContextType::EditorMode;
}

const FDrawPrimitivesContext& UEditorModeToolInstance::GetDrawPrimitivesContext()
{
	return FBluEdMode::GetDrawPrimitivesContext();
}

const FDrawHUDContext& UEditorModeToolInstance::GetDrawHUDContext()
{
	return FBluEdMode::GetDrawHUDContext();
}


bool UEditorModeToolInstance::SelectActor_Implementation(AActor* InActor, bool bIsSelected)
{
	return false;
}

bool UEditorModeToolInstance::SelectionAllowed_Implementation(AActor* InActor, bool bSelection) const
{
	return true;
}

bool UEditorModeToolInstance::CanUseViewportDragTool_Implementation() const
{
	return true;
}


EEditModeAction UEditorModeToolInstance::OverrideActionEditDuplicateStatus_Implementation()
{
	return EEditModeAction::Skip;
}


EEditModeAction UEditorModeToolInstance::OverrideActionEditDeleteStatus_Implementation()
{
	return EEditModeAction::Skip;
}


EEditModeAction UEditorModeToolInstance::OverrideActionEditCutStatus_Implementation()
{
	return EEditModeAction::Skip;
}


EEditModeAction UEditorModeToolInstance::OverrideActionEditCopyStatus_Implementation()
{
	return EEditModeAction::Skip;
}


EEditModeAction UEditorModeToolInstance::OverrideActionEditPasteStatus_Implementation()
{
	return EEditModeAction::Skip;
}


bool UEditorModeToolInstance::ProcessEditDuplicate_Implementation()
{
	return false;
}


bool UEditorModeToolInstance::ProcessEditDelete_Implementation()
{
	return false;
}


bool UEditorModeToolInstance::ProcessEditCut_Implementation()
{
	return false;
}


bool UEditorModeToolInstance::ProcessEditCopy_Implementation()
{
	return false;
}


bool UEditorModeToolInstance::ProcessEditPaste_Implementation()
{
	return false;
}


ETransformGizmoAxisList::Type UEditorModeToolInstance::CustomizeTransformGizmoAxis_Implementation(ETransformGizmoMode::Type CurrentWidgetMode)
{
	return ETransformGizmoAxisList::All;
}


bool UEditorModeToolInstance::AllowTransformGizmoMove_Implementation()
{
	return true;
}


bool UEditorModeToolInstance::DisallowMouseDeltaTracking_Implementation() const
{
	return false;
}


bool UEditorModeToolInstance::OverrideCameraPivotForOrbit_Implementation(FVector& OutPivot) const
{
	return false;
}


bool UEditorModeToolInstance::AllowPropertyWidgetsEditings_Implementation() const
{
	return true;
}


EMouseCursor::Type UEditorModeToolInstance::OverrideMouseCursor_Implementation(bool& bOverrideCursor) const
{
	bOverrideCursor = false;
	return EMouseCursor::Default;
}


bool UEditorModeToolInstance::CanDrawTransformGizmo_Implementation() const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		return BluEdMode->OwnerShouldDrawWidget();
	}
	return true;
}


bool UEditorModeToolInstance::OverrideTransformGizmoLocation_Implementation(FVector& NewLocation) const
{
	return false;
}


bool UEditorModeToolInstance::CanUseTransformGizmo_Implementation() const
{
	return true;
}


bool UEditorModeToolInstance::CanUseTransformGizmoByMode_Implementation(ETransformGizmoMode::Type CheckMode) const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		return BluEdMode->OwnerUsesTransformWidget(CheckMode);
	}
	return true;
}


bool UEditorModeToolInstance::HandleSelectionBox_Implementation(FBox& InBox, bool InSelect /*= true*/)
{
	return false;
}


bool UEditorModeToolInstance::HandleSelectionFrustum_Implementation(const FSelectionFrustumVolume& InFrustum, bool InSelect /*= true*/)
{
	return false;
}


bool UEditorModeToolInstance::HandleInputKey_Implementation(FKey Key, EInputKeyEventType Event)
{
	return false;
}


bool UEditorModeToolInstance::HandleInputAxis_Implementation(int32 ControllerId, FKey Key, float Delta, float DeltaTime)
{
	return false;
}


bool UEditorModeToolInstance::HandleWidgetMove_Implementation(FVector& Drag, FRotator& DeltaRotation, FVector& DeltaScale)
{
	return false;
}


bool UEditorModeToolInstance::HandleMouseTrackingStart_Implementation()
{
	return false;
}


bool UEditorModeToolInstance::HandleMouseTrackingEnd_Implementation()
{
	return false;
}


bool UEditorModeToolInstance::HandleClickHitProxy_Implementation(UPARAM(ref) FHitProxyHandle& HitProxyHandle, const FLevelEditingViewportClick& ViewportClick)
{
	HitProxyHandle.Invalidate();
	return false;
}

bool UEditorModeToolInstance::OverrideTransformGizmoCoordinateSystem_Implementation(FTransform& NewTransform)
{
	return false;
}

void UEditorModeToolInstance::CreateNewHitProxyByIndex(FDummyStruct DrawPrimitivesContext, int32 Index, EHitProxyPriorityType Priority /*= EBluEdModeHitProxyPriorityType::World*/, EMouseCursor::Type CursorType /*= EMouseCursor::Default*/, bool bAllowsTranslucentPrimitives /*= false*/)
{
	if (FPrimitiveDrawInterface* PDI = FBluEdMode::GetDrawPrimitivesContext().PDI)
	{
		PDI->SetHitProxy(new HIndexedHitProxy(Index, Priority, CursorType, bAllowsTranslucentPrimitives));
	}
}

void UEditorModeToolInstance::ClearActiveHitProxy(FDummyStruct DrawPrimitivesContext)
{
	if (FPrimitiveDrawInterface* PDI = FBluEdMode::GetDrawPrimitivesContext().PDI)
	{
		PDI->SetHitProxy(nullptr);
	}
}

UEditorUserWidget* UEditorModeToolInstance::GetActiveToolkitWidgetInstance()
{
	if (FBluEdMode* BlueEdMode = FBluEdMode::GetPtr())
	{
		return BlueEdMode->GetActiveToolkitWidgetInstance();
	}
	return nullptr;
}

UEditorUserWidget* UEditorModeToolInstance::GetActiveViewportOverlayWidgetInstance()
{
	if (FBluEdMode* BlueEdMode = FBluEdMode::GetPtr())
	{
		return BlueEdMode->GetActiveViewportOverlayWidgetInstance();
	}
	return nullptr;
}
