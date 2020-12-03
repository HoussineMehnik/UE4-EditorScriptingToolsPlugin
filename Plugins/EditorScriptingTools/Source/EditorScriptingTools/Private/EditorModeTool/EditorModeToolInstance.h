//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once


#include "LevelEditorToolBase.h"
#include "HitProxiesTypes.h"
#include "EditorModeToolInstance.generated.h"

class UEditorUserDefinedActions;
class UTexture2D;
class AActor;
class USplineComponent;
class UEditorUserWidget;
enum class EInputKeyEventType :uint8;



UCLASS(Abstract, Blueprintable, config = Editor)
class UEditorModeToolInstance : public ULevelEditorToolBase
{
	GENERATED_UCLASS_BODY()

public:

	//~ Begin ILevelEditingContext interface
	virtual ELevelEditingContextType GetLevelEditingContext() final;
	virtual const FDrawPrimitivesContext& GetDrawPrimitivesContext() final;
	virtual const FDrawHUDContext& GetDrawHUDContext() final;
	//~ End UObject interface

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//~ Native Events

	/** Called when the tool is started */
	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode", meta = (DisplayName = "On Tool Started"))
		void OnToolStarted();

	/** Called when the tool is closed */
	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode", meta = (DisplayName = "On Tool Ended"))
		void OnToolEnded();

	/**
	* Called once per frame
	*
	* @param  DeltaTime  Real time passed since last tick
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode", meta = (DisplayName = "Receive Tick"))
		void ReceiveTick(float DeltaTime);

	/** Overlays the editor hud (brushes, drag tools, static mesh vertices, etc*. */
	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode", meta = (DisplayName = "Receive Draw HUD"))
		void ReceiveDrawHUD();

	/** Draws translucent polygons on brushes and volumes. */
	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode", meta = (DisplayName = "Receive Draw Primitives"))
		void ReceiveDrawPrimitives();

	/* Called when the cursor has entered the level editor viewport.*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode | Input | Mouse", meta = (DisplayName = "On Mouse Enter"))
		void OnMouseEnter(int32 MouseX, int32 MouseY);

	/* Called when the cursor has left the level editor viewport.*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode | Input | Mouse", meta = (DisplayName = "On Mouse Leave"))
		void OnMouseLeave();

	/* Called when the cursor is moved within the level editor viewport.*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode | Input | Mouse", meta = (DisplayName = "On Mouse Move"))
		void OnMouseMove(int32 MouseX, int32 MouseY);

	/** Called when the viewport gains keyboard focus. */
	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode | Input", meta = (DisplayName = "On Focus Received"))
		void OnFocusReceived();

	/** Called when the viewport loses keyboard focus.*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode | Input", meta = (DisplayName = "On Focus Lost"))
		void OnFocusLost();

	/**
	* Called when the mouse is moved while a window input capture is in effect
	*
	* @param  MouseX  New mouse cursor X coordinate
	* @param  MouseY  New mouse cursor Y coordinate
	* @return  true if input was handled
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode | Input | Mouse", meta = (DisplayName = "On Mouse Move Captured"))
		void OnMouseMoveCaptured(int32 MouseX, int32 MouseY);

	/** Process all captured mouse moves that occurred during the current frame */
	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode | Input | Mouse", meta = (DisplayName = "On Mouse Moves Captured"))
		void  OnMouseMovesCaptured(const TArray<FIntPoint>& MouseMoves);

	/**
	 * Check a key event received by the viewport.
	 * If the viewport client uses the event, it should return true to consume it.
	 *
	 * @param	Key  The name of the pressed/released key.
	 * @param	Event  The Input event.
	 * @return	True to consume the key event, false to pass it on.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Input", meta = (DisplayName = "Handle Input Key"))
		bool HandleInputKey(FKey Key, EInputKeyEventType Event);

	/**
	* Check an axis movement received by the viewport.
	* If the viewport client uses the movement, it should return true to consume it.
	*
	* @param	ControllerId  The controller which the axis movement is from.
	* @param	Key  The name of the axis which moved.
	* @param	Delta  The axis movement delta.
	* @param	DeltaTime  The time since the last axis update.
	* @return	True to consume the axis movement, false to pass it on.
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Input", meta = (DisplayName = "Handle Input Axis"))
		bool HandleInputAxis(int32 ControllerId, FKey Key, float Delta, float DeltaTime);


	/**
	 * Called to give the viewport client a chance to handle widgets being moved
	 *
	 * @param Drag					The amount the widget was translated (the value depends on the coordinate system of the widget.  See GetGizmoCustomCoordinateSystem )
	 * @param DeltaRotation			The amount the widget was rotated  (the value depends on the coordinate system of the widget.  See GetGizmoCustomCoordinateSystem )
	 * @param DeltaScale			The amount the widget was scaled (the value depends on the coordinate system of the widget.  See GetGizmoCustomCoordinateSystem )
	 * @return	True to consume the widget movement, false to pass it on.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Input", meta = (DisplayName = "Handle Widget Move"))
		bool HandleWidgetMove(UPARAM(ref) FVector& Drag, UPARAM(ref) FRotator& DeltaRotation, UPARAM(ref) FVector& DeltaScale);

	/** Called when a mouse button is pressed. */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Input", meta = (DisplayName = "Handle Mouse Tracking Start"))
		bool HandleMouseTrackingStart();

