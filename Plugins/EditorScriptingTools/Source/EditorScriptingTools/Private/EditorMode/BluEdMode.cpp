//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "BluEdMode.h"
#include "BluEdModeToolkit.h"
#include "Toolkits/ToolkitManager.h"
#include "EditorScriptingToolsModule.h"
#include "Toolkits/BaseToolkit.h"
#include "EditorModeTools.h"
#include "EditorModeManager.h"
#include "EditorModes.h"
#include "EditorTypesWrapperTypes.h"
#include "EditorScriptingToolsTypes.h"
#include "ILevelViewport.h"
#include "SLevelViewport.h"
#include "LevelEditorViewport.h"
#include "EditorViewportClient.h"
#include "Framework/Application/SlateApplication.h"
#include "CanvasItem.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/Selection.h"
#include "EngineUtils.h"
#include "CoreGlobals.h"
#include "Misc/FeedbackContext.h"
#include "StaticMeshResources.h"
#include "CanvasTypes.h"
#include "Editor.h"
#include "AssetRegistryModule.h"
#include "Misc/HotReloadInterface.h"
#include "Engine/Blueprint.h"
#include "EditorScriptingToolsSubsystem.h"
#include "EditorUserWidget.h"
#include "WidgetBlueprint.h"
#include "EditorUserDefinedActions.h"
#include "HitProxiesTypes.h"
#include "CanvasTypes.h"
#include "LevelEditor.h"
#include "EditorModeToolInstance.h"
#include "LevelEditorUtils.h"
#include "EditorScriptingToolsUtils.h"
#include "Widgets/Layout/SConstraintCanvas.h"
#include "Materials/Material.h"
#include "MaterialShared.h"
#include "EditorScriptingToolsStyle.h"
#include "SBluEdModeWidget.h"
#include "EditorModeToolUtilityBlueprint.h"
#include "HitProxiesUtils.h"
#include "LevelEditingViewportUtils.h"


#define LOCTEXT_NAMESPACE "FBluEdMode"

TWeakPtr<FBluEdMode> FBluEdMode::BluEdModeWeakPtr = nullptr;
const FEditorModeID FBluEdMode::BluEdModeID = TEXT("EM_BluEdMode");

FBluEdMode::FBluEdMode()
	: FEdMode()
	, CurrentToolBlueprintWeakPtr(nullptr)
	, ActiveToolWeakPtr(nullptr)
	, ActiveToolkitWidgetWeakPtr(nullptr)
	, ActiveViewportOverlayWidgetWeakPtr(nullptr)
	, OverlayWidgetContainer(nullptr)
	, LastActiveViewportClient(nullptr)
	, DrawPrimitivesContext()
	, DrawHUDContext()
{

}

FBluEdMode::~FBluEdMode()
{
	ClearCachedData();
	BluEdModeWeakPtr = nullptr;
	CurrentToolBlueprintWeakPtr = nullptr;
}

void FBluEdMode::AddReferencedObjects(FReferenceCollector& Collector)
{
	Super::AddReferencedObjects(Collector);
}

void FBluEdMode::Initialize()
{
	UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
	SetCurrentToolBlueprint(ScriptingToolsSubsystem->LastLoadedEdModeToolBlueprint.Get());
}

void FBluEdMode::Enter()
{
	Super::Enter();

	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FBluEdModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}

	BroadcastBluEdModeChanged(EBluEdModeChangeMode::EnterMode);
}

void FBluEdMode::Exit()
{
	BroadcastBluEdModeChanged(EBluEdModeChangeMode::ExitMode);

	UnloadTool(false);
	if (Toolkit.IsValid())
	{
		FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
		Toolkit.Reset();
	}
	Super::Exit();
}

void FBluEdMode::Tick(FEditorViewportClient* ViewportClient, float DeltaTime)
{
	if (IsLevelEditingViewportClient(ViewportClient))
	{
		if (LastActiveViewportClient != ViewportClient)
		{
			if (LastActiveViewportClient != nullptr)
				OnViewportClientChanged(LastActiveViewportClient, ViewportClient);

			LastActiveViewportClient = ViewportClient;
		}

		if (CanUseCurrentToolInstance())
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				ActiveToolWeakPtr->ReceiveTick(DeltaTime);
		}
	}
}

