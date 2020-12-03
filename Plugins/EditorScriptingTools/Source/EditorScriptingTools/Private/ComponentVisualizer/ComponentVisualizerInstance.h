//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once


#include "LevelEditorToolBase.h"
#include "ComponentVisualizerInstance.generated.h"

class FNativeComponentVisualizerInstance;

class UActorComponent;
class UEditorUserWidget;

UCLASS(Abstract, Blueprintable, config = Editor)
class UComponentVisualizerInstance : public ULevelEditorToolBase
{
	GENERATED_BODY()

public:
	UComponentVisualizerInstance();

	//~ Begin ILevelEditingContext interface
	virtual ELevelEditingContextType GetLevelEditingContext() final;
	virtual const FDrawPrimitivesContext& GetDrawPrimitivesContext() final;
	virtual const FDrawHUDContext& GetDrawHUDContext() final;
	//~ End UObject interface

	void SetNativeInstance(const TSharedPtr<FNativeComponentVisualizerInstance>& InNativeInstance);


	/** can be called multiple times. */
	UFUNCTION(BlueprintImplementableEvent, Category = "ComponentVisualizer", meta = (DisplayName = "Construct"))
		void Construct();

	/** can be called multiple times. */
	UFUNCTION(BlueprintImplementableEvent, Category = "ComponentVisualizer", meta = (DisplayName = "Destruct"))
		void Destruct();

	UFUNCTION(BlueprintImplementableEvent, Category = "ComponentVisualizer", meta = (DisplayName = "On End Editing"))
		void OnEndEditing();

	/** Draw HUD on viewport for the supplied component. */
	UFUNCTION(BlueprintImplementableEvent, Category = "ComponentVisualizer|Drawing", meta = (DisplayName = "Receive Draw HUD"))
		void ReceiveDrawHUD(const FActorComponentWrapper& ComponentInfo);

	/**  Draw visualization for the supplied component. */
	UFUNCTION(BlueprintImplementableEvent, Category = "ComponentVisualizer|Drawing", meta = (DisplayName = "Receive Draw Primitives"))
		void ReceiveDrawPrimitives(const FActorComponentWrapper& ComponentInfo);

	/** Handle click on a HitProxy */
	UFUNCTION(BlueprintNativeEvent, Category = "ComponentVisualizer|Input", meta = (DisplayName = "Handle Indexed Hit Proxy Click"))
		bool HandleClickVisualizerHitProxy(const FIndexedComponentVisProxyInfo& HitInfo, const FLevelEditingViewportClick& ViewportClick);

	UFUNCTION(BlueprintNativeEvent, Category = "ComponentVisualizer|Input", meta = (DisplayName = "Override Transform Gizmo Location"))
		bool OverrideTransformGizmoLocation(FVector& NewLocation);

	UFUNCTION(BlueprintNativeEvent, Category = "ComponentVisualizer|Input", meta = (DisplayName = "Handle Transform Gizmo Move"))
		bool HandleTransformGizmoMove(UPARAM(ref) FVector& Drag, UPARAM(ref) FRotator& DeltaRotation, UPARAM(ref) FVector& DeltaScale);

	UFUNCTION(BlueprintNativeEvent, Category = "ComponentVisualizer|Input", meta = (DisplayName = "Override Transform Gizmo Coordinate System"))
		bool OverrideTransformGizmoCoordinateSystem(FTransform& NewTransform);

	UFUNCTION(BlueprintNativeEvent, Category = "ComponentVisualizer|Input", meta = (DisplayName = "Handle Input Key"))
		bool HandleInputKey(FKey Key, EInputKeyEventType Event);

	UFUNCTION(BlueprintNativeEvent, Category = "ComponentVisualizer|Selection", meta = (DisplayName = "Handle Box Select"))
		bool HandleSelectionBox(const FBox& InBox);

	UFUNCTION(BlueprintNativeEvent, Category = "ComponentVisualizer|Selection", meta = (DisplayName = "Handle Selection Frustum"))
		bool HandleSelectionFrustum(const FSelectionFrustumVolume& InFrustum);

	UFUNCTION(BlueprintNativeEvent, Category = "ComponentVisualizer|Selection", meta = (DisplayName = "Has Focus On Selection Bounding Box"))
		bool HasFocusOnSelectionBoundingBox(FBox& OutBoundingBox);

	UFUNCTION(BlueprintNativeEvent, Category = "ComponentVisualizer|Selection", meta = (DisplayName = "Handle Snap To"))
		bool HandleSnapTo(bool bInAlign, bool bInUseLineTrace, bool bInUseBounds, bool bInUsePivot, AActor* InDestination);

	UFUNCTION(BlueprintNativeEvent, Category = "ComponentVisualizer|Selection", meta = (DisplayName = "Get Context Menu User Widget Class"))
		TSubclassOf<UEditorUserWidget> GetContextMenuUserWidgetClass();

	UFUNCTION(BlueprintImplementableEvent, Category = "ComponentVisualizer|Drawing", meta = (DisplayName = "On Context Menu Construct"))
		void OnContextMenuConstruct(UEditorUserWidget* Widget);

public:

	UFUNCTION(BlueprintCallable, Category = "ComponentVisualizer|LevelViewport|Interaction", meta = (HideSelfPin = "true"))
		void CreateWorldHitProxyByIndex(FDummyStruct OnlyWithDrawPrimitives, int32 Index, UActorComponent* Component, EHitProxyPriorityType Priority = EHitProxyPriorityType::World, EMouseCursor::Type CursorType = EMouseCursor::Default, bool bAllowsTranslucentPrimitives = false);

	UFUNCTION(BlueprintCallable, Category = "ComponentVisualizer|LevelViewport|Interaction", meta = (HideSelfPin = "true"))
		void ClearActiveWorldHitProxy();

	UFUNCTION(BlueprintCallable, Category = "ComponentVisualizer", meta = (HideSelfPin = "true"))
		bool NotifyPropertyModifiedByName(UActorComponent* Component, FName PropertyName);

private:
	friend FNativeComponentVisualizerInstance;
	TWeakPtr<FNativeComponentVisualizerInstance> NativeInstanceWeakPtr;
};
