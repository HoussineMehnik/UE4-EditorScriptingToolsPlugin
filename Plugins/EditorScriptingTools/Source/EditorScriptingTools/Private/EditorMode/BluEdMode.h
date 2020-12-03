//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "EdMode.h"
#include "InputCoreTypes.h"
#include "UnrealWidget.h"
#include "BluEdModeTypes.h"
#include "EditorScriptingToolsTypes.h"

class FBluEdModeToolkit;

class AActor;
class UObject;
class UBluEdModeObject;
class UEditorModeToolInstance;
class UEditorUserWidget;
class UBlueprint;
class UEditorUserDefinedActions;


class UEditorModeToolUtilityBlueprint;


class SWidget;

class FCanvas;
class FSceneView;
class FPrimitiveDrawInterface;
class FLevelEditorViewportClient;

struct FPopupTransitionEffect;
struct FCanvasAdvancedTextItem;

namespace ETransformGizmoMode { enum Type; }
enum class EBluEdModeChangeMode : uint8;
enum class EEditorState : uint8;


class FBluEdMode : public FEdMode
{

private:
	typedef FEdMode Super;
	static TWeakPtr<FBluEdMode> BluEdModeWeakPtr;

public:
	const static FEditorModeID BluEdModeID;


public:

	/** Constructor */
	FBluEdMode();

	/** Destructor */
	virtual ~FBluEdMode();

	//============================================================================================================================================================================================
	//=== Begin FEdMode interface ===

	/**
	 * method to serialize any UObjects contained that you wish to keep around.
	 *
	 * @param Collector The collector of referenced objects.
	 */
	virtual void AddReferencedObjects(FReferenceCollector& Collector) override;

	/** Called when the mode is constructed */
	virtual void Initialize() override;

	/** Called when the mode is entered */
	virtual void Enter() override;

	/** Called when the mode is exited */
	virtual void Exit() override;

	/** Called once per frame */
	/*<>*/virtual void Tick(FEditorViewportClient* ViewportClient, float DeltaTime) override;

	/** Overlays the editor hud (brushes, drag tools, static mesh vertices, etc*. */
	/*<>*/virtual void DrawHUD(FEditorViewportClient* ViewportClient, FViewport* Viewport, const FSceneView* View, FCanvas* Canvas) override;