void FBluEdMode::DrawHUD(FEditorViewportClient* InViewportClient, FViewport* InViewport, const FSceneView* InView, FCanvas* InCanvas)
{
	if (IsLevelEditingViewportClient(InViewportClient))
	{
		if (CanUseCurrentToolInstance())
		{
			DrawHUDContext.Set(InViewport, InView, InCanvas);
			{
				EDITOR_SCRIPT_EXECUTION_GUARD
					ActiveToolWeakPtr->ReceiveDrawHUD();
			}
			DrawHUDContext.Invalidate();
			InCanvas->SetHitProxy(nullptr);
		}
	}

	if (UsesPropertyWidgets())
	{
		Super::DrawHUD(InViewportClient, InViewport, InView, InCanvas);
	}
}

void FBluEdMode::Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI)
{
	if (IsLevelEditingViewport(Viewport))
	{
		if (CanUseCurrentToolInstance())
		{
			DrawPrimitivesContext.Set(View, PDI);
			{
				EDITOR_SCRIPT_EXECUTION_GUARD
					ActiveToolWeakPtr->ReceiveDrawPrimitives();
			}
			DrawPrimitivesContext.Invalidate();
			PDI->SetHitProxy(nullptr);
		}
	}

	if (UsesPropertyWidgets())
	{
		Super::Render(View, Viewport, PDI);
	}
}

bool FBluEdMode::MouseEnter(FEditorViewportClient* InViewportClient, FViewport* Viewport, int32 x, int32 y)
{
	if (IsLevelEditingViewportClient(InViewportClient))
	{
		if (CanUseCurrentToolInstance())
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				ActiveToolWeakPtr->OnMouseEnter(x, y);
		}
	}

	return false;
}

bool FBluEdMode::MouseLeave(FEditorViewportClient* InViewportClient, FViewport* Viewport)
{
	if (IsLevelEditingViewportClient(InViewportClient))
	{
		if (CanUseCurrentToolInstance())
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				ActiveToolWeakPtr->OnMouseLeave();
		}
	}
	return false;
}

bool FBluEdMode::MouseMove(FEditorViewportClient* InViewportClient, FViewport* Viewport, int32 x, int32 y)
{
	if (IsLevelEditingViewportClient(InViewportClient))
	{
		if (CanUseCurrentToolInstance())
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				ActiveToolWeakPtr->OnMouseMove(x, y);
		}
	}

	return false;
}

bool FBluEdMode::ReceivedFocus(FEditorViewportClient* InViewportClient, FViewport* Viewport)
{
	if (IsLevelEditingViewportClient(InViewportClient))
	{
		if (CanUseCurrentToolInstance())
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				ActiveToolWeakPtr->OnFocusReceived();
		}
	}

	return false;
}

bool FBluEdMode::LostFocus(FEditorViewportClient* InViewportClient, FViewport* Viewport)
{
	if (IsLevelEditingViewportClient(InViewportClient))
	{
		if (CanUseCurrentToolInstance())
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				ActiveToolWeakPtr->OnFocusLost();
		}
	}

	return false;
}

bool FBluEdMode::CapturedMouseMove(FEditorViewportClient* InViewportClient, FViewport* InViewport, int32 InMouseX, int32 InMouseY)
{
	if (IsLevelEditingViewportClient(InViewportClient))
	{
		if (CanUseCurrentToolInstance())
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				ActiveToolWeakPtr->OnMouseMoveCaptured(InMouseX, InMouseY);
		}
	}

	return false;
}

bool FBluEdMode::ProcessCapturedMouseMoves(FEditorViewportClient* InViewportClient, FViewport* InViewport, const TArrayView<FIntPoint>& CapturedMouseMoves)
{
	if (IsLevelEditingViewportClient(InViewportClient))
	{
		if (CanUseCurrentToolInstance())
		{
			const int32 NumMoves = CapturedMouseMoves.Num();
			TArray<FIntPoint> CapturedMouseMovesArray;
			CapturedMouseMovesArray.SetNumUninitialized(NumMoves);
			for (int32 Index = 0; Index < NumMoves; ++Index)
			{
				CapturedMouseMovesArray[Index] = CapturedMouseMoves[Index];
			}

			{
				EDITOR_SCRIPT_EXECUTION_GUARD
					ActiveToolWeakPtr->OnMouseMovesCaptured(CapturedMouseMovesArray);
			}
		}
	}
	return false;
}

bool FBluEdMode::InputKey(FEditorViewportClient* ViewportClient, FViewport* Viewport, FKey Key, EInputEvent Event)
{
	if (Event != IE_Axis)
	{
		if (IsLevelEditingViewportClient(ViewportClient))
		{
			if (CanUseCurrentToolInstance())
			{
				EDITOR_SCRIPT_EXECUTION_GUARD
					if (ActiveToolWeakPtr->HandleInputKey(Key, static_cast<EInputKeyEventType>(Event)))
					{
						return true;
					}
			}
		}
	}

	return false;
}

