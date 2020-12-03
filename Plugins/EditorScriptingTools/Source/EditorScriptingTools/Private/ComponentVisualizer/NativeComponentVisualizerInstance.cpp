//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "NativeComponentVisualizerInstance.h"
#include "EditorScriptingToolsUtils.h"
#include "ComponentVisualizerInstance.h"
#include "LevelEditingViewportUtils.h"
#include "ComponentVisualizerUtilityBlueprint.h"
#include "HitProxiesTypes.h"
#include <Widgets/Input/SButton.h>
#include "EditorScriptingToolsSubsystem.h"
#include "LevelEditorUtils.h"
#include "EditorUserWidget.h"


PRAGMA_DISABLE_OPTIMIZATION


FNativeComponentVisualizerInstance::FNativeComponentVisualizerInstance(UComponentVisualizerUtilityBlueprint* VisualizerBlueprint)
	: InstanceWeakPtr(nullptr)
	, InstanceBlueprintWeakPtr(VisualizerBlueprint)
{
	
}

FNativeComponentVisualizerInstance::~FNativeComponentVisualizerInstance()
{
	DestroyInstanceIfNeeded();
}

void FNativeComponentVisualizerInstance::CreateInstance()
{
	DestroyInstanceIfNeeded();

	if (UComponentVisualizerUtilityBlueprint* Blueprint = InstanceBlueprintWeakPtr.Get())
	{
		InstanceWeakPtr = EditorScriptingToolsUtils::CreateTransientEditorObject<UComponentVisualizerInstance>(GetTransientPackage(), Blueprint->GeneratedClass);
		InstanceWeakPtr->AddToRoot();
		InstanceWeakPtr->SetNativeInstance(SharedThis(this));
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				InstanceWeakPtr->Construct();
		}
	}
}

void FNativeComponentVisualizerInstance::DestroyInstanceIfNeeded()
{
	if (InstanceWeakPtr.IsValid())
	{
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				InstanceWeakPtr->Destruct();
		}
		
		InstanceWeakPtr->Rename(nullptr, GetTransientPackage());
		InstanceWeakPtr->RemoveFromRoot();
		InstanceWeakPtr->MarkPendingKill();
		InstanceWeakPtr = nullptr;
	}
}

bool FNativeComponentVisualizerInstance::HasValidInstance() const
{
	return InstanceWeakPtr.IsValid();
}

bool FNativeComponentVisualizerInstance::CanUseCurrentInstance() const
{
	return HasValidInstance() && IsEditingEnabled();
}

bool FNativeComponentVisualizerInstance::IsEditingEnabled() const
{

	const EEditorState CurrentState = LevelEditorUtils::GetEditorState();
	return (CurrentState == EEditorState::Editor) ||
		(CurrentState == EEditorState::SimulatingInEditor && UEditorScriptingToolsSubsystem::GetSubsystem()->bEnableEditingWhileSimulating);
}

void FNativeComponentVisualizerInstance::OnRegister()
{
	CreateInstance();
	GEditor->OnBlueprintReinstanced().AddSP(this, &FNativeComponentVisualizerInstance::HandleAnyBlueprintReinstanced);
}

void FNativeComponentVisualizerInstance::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	if (LevelEditingViewportUtils::IsCurrentLevelEditingViewport(View))
	{
		if (CanUseCurrentInstance())
		{
			DrawPrimitivesContext.Set(View, PDI);
			{
				EDITOR_SCRIPT_EXECUTION_GUARD
					InstanceWeakPtr->ReceiveDrawPrimitives(FActorComponentWrapper(Component));
			}
			DrawPrimitivesContext.Invalidate();
		}
	}
}

void FNativeComponentVisualizerInstance::DrawVisualizationHUD(const UActorComponent* Component, const FViewport* Viewport, const FSceneView* View, FCanvas* Canvas)
{
	if (LevelEditingViewportUtils::IsCurrentLevelEditingViewport(View))
	{
		if (CanUseCurrentInstance())
		{
			DrawHUDContext.Set(Viewport, View, Canvas);
			{
				EDITOR_SCRIPT_EXECUTION_GUARD
					InstanceWeakPtr->ReceiveDrawHUD(FActorComponentWrapper(Component));
			}
			DrawHUDContext.Invalidate();
		}
	}
}