	/** Draws translucent polygons on brushes and volumes. */
	/*<>*/virtual void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI) override;

	/* Called when the cursor has entered the level editor viewport.*/
	/*<>*/virtual bool MouseEnter(FEditorViewportClient* ViewportClient, FViewport* Viewport, int32 x, int32 y) override;

	/* Called when the cursor has left the level editor viewport.*/
	/*<>*/virtual bool MouseLeave(FEditorViewportClient* ViewportClient, FViewport* Viewport) override;

	/* Called when the cursor is moved within the level editor viewport.*/
	/*<>*/virtual bool MouseMove(FEditorViewportClient* ViewportClient, FViewport* Viewport, int32 x, int32 y) override;

	/** Called when the viewport gains keyboard focus. */
	/*<>*/virtual bool ReceivedFocus(FEditorViewportClient* ViewportClient, FViewport* Viewport) override;

	/** Called when the viewport loses keyboard focus.*/
	/*<>*/virtual bool LostFocus(FEditorViewportClient* ViewportClient, FViewport* Viewport) override;

	/**
	 * Called when the mouse is moved while a window input capture is in effect
	 *
	 * @param	InViewportClient	Level editor viewport client that captured the mouse input
	 * @param	InViewport			Viewport that captured the mouse input
	 * @param	InMouseX			New mouse cursor X coordinate
	 * @param	InMouseY			New mouse cursor Y coordinate
	 *
	 * @return	true if input was handled
	 */
	/*<>*/virtual bool CapturedMouseMove(FEditorViewportClient* InViewportClient, FViewport* InViewport, int32 InMouseX, int32 InMouseY);

	/** Process all captured mouse moves that occurred during the current frame */
	/*<>*/virtual bool ProcessCapturedMouseMoves(FEditorViewportClient* InViewportClient, FViewport* InViewport, const TArrayView<FIntPoint>& CapturedMouseMoves);

	/** Called when a key is pressed. */
	/*<>*/virtual bool InputKey(FEditorViewportClient* ViewportClient, FViewport* Viewport, FKey Key, EInputEvent Event) override;

	/**
	* Check an axis movement received by the viewport.
	* If the viewport client uses the movement, it should return true to consume it.
	* @param	InViewportClient - The viewport client which the axis movement is from.
	* @param	Viewport - The viewport which the axis movement is from.
	* @param	ControllerId - The controller which the axis movement is from.
	* @param	Key - The name of the axis which moved.
	* @param	Delta - The axis movement delta.
	* @param	DeltaTime - The time since the last axis update.
	* @return	True to consume the axis movement, false to pass it on.
	*/
	/*<>*/virtual bool InputAxis(FEditorViewportClient* InViewportClient, FViewport* Viewport, int32 ControllerId, FKey Key, float Delta, float DeltaTime) override;

	/**
	 * Called to give the viewport client a chance to handle widgets being moved
	 *
	 * @param InViewport	The viewport being rendered
	 * @param Drag			The amount the widget was translated (the value depends on the coordinate system of the widget.  See GetWidgetCoordSystem )
	 * @param Rot			The amount the widget was rotated  (the value depends on the coordinate system of the widget.  See GetWidgetCoordSystem )
	 * @param Scale			The amount the widget was scaled (the value depends on the coordinate system of the widget.  See GetWidgetCoordSystem )
	 */
	/*<>*/virtual bool InputDelta(FEditorViewportClient* InViewportClient, FViewport* InViewport, FVector& InDrag, FRotator& InRot, FVector& InScale) override;

	/** Called when a mouse button is pressed. */
	/*<>*/virtual bool StartTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport) override;

	/** Called when a mouse button is released. */
	/*<>*/virtual bool EndTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport) override;

	/** Called when clicking on a hit proxy */
	/*<>*/virtual bool HandleClick(FEditorViewportClient* InViewportClient, HHitProxy* HitProxy, const FViewportClick& Click) override;


	virtual EEditAction::Type GetActionEditDuplicate() override;
	virtual EEditAction::Type GetActionEditDelete() override;
	virtual EEditAction::Type GetActionEditCut() override;
	virtual EEditAction::Type GetActionEditCopy() override;
	virtual EEditAction::Type GetActionEditPaste() override;
	virtual bool ProcessEditDuplicate() override;
	virtual bool ProcessEditDelete() override;
	virtual bool ProcessEditCut() override;
	virtual bool ProcessEditCopy() override;
	virtual bool ProcessEditPaste() override;


	/**
	 * Called when attempting to duplicate the selected actors by alt+dragging,
	 * return true to prevent normal duplication.
	 */
	virtual bool HandleDragDuplicate() override;

	/**
	 * Lets each mode/tool handle frustum selection in its own way.
	 *
	 * false means "we haven't handled the selection", which allows the editor to perform the selection
	 * so false means "allow"
	 *
	 * true means "we have handled the selection", which effectively blocks the selection from happening
	 * so true means "block"
	 */
	/*<>*/virtual bool Select(AActor* InActor, bool bInSelected) override;

	/** Check to see if an actor can be selected in this mode - no side effects */
	/*<>*/virtual bool IsSelectionAllowed(AActor* InActor, bool bInSelection) const override;

	/** @return True if this mode allows the viewport to use a drag tool */
	/*<>*/virtual bool AllowsViewportDragTool() const override;

	/** Called when the currently selected actor has been moved , rotated or scaled */
	/*<>*/virtual void ActorMoveNotify() override;

	/** Called when the currently selected actors have been duplicated */
	/*<>*/virtual void ActorsDuplicatedNotify(TArray<AActor*>& PreDuplicateSelection, TArray<AActor*>& PostDuplicateSelection, bool bOffsetLocations) override;

	/** Called when the currently selected actor has changed */
	/*<>*/virtual void ActorSelectionChangeNotify() override;
	/*<>*/virtual void ActorPropChangeNotify() override;
	virtual void MapChangeNotify()  override;

	virtual bool ShowModeWidgets() const override;


	/**
	 * Allows each mode to customize the axis pieces of the widget they want drawn.
	 *
	 * @param	InwidgetMode	The current widget mode
	 *
	 * @return					A bitfield comprised of AXIS_* values
	 */
	/*<>*/virtual EAxisList::Type GetWidgetAxisToDraw(FWidget::EWidgetMode InWidgetMode) const override;

	/** If the EdMode is handling InputDelta (i.e., returning true from it), this allows a mode to indicated whether or not the Widget should also move. */
	/*<>*/virtual bool AllowWidgetMove() override;

	/** Check to see if the current widget mode can be cycled */
	/*<>*/virtual bool CanCycleWidgetMode() const  override;

	/** If the Edmode is handling its own mouse deltas, it can disable the MouseDeltaTacker */
	/*<>*/virtual bool DisallowMouseDeltaTracking() const  override;

	/**
	 * Lets each mode/tool specify a pivot point around which the camera should orbit
	 * @param	OutPivot	The custom pivot point returned by the mode/tool
	 * @return	true if a custom pivot point was specified, false otherwise.
	 */
	/*<>*/virtual bool GetPivotForOrbit(FVector& OutPivot) const override;

	/** If Rotation Snap should be enabled for this mode*/
	/*<>*/virtual bool IsSnapRotationEnabled() override;

	/** If this mode should override the snap rotation
	* @param	Rotation		The Rotation Override
	*
	* @return					True if you have overridden the value
	*/
	/*<>*/virtual bool SnapRotatorToGridOverride(FRotator& Rotation) override;

	/** True if this mode uses a toolkit mode (eventually they all should) */
	virtual bool UsesToolkits() const override;

	/**
	 * Lets each mode selectively enable widgets for editing properties tagged with 'Show 3D Widget' metadata.
	 */
	/*<>*/virtual bool UsesPropertyWidgets() const override;

	/**
	 * Get a cursor to override the default with, if any.
	 * @return true if the cursor was overridden.
	 */
	/*<>*/virtual bool GetCursor(EMouseCursor::Type& OutCursor) const override;

	/**
	 * Lets the mode determine if it wants to draw the transform widget or not.
	 */
	/*<>*/virtual bool ShouldDrawWidget() const override;
	bool OwnerShouldDrawWidget() const;

	/**
	 * Allows each mode/tool to determine a good location for the transform widget to be drawn at.
	 */
	/*<>*/virtual FVector GetWidgetLocation() const override;

	/**
	 * Lets each tool determine if it wants to use the editor widget or not.  If the tool doesn't want to use it,
	 * it will be fed raw mouse delta information (not snapped or altered in any way).
	 */
	/*<>*/virtual bool UsesTransformWidget() const override;

	/**
	 * Lets each mode selectively exclude certain widget types.
	 */
	/*<>*/virtual bool UsesTransformWidget(FWidget::EWidgetMode CheckMode) const override;
	bool OwnerUsesTransformWidget(ETransformGizmoMode::Type CheckMode) const;

	virtual bool IsCompatibleWith(FEditorModeID OtherModeID) const;


	/** Called after an Undo operation */
	/*<>*/virtual void PostUndo() override;

	/**
	 * Lets each mode/tool handle box selection in its own way.
	 *
	 * @param	InBox	The selection box to use, in worldspace coordinates.
	 * @return		true if something was selected/deselected, false otherwise.
	 */
	/*<>*/virtual bool BoxSelect(FBox& InBox, bool InSelect = true) override;

	/**
	 * Lets each mode/tool handle frustum selection in its own way.
	 *
	 * @param	InFrustum	The selection box to use, in worldspace coordinates.
	 * @return	true if something was selected/deselected, false otherwise.
	 */
	virtual bool FrustumSelect(const FConvexVolume& InFrustum, FEditorViewportClient* InViewportClient, bool InSelect = true) override;

	/** true if the passed in brush actor should be drawn in wireframe */
	/*<>*/virtual bool ShouldDrawBrushWireframe(AActor* InActor) const override;

	/**
	* Returns a coordinate system that should be applied on top of the worldspace system.
	*/
	virtual bool GetCustomDrawingCoordinateSystem(FMatrix& InMatrix, void* InData) override;

	/**
	 * @return The current coordinate system for drawing and input of the transform widget.
	 * For world coordiante system return the identity matrix
	 */
	virtual bool GetCustomInputCoordinateSystem(FMatrix& InMatrix, void* InData) override;

	//** Select texture to draw when visualizing vertices for selected BSP brushes and static meshes */
	/*<>*/virtual UTexture2D* GetVertexTexture() override;

	//=== End of FEdMode interface ===
	//============================================================================================================================================================================================


	static FBluEdMode* GetPtr();
	static TWeakPtr<FBluEdMode> GetWeakPtr();
	static const FDrawPrimitivesContext& GetDrawPrimitivesContext();
	static const FDrawHUDContext& GetDrawHUDContext();

	UEditorModeToolInstance* GetActiveToolInstance() const;
	UEditorUserWidget* GetActiveToolkitWidgetInstance() const;
	UEditorUserWidget* GetActiveViewportOverlayWidgetInstance() const;

	bool HasValidToolInstance() const;
	bool HasValidToolkitWidgetInstance() const;
	bool HasValidViewportOverlayWidgetInstance() const;

	bool IsToolRunning(const UEditorModeToolUtilityBlueprint* ToolBlueprint) const;
	UEditorModeToolUtilityBlueprint* GetModeToolBlueprint() const;
	UClass* GetModeToolClass() const;
	bool HasValidToolClass() const;
	void SetCurrentToolBlueprint(UEditorModeToolUtilityBlueprint* InBlueprint, bool bAutoLoadTool = false);

	void ReloadTool();
	void UnloadTool(bool bRefreshSlateWidget = true);

	bool CanUseCurrentToolInstance() const;
	bool IsEditingEnabled() const;