bool FBluEdMode::InputAxis(FEditorViewportClient* InViewportClient, FViewport* Viewport, int32 ControllerId, FKey Key, float Delta, float DeltaTime)
{
	if (IsLevelEditingViewportClient(InViewportClient))
	{
		if (CanUseCurrentToolInstance())
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				if (ActiveToolWeakPtr->HandleInputAxis(ControllerId, Key, Delta, DeltaTime))
				{
					return true;
				}
		}
	}

	return false;
}

bool FBluEdMode::InputDelta(FEditorViewportClient* InViewportClient, FViewport* InViewport, FVector& InDrag, FRotator& InRot, FVector& InScale)
{
	if (UsesPropertyWidgets())
	{
		const bool bPropertyWidgetEdited = Super::InputDelta(InViewportClient, InViewport, InDrag, InRot, InScale);
		if (bPropertyWidgetEdited)
		{
			return true;
		}
	}

	if (IsLevelEditingViewportClient(InViewportClient))
	{
		if (CanUseCurrentToolInstance())
		{
			if (!InViewportClient->IsMovingCamera() && !InViewportClient->IsAltPressed())
			{
				EDITOR_SCRIPT_EXECUTION_GUARD
					if (ActiveToolWeakPtr->HandleWidgetMove(InDrag, InRot, InScale))
					{
						return true;
					}
			}
		}
	}

	return false;
}

bool FBluEdMode::StartTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport)
{
	if (IsLevelEditingViewportClient(InViewportClient))
	{
		if (CanUseCurrentToolInstance())
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				if (ActiveToolWeakPtr->HandleMouseTrackingStart())
				{
					return true;
				}
		}
	}

	return false;
}

bool FBluEdMode::EndTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport)
{
	if (IsLevelEditingViewportClient(InViewportClient))
	{
		if (CanUseCurrentToolInstance())
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				if (ActiveToolWeakPtr->HandleMouseTrackingEnd())
				{
					return true;
				}
		}
	}

	return false;
}

bool FBluEdMode::HandleClick(FEditorViewportClient* InViewportClient, HHitProxy* HitProxy, const FViewportClick& Click)
{

	if (IsLevelEditingViewportClient(InViewportClient))
	{
		if (CanUseCurrentToolInstance())
		{
			const TSharedPtr<FHitProxyWrapper> HitProxyWrapper = HitProxiesUtils::CreateProxyWrapperFromHitProxy(HitProxy);
			if (HitProxyWrapper.IsValid())
			{
				FHitProxyHandle HitProxyHandle{ HitProxyWrapper };
				FLevelEditingViewportClick ViewportClick(Click);

				EDITOR_SCRIPT_EXECUTION_GUARD
					if (ActiveToolWeakPtr->HandleClickHitProxy(HitProxyHandle, ViewportClick))
					{
						return true;
					}
			}
		}
	}

	if (UsesPropertyWidgets())
	{
		return Super::HandleClick(InViewportClient, HitProxy, Click);
	}

	return false;
}

EEditAction::Type FBluEdMode::GetActionEditDuplicate()
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return static_cast<EEditAction::Type>(ActiveToolWeakPtr->OverrideActionEditDuplicateStatus());
	}
	return Super::GetActionEditDuplicate();
}

EEditAction::Type FBluEdMode::GetActionEditDelete()
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return static_cast<EEditAction::Type>(ActiveToolWeakPtr->OverrideActionEditDeleteStatus());
	}
	return Super::GetActionEditDelete();
}

EEditAction::Type FBluEdMode::GetActionEditCut()
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return static_cast<EEditAction::Type>(ActiveToolWeakPtr->OverrideActionEditCutStatus());
	}
	return Super::GetActionEditCut();
}

EEditAction::Type FBluEdMode::GetActionEditCopy()
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return static_cast<EEditAction::Type>(ActiveToolWeakPtr->OverrideActionEditCopyStatus());
	}
	return Super::GetActionEditCopy();
}

EEditAction::Type FBluEdMode::GetActionEditPaste()
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return static_cast<EEditAction::Type>(ActiveToolWeakPtr->OverrideActionEditPasteStatus());
	}
	return Super::GetActionEditPaste();
}

bool FBluEdMode::ProcessEditDuplicate()
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return ActiveToolWeakPtr->ProcessEditDuplicate();
	}
	return false;
}

bool FBluEdMode::ProcessEditDelete()
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return ActiveToolWeakPtr->ProcessEditDelete();
	}
	return false;
}

bool FBluEdMode::ProcessEditCut()
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return ActiveToolWeakPtr->ProcessEditCut();
	}
	return false;
}