bool FNativeComponentVisualizerInstance::VisProxyHandleClick(FEditorViewportClient* InViewportClient, HComponentVisProxy* VisProxy, const FViewportClick& Click)
{
	if (IsVisProxyValid(VisProxy))
	{
		if (LevelEditingViewportUtils::IsCurrentLevelEditingViewport(InViewportClient))
		{
			if (CanUseCurrentInstance())
			{
				const HIndexedComponentVisProxy* IndexedCompVisProxy = static_cast<const HIndexedComponentVisProxy*>(VisProxy);
				const FIndexedComponentVisProxyInfo ProxyInfo{ IndexedCompVisProxy->Component.Get(), IndexedCompVisProxy->Index };
				const FLevelEditingViewportClick ViewportClick(Click);
				EDITOR_SCRIPT_EXECUTION_GUARD
					if (InstanceWeakPtr->HandleClickVisualizerHitProxy(ProxyInfo, ViewportClick))
					{
						return true;
					}
			}
		}
	}

	return false;
}

void FNativeComponentVisualizerInstance::EndEditing()
{
	if (CanUseCurrentInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			InstanceWeakPtr->OnEndEditing();
	}
}

bool FNativeComponentVisualizerInstance::GetWidgetLocation(const FEditorViewportClient* InViewportClient, FVector& OutLocation) const
{
	if (LevelEditingViewportUtils::IsCurrentLevelEditingViewport(InViewportClient))
	{
		if (CanUseCurrentInstance())
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				if (InstanceWeakPtr->OverrideTransformGizmoLocation(OutLocation))
				{
					return true;
				}
		}
	}

	return false;
}

bool FNativeComponentVisualizerInstance::GetCustomInputCoordinateSystem(const FEditorViewportClient* InViewportClient, FMatrix& OutMatrix) const
{
	if (LevelEditingViewportUtils::IsCurrentLevelEditingViewport(InViewportClient))
	{
		if (CanUseCurrentInstance())
		{
			FTransform OutTransform{};
			EDITOR_SCRIPT_EXECUTION_GUARD
				if (InstanceWeakPtr->OverrideTransformGizmoCoordinateSystem(OutTransform))
				{
					OutMatrix = OutTransform.ToMatrixWithScale();
					return true;
				}
		}
	}

	return false;
}

bool FNativeComponentVisualizerInstance::HandleInputDelta(FEditorViewportClient* InViewportClient, FViewport* InViewport, FVector& DeltaTranslate, FRotator& DeltalRotate, FVector& DeltaScale)
{
	if (LevelEditingViewportUtils::IsCurrentLevelEditingViewport(InViewportClient))
	{
		if (CanUseCurrentInstance())
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				if (InstanceWeakPtr->HandleTransformGizmoMove(DeltaTranslate, DeltalRotate, DeltaScale))
				{
					return true;
				}
		}
	}

	return false;
}

bool FNativeComponentVisualizerInstance::HandleInputKey(FEditorViewportClient* InViewportClient, FViewport* InViewport, FKey Key, EInputEvent Event)
{
	if (LevelEditingViewportUtils::IsCurrentLevelEditingViewport(InViewportClient))
	{
		if (CanUseCurrentInstance())
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				if (InstanceWeakPtr->HandleInputKey(Key, static_cast<EInputKeyEventType>(Event)))
				{
					return true;
				}
		}
	}

	return false;
}

bool FNativeComponentVisualizerInstance::HandleModifiedClick(FEditorViewportClient* InViewportClient, HHitProxy* HitProxy, const FViewportClick& Click)
{
	return false;
}

bool FNativeComponentVisualizerInstance::HandleBoxSelect(const FBox& InBox, FEditorViewportClient* InViewportClient, FViewport* InViewport)
{
	if (LevelEditingViewportUtils::IsCurrentLevelEditingViewport(InViewportClient))
	{
		if (CanUseCurrentInstance())
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				return InstanceWeakPtr->HandleSelectionBox(InBox);
		}
	}

	return false;
}