	/** Called when a mouse button is released. */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Input", meta = (DisplayName = "Handle Mouse Tracking End"))
		bool HandleMouseTrackingEnd();

	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Input", meta = (DisplayName = "Handle Indexed Hit Proxy Click"))
		bool HandleClickHitProxy(UPARAM(ref) FHitProxyHandle& HitProxyHandle, const FLevelEditingViewportClick& ViewportClick);

	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Input", meta = (DisplayName = "Override Action Edit Duplicate Status"))
		EEditModeAction OverrideActionEditDuplicateStatus();

	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Input", meta = (DisplayName = "Override Action Edit Delete Status"))
		EEditModeAction OverrideActionEditDeleteStatus();

	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Input", meta = (DisplayName = "Override Action Edit Cut Status"))
		EEditModeAction OverrideActionEditCutStatus();

	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Input", meta = (DisplayName = "Override Action Edit Copy Status"))
		EEditModeAction OverrideActionEditCopyStatus();

	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Input", meta = (DisplayName = "Override Action Edit Paste Status"))
		EEditModeAction OverrideActionEditPasteStatus();

	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Input", meta = (DisplayName = "Process Edit Duplicate"))
		bool ProcessEditDuplicate();

	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Input", meta = (DisplayName = "Process Edit Delete "))
		bool ProcessEditDelete();

	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Input", meta = (DisplayName = "Process Edit Cut"))
		bool ProcessEditCut();

	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Input", meta = (DisplayName = "Process Edit Copy"))
		bool ProcessEditCopy();

	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Input", meta = (DisplayName = "Process Edit Paste"))
		bool ProcessEditPaste();




	/**
	 * Lets each mode/tool handle frustum selection in its own way.
	 * False means "we haven't handled the selection", which allows the editor to perform the selection
	 * So false means "allow"
	 * true means "we have handled the selection", which effectively blocks the selection from happening
	 * so true means "block"
	 *
	 * @param InActor Target Actor.
	 * @param bIsSelected Are we selecting or un-selecting this actor.
	 * @return See description above.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Selection", meta = (DisplayName = "Handle Actor Selection"))
		bool SelectActor(AActor* InActor, bool bIsSelected);

	/** Check to see if an actor can be selected in this mode - no side effects */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode | Selection", meta = (DisplayName = "Is Actor Selection Allowed"))
		bool SelectionAllowed(AActor* InActor, bool bSelection) const;

	/**
	*  Allow or Disallow viewport drag tool for ViewportChange,BoxSelect,Measure and FrustumSelect operations
	*  @return True if this mode allows the viewport to use a drag tool
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode", meta = (DisplayName = "Can Use Viewport Drag Tool"))
		bool CanUseViewportDragTool() const;

	/** Called when the currently selected actor has been moved , rotated or scaled */
	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode", meta = (DisplayName = "Notify Actor Moved"))
		void NotifyActorMoved();

	/** Called when the currently selected actors have been duplicated */
	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode", meta = (DisplayName = "Notify Actors Duplicated"))
		void NotifyActorsDuplicated(UPARAM(ref) TArray<AActor*>& PreDuplicateSelection, UPARAM(ref) TArray<AActor*>& PostDuplicateSelection, bool bOffsetLocations);

	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode", meta = (DisplayName = "Notify Actor Selection Changed"))
		void NotifyActorSelectionChanged();

	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode", meta = (DisplayName = "Notify Actor Property Changed"))
		void NotifyActorPropertyChanged();


	/**
	 * Allows each mode to customize the axis pieces of the widget they want drawn.
	 *
	 * @param	InwidgetMode	The current widget mode
	 *
	 * @return					A bitfield comprised of AXIS_* values
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode", meta = (DisplayName = "Customize Transform Gizmo Axis"))
		ETransformGizmoAxisList::Type CustomizeTransformGizmoAxis(ETransformGizmoMode::Type CurrentWidgetMode);


	/** If the EdMode is handling InputDelta (i.e., returning true from it), this allows a mode to indicated whether or not the Widget should also move. */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode", meta = (DisplayName = "Allow Transform Gizmo Move"))
		bool AllowTransformGizmoMove();