bool FBluEdMode::ProcessEditCopy()
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return ActiveToolWeakPtr->ProcessEditCopy();
	}
	return false;
}

bool FBluEdMode::ProcessEditPaste()
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return ActiveToolWeakPtr->ProcessEditPaste();
	}
	return false;
}

bool FBluEdMode::HandleDragDuplicate()
{
	// Not implemented anywhere
	return false;
}

bool FBluEdMode::Select(AActor* InActor, bool bInSelected)
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return ActiveToolWeakPtr->SelectActor(InActor, bInSelected);
	}
	return false;
}

bool FBluEdMode::IsSelectionAllowed(AActor* InActor, bool bInSelection) const
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return ActiveToolWeakPtr->SelectionAllowed(InActor, bInSelection);
	}
	return true;
}

bool FBluEdMode::AllowsViewportDragTool() const
{
	// No real effect when other builtin modes are running
	//  bCanUseDragTool |= Mode->AllowsViewportDragTool()
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return ActiveToolWeakPtr->CanUseViewportDragTool();
	}
	return true;
}

void FBluEdMode::ActorMoveNotify()
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			ActiveToolWeakPtr->NotifyActorMoved();
	}
}

void FBluEdMode::ActorsDuplicatedNotify(TArray<AActor*>& PreDuplicateSelection, TArray<AActor*>& PostDuplicateSelection, bool bOffsetLocations)
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			ActiveToolWeakPtr->NotifyActorsDuplicated(PreDuplicateSelection, PostDuplicateSelection, bOffsetLocations);
	}
}

void FBluEdMode::ActorSelectionChangeNotify()
{
	Super::ActorSelectionChangeNotify();

	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			ActiveToolWeakPtr->NotifyActorSelectionChanged();
	}
}

void FBluEdMode::ActorPropChangeNotify()
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			ActiveToolWeakPtr->NotifyActorPropertyChanged();
	}
}

void FBluEdMode::MapChangeNotify()
{

}

bool FBluEdMode::ShowModeWidgets() const
{
	return true;
}

EAxisList::Type FBluEdMode::GetWidgetAxisToDraw(FWidget::EWidgetMode InWidgetMode) const
{
	if (CanUseCurrentToolInstance())
	{
		const ETransformGizmoMode::Type WidgetMode = static_cast<ETransformGizmoMode::Type>(InWidgetMode);
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				const ETransformGizmoAxisList::Type OutAxisType = ActiveToolWeakPtr->CustomizeTransformGizmoAxis(WidgetMode);
			return  static_cast<EAxisList::Type>(OutAxisType);
		}
	}
	return EAxisList::All;
}

bool FBluEdMode::AllowWidgetMove()
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return ActiveToolWeakPtr->AllowTransformGizmoMove();
	}
	return true;
}

bool FBluEdMode::CanCycleWidgetMode() const
{

	/*
		- Not implemented anywhere
		- FEditorViewportClient::CanCycleWidgetMode returns allways true
	*/
	return true;
}

bool FBluEdMode::DisallowMouseDeltaTracking() const
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return ActiveToolWeakPtr->DisallowMouseDeltaTracking();
	}
	return false;
}

bool FBluEdMode::GetPivotForOrbit(FVector& OutPivot) const
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return ActiveToolWeakPtr->OverrideCameraPivotForOrbit(OutPivot);
	}
	return false;
}

bool FBluEdMode::IsSnapRotationEnabled()
{
	return Super::IsSnapRotationEnabled();
}

bool FBluEdMode::SnapRotatorToGridOverride(FRotator& Rotation)
{
	return Super::SnapRotatorToGridOverride(Rotation);
}

bool FBluEdMode::UsesToolkits() const
{
	return true;
}

bool FBluEdMode::UsesPropertyWidgets() const
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return ActiveToolWeakPtr->AllowPropertyWidgetsEditings();
	}
	return true;
}

bool FBluEdMode::GetCursor(EMouseCursor::Type& OutCursor) const
{
	bool bOverrideCursor = false;
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			const EMouseCursor::Type NewCursor = ActiveToolWeakPtr->OverrideMouseCursor(bOverrideCursor);

		if (bOverrideCursor)
		{
			OutCursor = NewCursor;
			return true;
		}
	}
	return bOverrideCursor;
}

bool FBluEdMode::ShouldDrawWidget() const
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return ActiveToolWeakPtr->CanDrawTransformGizmo();
	}
	return Super::ShouldDrawWidget();
}

