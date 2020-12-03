//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "LevelViewportCanvasDrawingUtils.h"
#include "Engine.h"
#include "Engine/Font.h"
#include "Engine/Texture2D.h"
#include "BluEdMode.h"
#include "CanvasItem.h"
#include "CanvasTypes.h"
#include "Engine/Canvas.h"
#include "EditorScriptingToolsTypes.h"

namespace LevelViewportCanvasDrawingUtils
{
	UFont* GetBluEdModeDefaultFont()
	{
		static UFont* DefaultFont;
		if (DefaultFont == nullptr)
		{
			const FStringAssetReference DefaultFontName = FString(TEXT("/BluEdMode/Fonts/Condensed_Font.Condensed_Font"));
			DefaultFont = Cast<UFont>(DefaultFontName.TryLoad());
		}
		return DefaultFont != nullptr ? DefaultFont : GEngine->GetLargeFont();
	}



	void DrawText(const FDrawHUDContext& Context, const FString& Text, const FLinearColor& TextColor, float ScreenX, float ScreenY, UFont* Font, float Scale)
	{
		if (FCanvas* Canvas = Context.Canvas)
		{
			FCanvasTextItem TextItem(FVector2D(ScreenX, ScreenY), FText::FromString(Text), Font ? Font : GEngine->GetMediumFont(), TextColor);
			TextItem.Scale = FVector2D(Scale, Scale);
			Canvas->DrawItem(TextItem);
		}
	}

	void DrawLine(const FDrawHUDContext& Context, float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, const FLinearColor& LineColor, float LineThickness)
	{
		if (FCanvas* Canvas = Context.Canvas)
		{
			FCanvasLineItem LineItem(FVector2D(StartScreenX, StartScreenY), FVector2D(EndScreenX, EndScreenY));
			LineItem.SetColor(LineColor);
			LineItem.LineThickness = LineThickness;
			Canvas->DrawItem(LineItem);
		}
	}

