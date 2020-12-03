//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "LevelEditingViewportUtils.h"
#include "LevelEditorViewport.h"
#include "EditorViewportClient.h"
#include "EngineUtils.h"
#include "Editor.h"
#include "EditorModeToolInstance.h"
#include "HitProxiesTypes.h"
#include "CanvasTypes.h"
#include "Framework/Application/SlateApplication.h"
#include "SEditorViewport.h"




#define LOCTEXT_NAMESPACE "EditorScriptingToolsUtils"

namespace LevelEditingViewportUtils
{
	FViewport* GetCurrentLevelEditingViewport()
	{
		return GCurrentLevelEditingViewportClient ? GCurrentLevelEditingViewportClient->Viewport : nullptr;
	}

	FEditorViewportClient* GetCurrentEditingViewportClient()
	{
		return GCurrentLevelEditingViewportClient;
	}

	FLevelEditorViewportClient* GetCurrentLevelEditingViewportClient()
	{
		return GCurrentLevelEditingViewportClient;
	}

	FSceneView* CalcSceneViewForActiveEditorViewport()
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			FViewport* Viewport = ViewportClient->Viewport;
			if (Viewport != nullptr && Viewport->GetSizeXY().GetMin() > 0)
			{
				FSceneViewFamilyContext ViewFamily(FSceneViewFamilyContext::ConstructionValues(
					ViewportClient->Viewport,
					ViewportClient->GetScene(),
					ViewportClient->EngineShowFlags)
					.SetRealtimeUpdate(ViewportClient->IsRealtime()));

				if (FSceneView* View = ViewportClient->CalcSceneView(&ViewFamily))
				{
					return View;
				}
			}
		}

		return nullptr;
	}

	FCanvas* GetCurrentEditingViewportDebugCanvas()
	{
		if (FViewport* ActiveViewport = GetCurrentLevelEditingViewport())
		{
			return ActiveViewport->GetDebugCanvas();
		}
		return nullptr;
	}

	bool IsCurrentLevelEditingViewport(const FEditorViewportClient* EditorViewportClient)
	{
		if (EditorViewportClient != nullptr)
		{
			return EditorViewportClient == GetCurrentLevelEditingViewportClient();
		}
		return false;
	}

	bool IsCurrentLevelEditingViewport(const FSceneView* View)
	{
		if (View != nullptr)
		{
			if (const FLevelEditorViewportClient* LevelEditorViewportClient = GetCurrentLevelEditingViewportClient())
			{
				return (View->Drawer == LevelEditorViewportClient);
			}
		}
		return false;
	}

	ELevelEditingViewportType GetEditingViewportType()
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			const ELevelViewportType ViewportType = ViewportClient->GetViewportType();

			switch (ViewportType)
			{
			case LVT_OrthoXY:				return ELevelEditingViewportType::Top;
			case LVT_OrthoXZ:				return ELevelEditingViewportType::Front;
			case LVT_OrthoYZ:				return ELevelEditingViewportType::Left;
			case LVT_Perspective:			return ELevelEditingViewportType::Perspective;
			case LVT_OrthoNegativeXY:		return ELevelEditingViewportType::Bottom;
			case LVT_OrthoNegativeXZ:		return ELevelEditingViewportType::Back;
			case LVT_OrthoNegativeYZ:		return ELevelEditingViewportType::Right;
			}
		}
		return ELevelEditingViewportType::Invalid;
	}

	bool SetEditingViewportType(ELevelEditingViewportType InType)
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			ELevelViewportType NewViewportType = LVT_None;

			switch (InType)
			{
			case ELevelEditingViewportType::Top:NewViewportType = LVT_OrthoXY;
				break;
			case ELevelEditingViewportType::Front:NewViewportType = LVT_OrthoXZ;
				break;
			case ELevelEditingViewportType::Left:NewViewportType = LVT_OrthoYZ;
				break;
			case ELevelEditingViewportType::Perspective:NewViewportType = LVT_Perspective;
				break;
			case ELevelEditingViewportType::Bottom:NewViewportType = LVT_OrthoNegativeXY;
				break;
			case ELevelEditingViewportType::Back:NewViewportType = LVT_OrthoNegativeXZ;
				break;
			case ELevelEditingViewportType::Right:NewViewportType = LVT_OrthoNegativeYZ;
				break;
			}

			if (NewViewportType != LVT_None)
			{
				ViewportClient->SetViewportType(NewViewportType);
				return true;
			}
		}
		return false;
	}

	bool IsPerspective()
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			return ViewportClient->IsPerspective();
		}
		return false;
	}

	FIntPoint GetEditingViewportSize()
	{
		if (const FViewport* ActiveViewport = GetCurrentLevelEditingViewport())
		{
			return ActiveViewport->GetSizeXY();
		}

		return FIntPoint::NoneValue;
	}

	float GetEditingViewportDPIScale()
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			return ViewportClient->GetDPIScale();
		}
		return 1.0f;
	}

	FIntPoint GetEditingViewportMousePosition()
	{
		if (const FViewport* ActiveViewport = GetCurrentLevelEditingViewport())
		{
			const int32 MouseX = ActiveViewport->GetMouseX();
			const int32 MouseY = ActiveViewport->GetMouseY();
			return FIntPoint(MouseX, MouseY);
		}

		return FIntPoint::NoneValue;
	}

	void LockMouseToEditingViewport(bool bLock)
	{
		if (FViewport* ActiveViewport = GetCurrentLevelEditingViewport())
		{
			ActiveViewport->LockMouseToViewport(bLock);
		}
	}

	FLevelEditingViewportCursorLocation GetEditingViewportMouseRay()
	{
		if (FEditorViewportClient* ActiveViewportClient = GetCurrentEditingViewportClient())
		{
			if (FViewport* ActiveViewport = ActiveViewportClient->Viewport)
			{
				if (FSceneView* View = CalcSceneViewForActiveEditorViewport())
				{
					FViewportCursorLocation MouseViewportRay{ View, ActiveViewportClient, ActiveViewport->GetMouseX(), ActiveViewport->GetMouseY() };

					return FLevelEditingViewportCursorLocation(
						MouseViewportRay.GetOrigin(),
						MouseViewportRay.GetDirection(),
						MouseViewportRay.GetCursorPos(),
						ActiveViewportClient->GetViewportType()
					);
				}
			}
		}

		return FLevelEditingViewportCursorLocation();
	}

	bool GetEditingViewportMouseRayStartAndEnd(FVector& Start, FVector& End)
	{
		Start = End = FVector::ZeroVector;

		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{

			// Only if we're not tracking (RMB looking)
			if (!ViewportClient->IsTracking())
			{
				FViewport* Viewport = ViewportClient->Viewport;

				// Make sure we have a valid viewport, otherwise we won't be able to construct an FSceneView.  The first time we're ticked we might not be properly setup.
				if (Viewport != nullptr && Viewport->GetSizeXY().GetMin() > 0)
				{
					const int32 ViewportInteractX = Viewport->GetMouseX();
					const int32 ViewportInteractY = Viewport->GetMouseY();

					FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(
						Viewport,
						ViewportClient->GetScene(),
						ViewportClient->EngineShowFlags)
						.SetRealtimeUpdate(ViewportClient->IsRealtime()));
					FSceneView* SceneView = ViewportClient->CalcSceneView(&ViewFamily);

					const FViewportCursorLocation MouseViewportRay(SceneView, ViewportClient, ViewportInteractX, ViewportInteractY);
					const FVector& MouseViewportRayOrigin = MouseViewportRay.GetOrigin();
					const FVector& MouseViewportRayDirection = MouseViewportRay.GetDirection();

					Start = MouseViewportRayOrigin;

					End = Start + WORLD_MAX * MouseViewportRayDirection;

					// If we're dealing with an orthographic view, push the origin of the ray backward along the viewport forward axis
					// to make sure that we can detect objects that are behind the origin!
					if (!ViewportClient->IsPerspective())
					{
						Start -= MouseViewportRayDirection * FLT_MAX;
					}

					return true;
				}
			}
		}

		return false;
	}

	bool GetKeyState(FKey InKey)
	{
		if (const FViewport* ActiveViewport = GetCurrentLevelEditingViewport())
		{
			return ActiveViewport->KeyState(InKey);
		}

		return false;
	}

	bool IsAltPressed()
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			return ViewportClient->IsAltPressed();
		}

		return false;
	}

	bool IsCtrlPressed()
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			return ViewportClient->IsCtrlPressed();
		}

		return false;
	}

	bool IsShiftPressed()
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			return ViewportClient->IsShiftPressed();
		}

		return false;
	}

	bool IsCmdPressed()
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			return ViewportClient->IsCmdPressed();
		}

		return false;
	}

	void SetRealtimeOverride(bool bShouldBeRealtime, FText SystemDisplayName)
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			ViewportClient->SetRealtimeOverride(bShouldBeRealtime, SystemDisplayName);
		}
	}

	void RemoveRealtimeOverride()
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			ViewportClient->RemoveRealtimeOverride();
		}
	}

	bool ToggleRealtime()
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			return ViewportClient->ToggleRealtime();
		}
		return false;
	}

	void SetRealtime(bool bInRealtime)
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			ViewportClient->SetRealtime(bInRealtime);
		}
	}

	bool IsRealtime()
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			ViewportClient->IsRealtime();
		}
		return false;
	}

	void RequestRealTimeFrames(uint64 NumRealTimeFrames /*= 1*/)
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			ViewportClient->RequestRealTimeFrames(NumRealTimeFrames);
		}
	}

	bool IsRealtimeOverrideSet()
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			return ViewportClient->IsRealtimeOverrideSet();
		}
		return false;
	}

	FText GetRealtimeOverrideMessage()
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			return ViewportClient->GetRealtimeOverrideMessage();
		}
		return FText::GetEmpty();
	}

	bool IsEditingViewportFocused()
	{
		if (FViewport* Viewport = GetCurrentLevelEditingViewport())
		{
			return Viewport->HasFocus() || Viewport->HasMouseCapture();
		}
		return false;
	}

	void SetViewLocation(const FVector& NewLocation)
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			ViewportClient->SetViewLocation(NewLocation);
		}
	}

	void SetViewRotation(const FRotator& NewRotation)
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			ViewportClient->SetViewRotation(NewRotation);
		}
	}

	void SetLookAtLocation(const FVector& LookAt, bool bRecalculateView /*= false*/)
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			ViewportClient->SetLookAtLocation(LookAt);
		}
	}

	void SetOrthoZoom(float InOrthoZoom)
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			ViewportClient->SetOrthoZoom(InOrthoZoom);
		}
	}

	FVector GetViewportCameraLocation()
	{

		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			const FViewportCameraTransform& ViewTransform = ViewportClient->GetViewTransform();
			return ViewTransform.GetLocation();
		}

		return FVector::ZeroVector;
	}

	FRotator GetViewportCameraRotation()
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			const FViewportCameraTransform& ViewTransform = ViewportClient->GetViewTransform();
			return  ViewTransform.GetRotation();
		}

		return FRotator::ZeroRotator;
	}

	FVector GetViewportCameraLookAtLocation()
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			const FViewportCameraTransform& ViewTransform = ViewportClient->GetViewTransform();
			return ViewTransform.GetLookAt();
		}

		return FVector::ZeroVector;
	}

	float GetViewportCameraOrthoZoom()
	{
		if (FEditorViewportClient* ViewportClient = GetCurrentEditingViewportClient())
		{
			const FViewportCameraTransform& ViewTransform = ViewportClient->GetViewTransform();
			return  ViewTransform.GetOrthoZoom();
		}

		return 0.0f;
	}

	FVector4 TransformWorldPointToScreen(const FVector& WorldPoint)
	{
		if (const FSceneView* SceneView = CalcSceneViewForActiveEditorViewport())
		{
			return SceneView->WorldToScreen(WorldPoint);
		}
		return FVector4(0.f, 0.f, 0.f, 0.f);
	}

	FVector TransformScreenPointToWorld(const FVector4& ScreenPoint)
	{
		if (const FSceneView* SceneView = CalcSceneViewForActiveEditorViewport())
		{
			return SceneView->ScreenToWorld(ScreenPoint);
		}
		return FVector(0.f, 0.f, 0.f);
	}

	bool TransformScreenPointToPixel(const FVector4& ScreenPoint, FVector2D& OutPixelLocation)
	{
		if (const FSceneView* SceneView = CalcSceneViewForActiveEditorViewport())
		{
			return SceneView->ScreenToPixel(ScreenPoint, OutPixelLocation);
		}
		return false;
	}

	FVector4 TransformPixelPointToScreen(float X, float Y, float Z)
	{
		if (const FSceneView* SceneView = CalcSceneViewForActiveEditorViewport())
		{
			return SceneView->PixelToScreen(X, Y, Z);
		}
		return FVector4(0.f, 0.f, 0.f, 0.f);
	}

	bool TransformWorldPointToPixel(const FVector& WorldPoint, FVector2D& OutPixelLocation)
	{
		if (const FSceneView* SceneView = CalcSceneViewForActiveEditorViewport())
		{
			return SceneView->WorldToPixel(WorldPoint, OutPixelLocation);
		}
		return false;
	}

	FVector4 TransformPixelPointToWorld(float X, float Y, float Z)
	{
		if (const FSceneView* SceneView = CalcSceneViewForActiveEditorViewport())
		{
			return SceneView->PixelToWorld(X, Y, Z);
		}
		return FVector4(0.f, 0.f, 0.f, 0.f);
	}

	HHitProxy* GetHitProxyUnderCursor()
	{
		if (FViewport* Viewport = GetCurrentLevelEditingViewport())
		{
			const int32 MouseX = Viewport->GetMouseX();
			const int32 MouseY = Viewport->GetMouseY();

			if (MouseX != 0 && MouseY != 0 && Viewport->HasFocus())
			{

				if (HHitProxy* HitProxy = Viewport->GetHitProxy(MouseX, MouseY))
				{
					return HitProxy;
				}
			}
		}

		return nullptr;
	}

	void GetActorUnderCursor(bool& bIsValid, FActorHitProxyInfo& OutActorHitProxyInfo)
	{
		bIsValid = false;
		OutActorHitProxyInfo.Clear();

		if (HHitProxy* HoveredHitProxy = GetHitProxyUnderCursor())
		{
			if (HActor* HoveredActorHitProxy = HitProxyCast<HActor>(HoveredHitProxy))
			{
				if (AActor* HoveredActor = HoveredActorHitProxy->Actor)
				{
					if (!HoveredActor->IsPendingKill())
					{
						OutActorHitProxyInfo.Actor = HoveredActor;
						OutActorHitProxyInfo.PrimitiveComponent = HoveredActorHitProxy->PrimComponent;
						OutActorHitProxyInfo.SectionIndex = HoveredActorHitProxy->SectionIndex;
						OutActorHitProxyInfo.MaterialIndex = HoveredActorHitProxy->MaterialIndex;
						bIsValid = true;
					}
				}
			}
		}
	}

	bool IsPrimitiveComponentUnderCursor(UPrimitiveComponent* InPrimComponent)
	{
		if (InPrimComponent != nullptr && !InPrimComponent->IsPendingKill())
		{
			if (HHitProxy* HoveredHitProxy = GetHitProxyUnderCursor())
			{
				if (HActor* HoveredActorHitProxy = HitProxyCast<HActor>(HoveredHitProxy))
				{
					if (const UPrimitiveComponent* HoveredPrimComponent = HoveredActorHitProxy->PrimComponent)
					{
						if (!HoveredPrimComponent->IsPendingKill())
						{
							if (InPrimComponent == HoveredPrimComponent)
							{
								return true;
							}
						}
					}
				}
			}
		}

		return false;
	}


	void RedrawLevelEditingViewports(bool bInvalidateHitProxies /*= true*/)
	{
		if (GEditor != nullptr)
		{
			GEditor->RedrawLevelEditingViewports(bInvalidateHitProxies);
		}
	}

	void RedrawAllViewports(bool bInvalidateHitProxies /*= true*/)
	{
		if (GEditor != nullptr)
		{
			GEditor->RedrawAllViewports(bInvalidateHitProxies);
		}
	}
}

#undef LOCTEXT_NAMESPACE 