bool FBluEdMode::OwnerShouldDrawWidget() const
{
	bool bDrawWidget = false;

	bool bHadSelectableComponents = false;
	if (Owner->GetSelectedComponents()->Num() > 0)
	{
		// when components are selected, only show the widget when one or more are scene components
		for (FSelectedEditableComponentIterator It(*Owner->GetSelectedComponents()); It; ++It)
		{
			bHadSelectableComponents = true;
			if (It->IsA<USceneComponent>())
			{
				bDrawWidget = true;
				break;
			}
		}
	}

	if (!bHadSelectableComponents)
	{
		// when actors are selected, only show the widget when all selected actors have scene components
		bDrawWidget = Owner->SelectionHasSceneComponent();
	}

	return bDrawWidget;
}

FVector FBluEdMode::GetWidgetLocation() const
{
	if (CanUseCurrentToolInstance())
	{
		FVector OutLocation(ForceInit);

		EDITOR_SCRIPT_EXECUTION_GUARD
			if (ActiveToolWeakPtr->OverrideTransformGizmoLocation(OutLocation))
			{
				return OutLocation;
			}
	}

	return Super::GetWidgetLocation();
}

bool FBluEdMode::UsesTransformWidget() const
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return ActiveToolWeakPtr->CanUseTransformGizmo();
	}
	return true;
}

bool FBluEdMode::UsesTransformWidget(FWidget::EWidgetMode CheckMode) const
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return ActiveToolWeakPtr->CanUseTransformGizmoByMode(static_cast<ETransformGizmoMode::Type>(CheckMode));
	}
	return Super::UsesTransformWidget(CheckMode);
}

bool FBluEdMode::OwnerUsesTransformWidget(ETransformGizmoMode::Type CheckMode) const
{
	if (UsesPropertyWidgets())
	{
		FTransform DisplayWidgetToWorld;
		UObject* BestSelectedItem = GetItemToTryDisplayingWidgetsFor(/*out*/ DisplayWidgetToWorld);

		if (BestSelectedItem != nullptr)
		{
			// If editing a vector (not a transform)
			if (!EditedPropertyName.IsEmpty() && !bEditedPropertyIsTransform)
			{
				return (static_cast<FWidget::EWidgetMode>(CheckMode) == FWidget::WM_Translate);
			}
		}
	}

	return true;
}

bool FBluEdMode::IsCompatibleWith(FEditorModeID OtherModeID) const
{
	return false;
}

void FBluEdMode::PostUndo()
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			ActiveToolWeakPtr->OnPostUndo();
	}
}

bool FBluEdMode::BoxSelect(FBox& InBox, bool InSelect /*= true*/)
{
	if (CanUseCurrentToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			return ActiveToolWeakPtr->HandleSelectionBox(InBox, InSelect);
	}
	return false;
}

bool FBluEdMode::FrustumSelect(const FConvexVolume& InFrustum, FEditorViewportClient* InViewportClient, bool InSelect /*= true*/)
{
	if (CanUseCurrentToolInstance())
	{
		FSelectionFrustumVolume FrustumVolume{InFrustum};
		EDITOR_SCRIPT_EXECUTION_GUARD
			return ActiveToolWeakPtr->HandleSelectionFrustum(FrustumVolume, InSelect);
	}

	return false;
}

bool FBluEdMode::ShouldDrawBrushWireframe(AActor* InActor) const
{
	return true;
}

bool FBluEdMode::GetCustomDrawingCoordinateSystem(FMatrix& InMatrix, void* InData)
{
	if (CanUseCurrentToolInstance())
	{
		FTransform OutTransform;
		EDITOR_SCRIPT_EXECUTION_GUARD
			if (ActiveToolWeakPtr->OverrideTransformGizmoCoordinateSystem(OutTransform))
			{
				InMatrix = OutTransform.ToMatrixWithScale();
				return true;
			}
	}
	return Super::GetCustomDrawingCoordinateSystem(InMatrix, InData);
}

bool FBluEdMode::GetCustomInputCoordinateSystem(FMatrix& InMatrix, void* InData)
{
	if (GetCustomDrawingCoordinateSystem(InMatrix, InData))
	{
		return true;
	}
	return false;
}

UTexture2D* FBluEdMode::GetVertexTexture()
{
	return Super::GetVertexTexture();
}

FBluEdMode* FBluEdMode::GetPtr()
{
	return BluEdModeWeakPtr.Pin().Get();
}

TWeakPtr<FBluEdMode> FBluEdMode::GetWeakPtr()
{
	return BluEdModeWeakPtr;
}

const FDrawPrimitivesContext& FBluEdMode::GetDrawPrimitivesContext()
{
	return BluEdModeWeakPtr.IsValid() ? BluEdModeWeakPtr.Pin()->DrawPrimitivesContext : FDrawPrimitivesContext::InvalidContext;

}