	static void DrawBoundingBox(FBox& Box, FCanvas* InCanvas, const FSceneView* InView, const FViewport* InViewport, const FLinearColor& InColor, const bool bInDrawBracket, const FString& InLabelText)
	{
		FVector BoxCenter, BoxExtents;
		Box.GetCenterAndExtents(BoxCenter, BoxExtents);

		// Project center of bounding box onto screen.
		const FVector4 ProjBoxCenter = InView->WorldToScreen(BoxCenter);

		// Do nothing if behind camera
		if (ProjBoxCenter.W > 0.f)
		{
			// Project verts of world-space bounding box onto screen and take their bounding box
			const FVector Verts[8] = { FVector(1, 1, 1),
				FVector(1, 1,-1),
				FVector(1,-1, 1),
				FVector(1,-1,-1),
				FVector(-1, 1, 1),
				FVector(-1, 1,-1),
				FVector(-1,-1, 1),
				FVector(-1,-1,-1) };

			const int32 HalfX = 0.5f * InViewport->GetSizeXY().X;
			const int32 HalfY = 0.5f * InViewport->GetSizeXY().Y;

			FVector2D ScreenBoxMin(1000000000, 1000000000);
			FVector2D ScreenBoxMax(-1000000000, -1000000000);

			for (int32 j = 0; j<8; j++)
			{
				// Project vert into screen space.
				const FVector WorldVert = BoxCenter + (Verts[j]*BoxExtents);
				const float DPIScale = InCanvas->GetDPIScale();
				FVector2D PixelVert;
				if (InView->ScreenToPixel(InView->WorldToScreen(WorldVert), PixelVert))
				{
					PixelVert /= DPIScale;

					// Update screen-space bounding box with with transformed vert.
					ScreenBoxMin.X = FMath::Min<int32>(ScreenBoxMin.X, PixelVert.X);
					ScreenBoxMin.Y = FMath::Min<int32>(ScreenBoxMin.Y, PixelVert.Y);

					ScreenBoxMax.X = FMath::Max<int32>(ScreenBoxMax.X, PixelVert.X);
					ScreenBoxMax.Y = FMath::Max<int32>(ScreenBoxMax.Y, PixelVert.Y);
				}
			}


			FCanvasLineItem LineItem(FVector2D(0.0f, 0.0f), FVector2D(0.0f, 0.0f));
			LineItem.SetColor(InColor);
			if (bInDrawBracket)
			{
				// Draw a bracket when considering the non-current level.
				const float DeltaX = ScreenBoxMax.X - ScreenBoxMin.X;
				const float DeltaY = ScreenBoxMax.X - ScreenBoxMin.X;
				const FIntPoint Offset(DeltaX * 0.2f, DeltaY * 0.2f);

				LineItem.Draw(InCanvas, FVector2D(ScreenBoxMin.X, ScreenBoxMin.Y), FVector2D(ScreenBoxMin.X + Offset.X, ScreenBoxMin.Y));
				LineItem.Draw(InCanvas, FVector2D(ScreenBoxMin.X, ScreenBoxMax.Y), FVector2D(ScreenBoxMin.X + Offset.X, ScreenBoxMax.Y));

				LineItem.Draw(InCanvas, FVector2D(ScreenBoxMax.X, ScreenBoxMin.Y), FVector2D(ScreenBoxMax.X - Offset.X, ScreenBoxMin.Y));
				LineItem.Draw(InCanvas, FVector2D(ScreenBoxMax.X, ScreenBoxMax.Y), FVector2D(ScreenBoxMax.X - Offset.X, ScreenBoxMax.Y));

				LineItem.Draw(InCanvas, FVector2D(ScreenBoxMin.X, ScreenBoxMin.Y), FVector2D(ScreenBoxMin.X, ScreenBoxMin.Y + Offset.Y));
				LineItem.Draw(InCanvas, FVector2D(ScreenBoxMax.X, ScreenBoxMin.Y), FVector2D(ScreenBoxMax.X, ScreenBoxMin.Y + Offset.Y));

				LineItem.Draw(InCanvas, FVector2D(ScreenBoxMin.X, ScreenBoxMax.Y), FVector2D(ScreenBoxMin.X, ScreenBoxMax.Y - Offset.Y));
				LineItem.Draw(InCanvas, FVector2D(ScreenBoxMax.X, ScreenBoxMax.Y), FVector2D(ScreenBoxMax.X, ScreenBoxMax.Y - Offset.Y));
			}
			else
			{
				// Draw a box when considering the current level.
				LineItem.Draw(InCanvas, FVector2D(ScreenBoxMin.X, ScreenBoxMin.Y), FVector2D(ScreenBoxMin.X, ScreenBoxMax.Y));
				LineItem.Draw(InCanvas, FVector2D(ScreenBoxMin.X, ScreenBoxMax.Y), FVector2D(ScreenBoxMax.X, ScreenBoxMax.Y));
				LineItem.Draw(InCanvas, FVector2D(ScreenBoxMax.X, ScreenBoxMax.Y), FVector2D(ScreenBoxMax.X, ScreenBoxMin.Y));
				LineItem.Draw(InCanvas, FVector2D(ScreenBoxMax.X, ScreenBoxMin.Y), FVector2D(ScreenBoxMin.X, ScreenBoxMin.Y));
			}


			if (InLabelText.Len() > 0)
			{
				FCanvasTextItem TextItem(FVector2D(ScreenBoxMin.X + ((ScreenBoxMax.X - ScreenBoxMin.X) * 0.5f), ScreenBoxMin.Y), FText::FromString(InLabelText), GEngine->GetMediumFont(), InColor);
				TextItem.bCentreX = true;
				InCanvas->DrawItem(TextItem);
			}
		}
	}

	static void DrawActorScreenSpaceBoundingBox(FCanvas* InCanvas, const FSceneView* InView,const FViewport* InViewport, AActor* InActor, const FLinearColor& InColor, const bool bInDrawBracket, const FString& InLabelText)
	{
		check(InActor != NULL);


		// First check to see if we're dealing with a sprite, otherwise just use the normal bounding box
		UBillboardComponent* Sprite = InActor->FindComponentByClass<UBillboardComponent>();

		FBox ActorBox;
		if (Sprite != NULL)
		{
			ActorBox = Sprite->Bounds.GetBox();
		}
		else
		{
			const bool bNonColliding = true;
			ActorBox = InActor->GetComponentsBoundingBox(bNonColliding);
		}


		// If we didn't get a valid bounding box, just make a little one around the actor location
		if (!ActorBox.IsValid || ActorBox.GetExtent().GetMin() < KINDA_SMALL_NUMBER)
		{
			ActorBox = FBox(InActor->GetActorLocation() - FVector(-20), InActor->GetActorLocation() + FVector(20));
		}

		DrawBoundingBox(ActorBox, InCanvas, InView, InViewport, InColor, bInDrawBracket, InLabelText);
	}


	void DrawActorScreenSpaceBoundingBox(const FDrawHUDContext& Context, AActor* InActor, const FLinearColor& InColor, const bool bInDrawBracket, const FString& InLabelText /*= TEXT("")*/)
	{
		if (Context.IsValid())
		{
			DrawActorScreenSpaceBoundingBox(Context.Canvas, Context.View, Context.Viewport, InActor, InColor, bInDrawBracket, InLabelText);
		}
	}

}