private:
	void OnViewportClientChanged(FEditorViewportClient* OldViewportClient, FEditorViewportClient* CurrentViewportClient);

	void BroadcastBluEdModeChanged(EBluEdModeChangeMode InChangeMode);
	void CheckBluEdModeGlobalPointer();

	void ClearCachedData();

	void HandleAnyBlueprintReinstanced();

	bool IsLevelEditingViewport(const FViewport* InViewport) const;
	bool IsLevelEditingViewportClient(const FEditorViewportClient* InViewportClient) const;

	void AddOverlayWidgetToViewport();
	void RemoveOverlayWidgetFromViewport();
	void MoveViewportOverlayWidgetToActiveViewport();
	EVisibility GetViewportOverlayWidgetVisibility() const;

	void DestroyRootedObjectInstance(UObject* Instance);

public:
	static void Register();
	static void Unregister();
	static void SetActive(bool bActivate);
	static bool IsActive();
	static FBluEdMode* GetActivated();


private:
	TWeakObjectPtr<UEditorModeToolUtilityBlueprint> CurrentToolBlueprintWeakPtr;

	TWeakObjectPtr<UEditorModeToolInstance> ActiveToolWeakPtr;
	TWeakObjectPtr<UEditorUserWidget> ActiveToolkitWidgetWeakPtr;
	TWeakObjectPtr<UEditorUserWidget> ActiveViewportOverlayWidgetWeakPtr;

	TSharedPtr<SWidget> OverlayWidgetContainer;

	FEditorViewportClient* LastActiveViewportClient;

	FDrawPrimitivesContext DrawPrimitivesContext;
	FDrawHUDContext DrawHUDContext;
};