bool FNativeComponentVisualizerInstance::HandleFrustumSelect(const FConvexVolume& InFrustum, FEditorViewportClient* InViewportClient, FViewport* InViewport)
{
	if (LevelEditingViewportUtils::IsCurrentLevelEditingViewport(InViewportClient))
	{
		if (CanUseCurrentInstance())
		{
			FSelectionFrustumVolume FrustumVolume{ InFrustum };
			EDITOR_SCRIPT_EXECUTION_GUARD
				return InstanceWeakPtr->HandleSelectionFrustum(FrustumVolume);
		}
	}

	return false;
}

bool FNativeComponentVisualizerInstance::HasFocusOnSelectionBoundingBox(FBox& OutBoundingBox)
{
	if (CanUseCurrentInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return InstanceWeakPtr->HasFocusOnSelectionBoundingBox(OutBoundingBox);
	}

	return false;
}

bool FNativeComponentVisualizerInstance::HandleSnapTo(const bool bInAlign, const bool bInUseLineTrace, const bool bInUseBounds, const bool bInUsePivot, AActor* InDestination)
{
	if (CanUseCurrentInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return InstanceWeakPtr->HandleSnapTo(bInAlign, bInUseLineTrace, bInUseBounds, bInUsePivot, InDestination);
	}

	return false;
}

TSharedPtr<SWidget> FNativeComponentVisualizerInstance::GenerateContextMenu() const
{
	if (CanUseCurrentInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			if (UClass* UserWidget = InstanceWeakPtr->GetContextMenuUserWidgetClass())
			{
				UEditorUserWidget* Widget = EditorScriptingToolsUtils::CreateTransientEditorWidget<UEditorUserWidget>(InstanceWeakPtr.Get(), UserWidget);
				InstanceWeakPtr->OnContextMenuConstruct(Widget);
				return Widget->TakeWidget();
			}
	}

	return TSharedPtr<SWidget>();
}

bool FNativeComponentVisualizerInstance::IsVisualizingArchetype() const
{
	return false;
}

UClass* FNativeComponentVisualizerInstance::GetVisualizedComponentClass() const
{
	if (UComponentVisualizerUtilityBlueprint* ComponentVisualizerUtilityBlueprint = InstanceBlueprintWeakPtr.Get())
	{
		return ComponentVisualizerUtilityBlueprint->GeneratedClass.Get();
	}
	return nullptr;
}

void FNativeComponentVisualizerInstance::CreateWorldHitProxyByIndex(int32 Index, UActorComponent* Component, EHitProxyPriorityType Priority, EMouseCursor::Type CursorType, bool bAllowsTranslucentPrimitives)
{
	if (DrawPrimitivesContext.PDI != nullptr)
	{
		DrawPrimitivesContext.PDI->SetHitProxy(new HIndexedComponentVisProxy(Component, Index, Priority, CursorType, bAllowsTranslucentPrimitives));
	}
}

void FNativeComponentVisualizerInstance::ClearActiveWorldHitProxy()
{
	if (DrawPrimitivesContext.PDI != nullptr)
	{
		DrawPrimitivesContext.PDI->SetHitProxy(nullptr);
	}
}

bool FNativeComponentVisualizerInstance::NotifyPropertyModifiedByName(UActorComponent* Component, const FName& PropertyName)
{
	if (IsValid(Component))
	{
		if (FProperty* Property = FindFProperty<FProperty>(Component->GetClass(), PropertyName))
		{
			FComponentVisualizer::NotifyPropertyModified(Component, Property);
			return true;
		}
	}
	return false;
}

bool FNativeComponentVisualizerInstance::IsVisProxyValid(HComponentVisProxy* VisProxy) const
{
	return
		VisProxy != nullptr &&
		VisProxy->Component.IsValid() &&
		VisProxy->IsA(HIndexedComponentVisProxy::StaticGetType());
}

void FNativeComponentVisualizerInstance::HandleAnyBlueprintReinstanced()
{
	CreateInstance();
}


PRAGMA_ENABLE_OPTIMIZATION