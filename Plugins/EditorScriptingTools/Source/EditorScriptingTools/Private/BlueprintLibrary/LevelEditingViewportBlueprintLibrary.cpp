//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "LevelEditingViewportBlueprintLibrary.h"
#include "Editor.h"
#include "LevelEditingViewportUtils.h"
#include "EditorModeToolInstance.h"
#include "BluEdMode.h"
#include "CanvasTypes.h"
#include "UObject/WeakObjectPtrTemplates.h"

bool ULevelEditingViewportBlueprintLibrary::IsKeyPressed(FKey Key)
{
	return LevelEditingViewportUtils::GetKeyState(Key);
}

bool ULevelEditingViewportBlueprintLibrary::IsAltPressed()
{
	return LevelEditingViewportUtils::IsAltPressed();
}

bool ULevelEditingViewportBlueprintLibrary::IsCtrlPressed()
{
	return LevelEditingViewportUtils::IsCtrlPressed();
}

bool ULevelEditingViewportBlueprintLibrary::IsShiftPressed()
{
	return LevelEditingViewportUtils::IsShiftPressed();
}

bool ULevelEditingViewportBlueprintLibrary::IsCmdPressed()
{
	return LevelEditingViewportUtils::IsCmdPressed();
}

bool ULevelEditingViewportBlueprintLibrary::SetEditingViewportType(ELevelEditingViewportType NewType)
{
	if (NewType == ELevelEditingViewportType::Invalid)
	{
		return false;
	}

	return LevelEditingViewportUtils::SetEditingViewportType(NewType);
}

ELevelEditingViewportType ULevelEditingViewportBlueprintLibrary::GetEditingViewportType()
{
	return LevelEditingViewportUtils::GetEditingViewportType();
}

bool ULevelEditingViewportBlueprintLibrary::IsEditingViewportPerspective()
{
	return LevelEditingViewportUtils::IsPerspective();
}

float ULevelEditingViewportBlueprintLibrary::GetEditingViewportDPIScale()
{
	return LevelEditingViewportUtils::GetEditingViewportDPIScale();
}

void ULevelEditingViewportBlueprintLibrary::SetViewportCameraLocation(FVector NewLocation)
{
	 LevelEditingViewportUtils::SetViewLocation(NewLocation);
}

void ULevelEditingViewportBlueprintLibrary::SetViewportCameraRotation(FRotator NewRotation)
{
	LevelEditingViewportUtils::SetViewRotation(NewRotation);
}

void ULevelEditingViewportBlueprintLibrary::SetViewportCameraLookAtLocation(FVector LookAt, bool bRecalculateView /*= false*/)
{
	 LevelEditingViewportUtils::SetLookAtLocation(LookAt);
}

void ULevelEditingViewportBlueprintLibrary::SetViewportCameraOrthoZoom(float InOrthoZoom)
{
	LevelEditingViewportUtils::SetOrthoZoom(InOrthoZoom);
}

FVector ULevelEditingViewportBlueprintLibrary::GetViewportCameraLocation()
{
	return LevelEditingViewportUtils::GetViewportCameraLocation();
}

FRotator ULevelEditingViewportBlueprintLibrary::GetViewportCameraRotation()
{
	return LevelEditingViewportUtils::GetViewportCameraRotation();
}

FVector ULevelEditingViewportBlueprintLibrary::GetViewportCameraLookAtLocation()
{
	return LevelEditingViewportUtils::GetViewportCameraLookAtLocation();
}

float ULevelEditingViewportBlueprintLibrary::GetViewportCameraOrthoZoom()
{
	return LevelEditingViewportUtils::GetViewportCameraOrthoZoom();
}

bool ULevelEditingViewportBlueprintLibrary::GetEditorViewportMouseRayStartAndEnd(FVector& Start, FVector& End)
{
	return LevelEditingViewportUtils::GetEditingViewportMouseRayStartAndEnd(Start, End);
}

FVector4 ULevelEditingViewportBlueprintLibrary::TransformWorldPointToScreen(FVector WorldPoint)
{
	return LevelEditingViewportUtils::TransformWorldPointToScreen(WorldPoint);
}

FVector ULevelEditingViewportBlueprintLibrary::TransformScreenPointToWorld(FVector4 ScreenPoint)
{
	return LevelEditingViewportUtils::TransformScreenPointToWorld(ScreenPoint);
}

bool ULevelEditingViewportBlueprintLibrary::TransformScreenPointToPixel(FVector4 ScreenPoint, FVector2D& OutPixelLocation)
{
	return LevelEditingViewportUtils::TransformScreenPointToPixel(ScreenPoint, OutPixelLocation);
}

FVector4 ULevelEditingViewportBlueprintLibrary::TransformPixelPointToScreen(float X, float Y, float Z)
{
	return LevelEditingViewportUtils::TransformPixelPointToScreen(X, Y, Z);
}

bool ULevelEditingViewportBlueprintLibrary::TransformWorldPointToPixel(FVector WorldPoint, FVector2D& OutPixelLocation)
{
	return LevelEditingViewportUtils::TransformWorldPointToPixel(WorldPoint, OutPixelLocation);
}

FVector4 ULevelEditingViewportBlueprintLibrary::TransformPixelPointToWorld(float X, float Y, float Z)
{
	return LevelEditingViewportUtils::TransformPixelPointToWorld(X, Y, Z);
}

void ULevelEditingViewportBlueprintLibrary::GetActorUnderCursor(bool& bIsValid, FActorHitProxyInfo& OutActorHitProxyInfo)
{
	{
		LevelEditingViewportUtils::GetActorUnderCursor(bIsValid, OutActorHitProxyInfo);
		return;
	}

	OutActorHitProxyInfo.Clear();
	bIsValid = false;
}

bool ULevelEditingViewportBlueprintLibrary::IsPrimitiveComponentUnderCursor(UPrimitiveComponent* InPrimComponent)
{
	{
		return LevelEditingViewportUtils::IsPrimitiveComponentUnderCursor(InPrimComponent);
	}

	return false;
}

void ULevelEditingViewportBlueprintLibrary::RedrawLevelEditingViewports(bool bInvalidateHitProxies /*= true*/)
{
	{
		LevelEditingViewportUtils::RedrawLevelEditingViewports(bInvalidateHitProxies);
	}
}

void ULevelEditingViewportBlueprintLibrary::RedrawAllViewports(bool bInvalidateHitProxies /*= true*/)
{
	{
		LevelEditingViewportUtils::RedrawAllViewports(bInvalidateHitProxies);
	}
}