	/** If the Edmode is handling its own mouse deltas, it can disable the MouseDeltaTacker */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode", meta = (DisplayName = "Disallow Mouse Delta Tracking"))
		bool DisallowMouseDeltaTracking() const;

	/**
	 * Lets each mode/tool specify a pivot point around which the camera should orbit
	 * @param	OutPivot	The custom pivot point returned by the mode/tool
	 * @return	true if a custom pivot point was specified, false otherwise.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode", meta = (DisplayName = "Override Camera Pivot For Orbit"))
		bool OverrideCameraPivotForOrbit(FVector& OutPivot) const;

	/**
	 * Lets each mode selectively enable widgets for editing properties tagged with 'Show 3D Widget' metadata.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode", meta = (DisplayName = "Allow Property Widgets Editings"))
		bool AllowPropertyWidgetsEditings() const;

	/**
	 * Get a cursor to override the default with, if any.
	 * @return true if the cursor was overridden.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode", meta = (DisplayName = "Override Mouse Cursor"))
		EMouseCursor::Type OverrideMouseCursor(bool& bOverrideCursor) const;


	/**
	 * Lets the mode determine if it wants to draw the transform widget or not.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode", meta = (DisplayName = "Can Draw Transform Gizmo"))
		bool CanDrawTransformGizmo() const;


	/**
	 * Allows each mode/tool to determine a good location for the transform widget to be drawn at.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode", meta = (DisplayName = "Override Transform Gizmo Location"))
		bool OverrideTransformGizmoLocation(FVector& NewLocation) const;


	/**
	 * Lets each tool determine if it wants to use the editor widget or not.  If the tool doesn't want to use it,
	 * it will be fed raw mouse delta information (not snapped or altered in any way).
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode", meta = (DisplayName = "Can Use Transform Gizmo"))
		bool CanUseTransformGizmo() const;

	/**
	 * Lets each mode selectively exclude certain widget types.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode", meta = (DisplayName = "Can Use Transform Gizmo By Mode"))
		bool CanUseTransformGizmoByMode(ETransformGizmoMode::Type CheckMode) const;

	/** Called after an Undo operation */
	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode", meta = (DisplayName = "On Post Undo"))
		void OnPostUndo();

	/**
	 * Lets each mode/tool handle box selection in its own way.
	 *
	 * @param	InBox	The selection box to use, in worldspace coordinates.
	 * @return		true if something was selected/deselected, false otherwise.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode", meta = (DisplayName = "Handle Selection Box"))
		bool HandleSelectionBox(UPARAM(ref) FBox& InBox, bool InSelect = true);

	/**
	 * Lets each mode/tool handle frustum selection in its own way.
	 *
	 * @param	InFrustum	The selection box to use, in worldspace coordinates.
	 * @return	true if something was selected/deselected, false otherwise.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode", meta = (DisplayName = "Handle Selection Frustum"))
		bool HandleSelectionFrustum(const FSelectionFrustumVolume& InFrustum, bool InSelect = true);

	/**
	 * @return The current coordinate system for drawing and input of the transform widget.
	 * For world coordinate system return the identity matrix
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Editor Mode", meta = (DisplayName = "Override Transform Gizmo Coordinate System"))
		bool OverrideTransformGizmoCoordinateSystem(FTransform& NewTransform);


	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode | Input", meta = (DisplayName = "On Execute User Defined Action"))
		void OnExecuteUserDefinedAction(UEditorUserDefinedActions* ActionsAsset, uint8 ActionAsByte, bool bIsRepeated);

	UFUNCTION(BlueprintImplementableEvent, Category = "Editor Mode", meta = (DisplayName = "On Editing Viewport Changed"))
		void OnEditingViewportChanged();

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//~ Level Viewport Interaction

	UFUNCTION(BlueprintCallable, Category = "Editor Mode Tool | Level Viewport Scripting | Interaction", meta = (HideSelfPin = "true"))
		void CreateNewHitProxyByIndex(FDummyStruct DrawPrimitivesContext, int32 Index, EHitProxyPriorityType Priority = EHitProxyPriorityType::World, EMouseCursor::Type CursorType = EMouseCursor::Default, bool bAllowsTranslucentPrimitives = false);

	UFUNCTION(BlueprintCallable, Category = "Editor Mode Tool | Level Viewport Scripting | Interaction", meta = (HideSelfPin = "true"))
		void ClearActiveHitProxy(FDummyStruct DrawPrimitivesContext);


	//*

	UFUNCTION(BlueprintCallable, Category = "Editor Mode Tool | Widgets", meta = (HideSelfPin = "true"))
		UEditorUserWidget* GetActiveToolkitWidgetInstance();

	UFUNCTION(BlueprintCallable, Category = "Editor Mode Tool | Widgets", meta = (HideSelfPin = "true"))
		UEditorUserWidget* GetActiveViewportOverlayWidgetInstance();
};