const FDrawHUDContext& FBluEdMode::GetDrawHUDContext()
{
	return BluEdModeWeakPtr.IsValid() ? BluEdModeWeakPtr.Pin()->DrawHUDContext : FDrawHUDContext::InvalidContext;

}

UEditorModeToolInstance* FBluEdMode::GetActiveToolInstance() const
{
	if (HasValidToolInstance())
	{
		return ActiveToolWeakPtr.Get();
	}
	return nullptr;
}

UEditorUserWidget* FBluEdMode::GetActiveToolkitWidgetInstance() const
{
	if (ActiveToolkitWidgetWeakPtr != nullptr)
	{
		return ActiveToolkitWidgetWeakPtr.Get();
	}
	return nullptr;
}

UEditorUserWidget* FBluEdMode::GetActiveViewportOverlayWidgetInstance() const
{
	if (ActiveViewportOverlayWidgetWeakPtr != nullptr)
	{
		return ActiveViewportOverlayWidgetWeakPtr.Get();
	}
	return nullptr;
}

bool FBluEdMode::HasValidToolInstance() const
{
	return ActiveToolWeakPtr.IsValid();
}

bool FBluEdMode::HasValidToolkitWidgetInstance() const
{
	return ActiveToolkitWidgetWeakPtr.IsValid();
}

bool FBluEdMode::HasValidViewportOverlayWidgetInstance() const
{
	return ActiveViewportOverlayWidgetWeakPtr.IsValid();
}

bool FBluEdMode::IsToolRunning(const UEditorModeToolUtilityBlueprint* ToolBlueprint) const
{
	return
		GetModeToolBlueprint() == ToolBlueprint &&
		HasValidToolInstance();
}

UEditorModeToolUtilityBlueprint* FBluEdMode::GetModeToolBlueprint() const
{
	return CurrentToolBlueprintWeakPtr.Get();
}

UClass* FBluEdMode::GetModeToolClass() const
{
	if (UEditorModeToolUtilityBlueprint* ToolBlueprint = GetModeToolBlueprint())
	{
		return ToolBlueprint->GeneratedClass;
	}
	return nullptr;
}


bool FBluEdMode::HasValidToolClass() const
{
	return GetModeToolClass() != nullptr;
}

void FBluEdMode::SetCurrentToolBlueprint(UEditorModeToolUtilityBlueprint* InBlueprint, bool bAutoLoadTool /*= false*/)
{
	UnloadTool(true);

	bool bCanLoadNewTool = false;
	if (InBlueprint != nullptr)
	{
		CurrentToolBlueprintWeakPtr = InBlueprint;
		bCanLoadNewTool = true;
	}
	else if (CurrentToolBlueprintWeakPtr.IsValid())
	{
		CurrentToolBlueprintWeakPtr = nullptr;
	}

	UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
	ScriptingToolsSubsystem->LastLoadedEdModeToolBlueprint = CurrentToolBlueprintWeakPtr.Get();
	ScriptingToolsSubsystem->NotifySettingsModified();

	if (bAutoLoadTool && bCanLoadNewTool)
	{
		ReloadTool();
	}
}

void FBluEdMode::ReloadTool()
{
	UnloadTool(false);
	if (UEditorModeToolUtilityBlueprint * ToolBlueprint = GetModeToolBlueprint())
	{
		if (UWorld * CurrentWorld = GetWorld())
		{
			UClass* ToolClass = ToolBlueprint->GeneratedClass;
			if (EditorScriptingToolsUtils::CanInstantiateClass(ToolClass))
			{
				ActiveToolWeakPtr = TWeakObjectPtr<UEditorModeToolInstance>(EditorScriptingToolsUtils::CreateTransientEditorObject<UEditorModeToolInstance>(CurrentWorld, ToolClass));
				ActiveToolWeakPtr->AddToRoot();
				{
					EDITOR_SCRIPT_EXECUTION_GUARD
						ActiveToolWeakPtr->OnToolStarted();
				}
			}

			if (ActiveToolWeakPtr.IsValid())
			{


				// Toolkit Widget
				{
					UClass* ToolkitWidgetClass = ToolkitWidgetClass = ToolBlueprint->ToolkitWidgetClass;
					if (EditorScriptingToolsUtils::CanInstantiateClass(ToolkitWidgetClass))
					{
						ActiveToolkitWidgetWeakPtr = TWeakObjectPtr<UEditorUserWidget>(EditorScriptingToolsUtils::CreateTransientEditorWidget<UEditorUserWidget>(CurrentWorld, ToolkitWidgetClass));
						ActiveToolkitWidgetWeakPtr->AddToRoot();
					}
				}

				// Viewport Overlay Widget
				{
					UClass* OverlayWidgetClass = OverlayWidgetClass = ToolBlueprint->ViewportOverlayWidgetClass;
					if (EditorScriptingToolsUtils::CanInstantiateClass(OverlayWidgetClass))
					{
						ActiveViewportOverlayWidgetWeakPtr = TWeakObjectPtr<UEditorUserWidget>(EditorScriptingToolsUtils::CreateTransientEditorWidget<UEditorUserWidget>(CurrentWorld, OverlayWidgetClass));
						ActiveViewportOverlayWidgetWeakPtr->AddToRoot();
						AddOverlayWidgetToViewport();
					}
				}

				ToolBlueprint->OnRegisterDone();

				if (GEditor)
				{
					GEditor->OnBlueprintReinstanced().AddSP(this, &FBluEdMode::HandleAnyBlueprintReinstanced);
				}
			}
		}
	}
	BroadcastBluEdModeChanged(EBluEdModeChangeMode::RefreshWidget);
}


