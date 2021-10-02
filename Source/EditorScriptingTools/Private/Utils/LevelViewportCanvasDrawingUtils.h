//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "CoreMinimal.h"

class UFont;
class AActor;

struct FDrawHUDContext;
/// <summary>
/// 
/// </summary>
namespace LevelViewportCanvasDrawingUtils
{
	void DrawText(const FDrawHUDContext& Context, const FString& Text, const FLinearColor& TextColor, float ScreenX, float ScreenY, UFont* Font, float Scale);
	void DrawLine(const FDrawHUDContext& Context, float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, const FLinearColor& LineColor, float LineThickness);

	void DrawActorScreenSpaceBoundingBox(const FDrawHUDContext& Context, AActor* InActor, const FLinearColor& InColor, const bool bInDrawBracket, const FString& InLabelText = TEXT(""));

}