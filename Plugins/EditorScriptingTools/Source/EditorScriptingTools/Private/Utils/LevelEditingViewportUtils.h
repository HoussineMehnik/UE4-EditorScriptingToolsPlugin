//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "EditorTypesWrapperTypes.h"
#include "EditorScriptingToolsTypes.h"


class UPrimitiveComponent;


class FViewport;
class FEditorViewportClient;
class FLevelEditorViewportClient;
class FCanvas;
class HHitProxy;



namespace LevelEditingViewportUtils
{
	FViewport* GetCurrentLevelEditingViewport();
	FEditorViewportClient* GetCurrentEditingViewportClient();
	FLevelEditorViewportClient* GetCurrentLevelEditingViewportClient();
	FSceneView* CalcSceneViewForActiveEditorViewport();
	FCanvas* GetCurrentEditingViewportDebugCanvas();
	bool IsCurrentLevelEditingViewport(const FEditorViewportClient* EditorViewportClient);
	bool IsCurrentLevelEditingViewport(const FSceneView* View);

	ELevelEditingViewportType GetEditingViewportType();
	bool SetEditingViewportType(ELevelEditingViewportType InType);

	bool IsPerspective();

	FIntPoint GetEditingViewportSize();
	float GetEditingViewportDPIScale();

	FIntPoint GetEditingViewportMousePosition();
	void LockMouseToEditingViewport(bool bLock);
	FLevelEditingViewportCursorLocation GetEditingViewportMouseRay();
	bool GetEditingViewportMouseRayStartAndEnd(FVector& Start, FVector& End);

	bool GetKeyState(FKey InKey);
	bool IsAltPressed();
	bool IsCtrlPressed();
	bool IsShiftPressed();
	bool IsCmdPressed();


	void SetRealtimeOverride(bool bShouldBeRealtime, FText SystemDisplayName);
	void RemoveRealtimeOverride();
	bool ToggleRealtime();
	void SetRealtime(bool bInRealtime);
	bool IsRealtime();
	void RequestRealTimeFrames(uint64 NumRealTimeFrames = 1);
	bool IsRealtimeOverrideSet();
	FText GetRealtimeOverrideMessage();

	bool IsEditingViewportFocused();

	void SetViewLocation(const FVector& NewLocation);
	void SetViewRotation(const FRotator& NewRotation);
	void SetLookAtLocation(const FVector& LookAt, bool bRecalculateView = false);
	void SetOrthoZoom(float InOrthoZoom);

	FVector GetViewportCameraLocation();
	FRotator GetViewportCameraRotation();
	FVector GetViewportCameraLookAtLocation();
	float GetViewportCameraOrthoZoom();

	FVector4 TransformWorldPointToScreen(const FVector& WorldPoint);
	FVector TransformScreenPointToWorld(const FVector4& ScreenPoint);
	bool TransformScreenPointToPixel(const FVector4& ScreenPoint, FVector2D& OutPixelLocation);
	FVector4 TransformPixelPointToScreen(float X, float Y, float Z);
	bool TransformWorldPointToPixel(const FVector& WorldPoint, FVector2D& OutPixelLocation);
	FVector4 TransformPixelPointToWorld(float X, float Y, float Z);

	HHitProxy* GetHitProxyUnderCursor();
	void GetActorUnderCursor(bool& bIsValid, FActorHitProxyInfo& OutActorHitProxyInfo);
	bool IsPrimitiveComponentUnderCursor(UPrimitiveComponent* InPrimComponent);

	void RedrawLevelEditingViewports(bool bInvalidateHitProxies = true);
	void RedrawAllViewports(bool bInvalidateHitProxies = true);
}