void FBluEdMode::UnloadTool(bool bRefreshSlateWidget /*= true*/)
{
	if (GEditor)
	{
		GEditor->OnBlueprintReinstanced().RemoveAll(this);
	}

	if (HasValidToolInstance())
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			ActiveToolWeakPtr->OnToolEnded();
	}

	RemoveOverlayWidgetFromViewport();

	if (ActiveToolWeakPtr.IsValid())
	{
		DestroyRootedObjectInstance(ActiveToolWeakPtr.Get());
		ActiveToolWeakPtr.Reset();
	}

	if (ActiveToolkitWidgetWeakPtr.IsValid())
	{
		DestroyRootedObjectInstance(ActiveToolkitWidgetWeakPtr.Get());
		ActiveToolkitWidgetWeakPtr.Reset();
	}

	if (ActiveViewportOverlayWidgetWeakPtr.IsValid())
	{
		DestroyRootedObjectInstance(ActiveViewportOverlayWidgetWeakPtr.Get());
		ActiveViewportOverlayWidgetWeakPtr.Reset();
	}

	if (UEditorModeToolUtilityBlueprint* ToolBlueprint = GetModeToolBlueprint())
	{
		ToolBlueprint->OnUnregisterDone();
	}

	ClearCachedData();

	if (bRefreshSlateWidget)
	{
		BroadcastBluEdModeChanged(EBluEdModeChangeMode::RefreshWidget);
	}
}

bool FBluEdMode::CanUseCurrentToolInstance() const
{
	if (!HasValidToolInstance())
	{
		return false;
	}

	return IsEditingEnabled();
}

bool FBluEdMode::IsEditingEnabled() const
{

	const EEditorState CurrentState = LevelEditorUtils::GetEditorState();
	return (CurrentState == EEditorState::Editor) ||
		(CurrentState == EEditorState::SimulatingInEditor && UEditorScriptingToolsSubsystem::GetSubsystem()->bEnableEditingWhileSimulating);
}

void FBluEdMode::OnViewportClientChanged(FEditorViewportClient* OldViewportClient, FEditorViewportClient* CurrentViewportClient)
{
	if (CanUseCurrentToolInstance())
	{
		MoveViewportOverlayWidgetToActiveViewport();
		EDITOR_SCRIPT_EXECUTION_GUARD
			ActiveToolWeakPtr->OnEditingViewportChanged();
	}
}

void FBluEdMode::BroadcastBluEdModeChanged(EBluEdModeChangeMode InChangeMode)
{
	if (InChangeMode == EBluEdModeChangeMode::ExitMode)
	{
		BluEdModeWeakPtr = nullptr;
	}
	else
	{
		CheckBluEdModeGlobalPointer();
	}
	FBluEdModeEditorDelegates::OnBluEdModeChangedDelegate.Broadcast(InChangeMode);
	FEditorScriptingToolsDelegates::RefreshEditorScriptingToolsTabDelegate.Broadcast();
}



void FBluEdMode::CheckBluEdModeGlobalPointer()
{
	if (BluEdModeWeakPtr.IsValid()) return;
	BluEdModeWeakPtr = SharedThis(this);
}


void FBluEdMode::ClearCachedData()
{
	DrawHUDContext.Invalidate();
	DrawPrimitivesContext.Invalidate();
}

void FBluEdMode::HandleAnyBlueprintReinstanced()
{
	ReloadTool();
}


