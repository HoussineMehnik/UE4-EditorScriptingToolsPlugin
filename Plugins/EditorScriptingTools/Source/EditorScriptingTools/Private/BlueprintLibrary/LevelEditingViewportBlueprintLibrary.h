//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditorScriptingToolsTypes.h"
#include "EditorTypesWrapperTypes.h"
#include "LevelEditingViewportBlueprintLibrary.generated.h"


/**
 *
 */
UCLASS()
class ULevelEditingViewportBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:


	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport | Input", meta = (DisplayName = "Is Key Pressed ?", Keywords = "key pressed down"))
		static bool IsKeyPressed(FKey Key);

	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport | Input", meta = (DisplayName = "Is Alt Pressed ?", Keywords = "alt key left right pressed down"))
		static bool IsAltPressed();

	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport | Input", meta = (DisplayName = "Is Ctrl Pressed ?", Keywords = "ctrl control left right key pressed down"))
		static bool IsCtrlPressed();

	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport | Input", meta = (DisplayName = "Is Shift Pressed ?", Keywords = "shift key left right pressed down"))
		static bool IsShiftPressed();

	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport | Input", meta = (DisplayName = "Is Cmd Pressed ?", Keywords = "cmd command key left right pressed down"))
		static bool IsCmdPressed();

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Editing Viewport", meta = (DisplayName = "Set Editing Viewport Type", Keywords = "viewport level editing type"))
		static bool SetEditingViewportType(ELevelEditingViewportType NewType);

	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport", meta = (DisplayName = "Get Editing Viewport Type", Keywords = "viewport level editing type"))
		static ELevelEditingViewportType GetEditingViewportType();

	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport", meta = (DisplayName = "Is Editing Viewport Perspective ?", Keywords = "viewport level editing type perspective orthographic"))
		static bool IsEditingViewportPerspective();

	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport", meta = (DisplayName = "Get Editing Viewport DPI Scale", Keywords = "viewport level editing dpi scale"))
		static float GetEditingViewportDPIScale();


	/** Sets the location of the viewport's camera */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Editing Viewport | Camera", meta = (DisplayName = "Set Viewport Camera Location", Keywords = "viewport level editing camera location"))
		static void SetViewportCameraLocation(FVector NewLocation);

	/** Sets the location of the viewport's camera */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Editing Viewport | Camera", meta = (DisplayName = "Set Viewport Camera Rotation", Keywords = "viewport level editing camera rotation"))
		static void SetViewportCameraRotation(FRotator NewRotation);

	/**
	 * Sets the look at location of the viewports camera for orbit *
	 *
	 * @param LookAt The new look at location
	 * @param bRecalulateView	If true, will recalculate view location and rotation to look at the new point immediatley
	 */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Editing Viewport | Camera", meta = (DisplayName = "Set Viewport Camera Look At Location", Keywords = "viewport level editing camera look at lookat location"))
		static void SetViewportCameraLookAtLocation(FVector LookAt, bool bRecalculateView = false);

	/** Sets ortho zoom amount */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Editing Viewport | Camera", meta = (DisplayName = "Set Viewport Camera Ortho Zoom", Keywords = "viewport level editing camera ortho zoom"))
		static void SetViewportCameraOrthoZoom(float InOrthoZoom);

	/** @return the current viewport camera location */
	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport | Camera", meta = (DisplayName = "Get Viewport Camera Location", Keywords = "viewport level editing camera location"))
		static FVector GetViewportCameraLocation();

	/** @return the current viewport camera rotation */
	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport | Camera", meta = (DisplayName = "Get Viewport Camera Rotation", Keywords = "viewport level editing camera rotation"))
		static FRotator GetViewportCameraRotation();

	/** @return the current look at location */
	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport | Camera", meta = (DisplayName = "Get Viewport Camera Look At Location", Keywords = "viewport level editing camera look at lookat location"))
		static FVector GetViewportCameraLookAtLocation();

	/** @return the current ortho zoom amount */
	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport | Camera", meta = (DisplayName = "Get Viewport Camera Ortho Zoom", Keywords = "viewport level editing camera ortho zoom"))
		static float GetViewportCameraOrthoZoom();///*, meta = (DisplayName = "", Keywords = "")*/

	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport", meta = (DisplayName = "Get Editor Viewport Mouse Ray Start & End", Keywords = "editing viewport ray trace start end mouse cursor"))
		static bool GetEditorViewportMouseRayStartAndEnd(FVector& Start, FVector& End);

	/** Transforms a point from world-space to the view's screen-space. */
	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport"/*, meta = (DisplayName = "", Keywords = "")*/)
		static FVector4 TransformWorldPointToScreen(FVector WorldPoint);

	/** Transforms a point from the view's screen-space to world-space. */
	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport"/*, meta = (DisplayName = "", Keywords = "")*/)
		static FVector TransformScreenPointToWorld(FVector4 ScreenPoint);

	/** Transforms a point from the view's screen-space into pixel coordinates relative to the view's X,Y. */
	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport"/*, meta = (DisplayName = "", Keywords = "")*/)
		static bool TransformScreenPointToPixel(FVector4 ScreenPoint, FVector2D& OutPixelLocation);

	/** Transforms a point from pixel coordinates relative to the view's X,Y (left, top) into the view's screen-space. */
	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport"/*, meta = (DisplayName = "", Keywords = "")*/)
		static FVector4 TransformPixelPointToScreen(float X, float Y, float Z);

	/** Transforms a point from the view's world-space into pixel coordinates relative to the view's X,Y (left, top). */
	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport"/*, meta = (DisplayName = "", Keywords = "")*/)
		static bool TransformWorldPointToPixel(FVector WorldPoint, FVector2D& OutPixelLocation);

	/** Transforms a point from pixel coordinates relative to the view's X,Y (left, top) into the view's world-space. */
	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport"/*, meta = (DisplayName = "", Keywords = "")*/)
		static FVector4 TransformPixelPointToWorld(float X, float Y, float Z);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Editing Viewport"/*, meta = (DisplayName = "", Keywords = "")*/)
		static void GetActorUnderCursor(bool& bIsValid, FActorHitProxyInfo& OutActorHitProxyInfo);

	/* Check if we are hovering over a specified component*/
	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editing Viewport"/*, meta = (DisplayName = "", Keywords = "")*/)
		static bool IsPrimitiveComponentUnderCursor(class UPrimitiveComponent* InPrimComponent);


	/**
	 * Redraws all level editing viewport clients.
	 *
	 * @param	bInvalidateHitProxies		[opt] If true (the default), invalidates cached hit proxies too.
	 */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Editing Viewport", meta = (DisplayName = "Redraw Level Editing Viewports", Keywords = "redraw refresh level editing viewports viewport"))
		static void RedrawLevelEditingViewports(bool bInvalidateHitProxies = true);

	/**
	 * Redraws all editor viewport clients.
	 *
	 * @param	bInvalidateHitProxies		[opt] If true (the default), invalidates cached hit proxies too.
	 */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Editing Viewport", meta = (DisplayName = "Redraw All Viewports", Keywords = "redraw refresh viewports viewport"))
		static void RedrawAllViewports(bool bInvalidateHitProxies = true);
};
