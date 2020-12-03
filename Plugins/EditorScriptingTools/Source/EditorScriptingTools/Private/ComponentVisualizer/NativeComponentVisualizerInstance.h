//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "ComponentVisualizer.h"
#include "EditorScriptingToolsTypes.h"

class UComponentVisualizerUtilityBlueprint;
class UComponentVisualizerInstance;
class UActorComponent;
class UBlueprint;

class FPrimitiveDrawInterface;
class FSceneView;

class SWidget;

enum class EHitProxyPriorityType : uint8;

class FNativeComponentVisualizerInstance : public FComponentVisualizer
{
public:
	FNativeComponentVisualizerInstance(UComponentVisualizerUtilityBlueprint* VisualizerBlueprint);
	virtual ~FNativeComponentVisualizerInstance();

	const FDrawPrimitivesContext& GetDrawPrimitivesContext() const { return DrawPrimitivesContext; }
	const FDrawHUDContext& GetDrawHUDContext() const { return DrawHUDContext; }

private:
	void CreateInstance();
	void DestroyInstanceIfNeeded();

public:
	bool HasValidInstance() const;
	bool CanUseCurrentInstance() const;
	bool IsEditingEnabled() const;

	//~ Begin FComponentVisualizer Interface
	virtual void OnRegister() override;
	virtual void DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI) override;
	virtual void DrawVisualizationHUD(const UActorComponent* Component, const FViewport* Viewport, const FSceneView* View, FCanvas* Canvas) override;
	virtual bool VisProxyHandleClick(FEditorViewportClient* InViewportClient, HComponentVisProxy* VisProxy, const FViewportClick& Click) override;
	virtual void EndEditing() override;
	virtual bool GetWidgetLocation(const FEditorViewportClient* ViewportClient, FVector& OutLocation) const override;
	virtual bool GetCustomInputCoordinateSystem(const FEditorViewportClient* ViewportClient, FMatrix& OutMatrix) const override;
	virtual bool HandleInputDelta(FEditorViewportClient* ViewportClient, FViewport* Viewport, FVector& DeltaTranslate, FRotator& DeltalRotate, FVector& DeltaScale) override;
	virtual bool HandleInputKey(FEditorViewportClient* ViewportClient, FViewport* Viewport, FKey Key, EInputEvent Event) override;
	virtual bool HandleModifiedClick(FEditorViewportClient* InViewportClient, HHitProxy* HitProxy, const FViewportClick& Click) override;
	virtual bool HandleBoxSelect(const FBox& InBox, FEditorViewportClient* InViewportClient, FViewport* InViewport) override;
	virtual bool HandleFrustumSelect(const FConvexVolume& InFrustum, FEditorViewportClient* InViewportClient, FViewport* InViewport) override;
	virtual bool HasFocusOnSelectionBoundingBox(FBox& OutBoundingBox) override;
	virtual bool HandleSnapTo(const bool bInAlign, const bool bInUseLineTrace, const bool bInUseBounds, const bool bInUsePivot, AActor* InDestination) override;
	virtual TSharedPtr<SWidget> GenerateContextMenu() const override;
	virtual bool IsVisualizingArchetype() const override;
	//~ End FComponentVisualizer Interface


public:
	UClass* GetVisualizedComponentClass() const;
	void CreateWorldHitProxyByIndex(int32 Index, UActorComponent* Component, EHitProxyPriorityType Priority, EMouseCursor::Type CursorType, bool bAllowsTranslucentPrimitives);
	void ClearActiveWorldHitProxy();
	bool NotifyPropertyModifiedByName(UActorComponent* Component, const FName& PropertyName);

private:
	bool IsVisProxyValid(HComponentVisProxy* VisProxy) const;
	void HandleAnyBlueprintReinstanced();

private:
	TWeakObjectPtr<UComponentVisualizerInstance> InstanceWeakPtr{};
	TWeakObjectPtr<UComponentVisualizerUtilityBlueprint> InstanceBlueprintWeakPtr{};
	FDrawPrimitivesContext DrawPrimitivesContext{};
	FDrawHUDContext DrawHUDContext{};

};