bool FBluEdMode::IsLevelEditingViewport(const FViewport* InViewport) const
{
	return (InViewport != nullptr) && (InViewport == GEditor->GetActiveViewport());
}

bool FBluEdMode::IsLevelEditingViewportClient(const FEditorViewportClient* InViewportClient) const
{
	return LevelEditingViewportUtils::IsCurrentLevelEditingViewport(InViewportClient);
}


void FBluEdMode::AddOverlayWidgetToViewport()
{
	RemoveOverlayWidgetFromViewport();

	if (HasValidViewportOverlayWidgetInstance())
	{
		TSharedPtr<SLevelViewport> ViewportWindow = StaticCastSharedPtr<SLevelViewport>(GCurrentLevelEditingViewportClient->GetEditorViewportWidget());
		if (ViewportWindow.IsValid())
		{
			OverlayWidgetContainer = ActiveViewportOverlayWidgetWeakPtr->TakeWidget();
			OverlayWidgetContainer->SetVisibility(TAttribute<EVisibility>::Create(TAttribute<EVisibility>::FGetter::CreateSP(this, &FBluEdMode::GetViewportOverlayWidgetVisibility)));
			ViewportWindow->AddOverlayWidget(OverlayWidgetContainer.ToSharedRef());
		}
	}
}

void FBluEdMode::RemoveOverlayWidgetFromViewport()
{
	if (OverlayWidgetContainer.IsValid() && GCurrentLevelEditingViewportClient != nullptr)
	{
		TSharedPtr<SLevelViewport> ViewportWindow = StaticCastSharedPtr<SLevelViewport>(GCurrentLevelEditingViewportClient->GetEditorViewportWidget());
		if (ViewportWindow.IsValid())
		{
			ViewportWindow->RemoveOverlayWidget(OverlayWidgetContainer->AsShared());
			OverlayWidgetContainer = nullptr;
		}
	}
}

void FBluEdMode::MoveViewportOverlayWidgetToActiveViewport()
{
	if (OverlayWidgetContainer.IsValid())
	{
		TSharedPtr<SLevelViewport> LastViewportWidget = StaticCastSharedPtr<SLevelViewport>(GLastKeyLevelEditingViewportClient->GetEditorViewportWidget());
		TSharedPtr<SLevelViewport> CurrentViewportWidget = StaticCastSharedPtr<SLevelViewport>(GCurrentLevelEditingViewportClient->GetEditorViewportWidget());

		if (LastViewportWidget.IsValid())
		{
			LastViewportWidget->RemoveOverlayWidget(OverlayWidgetContainer.ToSharedRef());
		}

		if (CurrentViewportWidget.IsValid())
		{
			CurrentViewportWidget->AddOverlayWidget(OverlayWidgetContainer.ToSharedRef());
		}
	}
}

EVisibility FBluEdMode::GetViewportOverlayWidgetVisibility() const
{
	return SBluEdModeWidget::IsViewportOverlayWidgetVisibilityFlagSet() ? EVisibility::Visible : EVisibility::Collapsed;
}

void FBluEdMode::DestroyRootedObjectInstance(UObject* Instance)
{
	if (Instance != nullptr)
	{
		Instance->Rename(nullptr, GetTransientPackage());
		Instance->RemoveFromRoot();
		Instance->MarkPendingKill();
	}
}

void FBluEdMode::Register()
{
	FEditorModeRegistry::Get().RegisterMode<FBluEdMode>(
		FBluEdMode::BluEdModeID,
		LOCTEXT("BluEdModeName", "Blueprint Editor Mode"),
		FSlateIcon(FEditorScriptingToolsStyle::Get()->GetStyleSetName(), TEXT("BluEdMode")),
		true);
}

void FBluEdMode::Unregister()
{
	FEditorModeRegistry::Get().UnregisterMode(FBluEdMode::BluEdModeID);
}

void FBluEdMode::SetActive(bool bActivate)
{
	if (bActivate)
	{
		GLevelEditorModeTools().ActivateMode(FBluEdMode::BluEdModeID, false);
	}
	else
	{
		GLevelEditorModeTools().DeactivateMode(FBluEdMode::BluEdModeID);
	}
}

bool FBluEdMode::IsActive()
{
	return GLevelEditorModeTools().IsModeActive(FBluEdMode::BluEdModeID);
}

FBluEdMode* FBluEdMode::GetActivated()
{
	SetActive(true);
	if (FBluEdMode* BluEdMode = static_cast<FBluEdMode*>(GLevelEditorModeTools().GetActiveMode(FBluEdMode::BluEdModeID)))
	{
		return BluEdMode;
	}

	return nullptr;
}

#undef LOCTEXT_NAMESPACE