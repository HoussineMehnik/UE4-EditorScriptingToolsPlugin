//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

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
	UFont* GetBluEdModeDefaultFont();

	void DrawText(const FDrawHUDContext& Context, const FString& Text, const FLinearColor& TextColor, float ScreenX, float ScreenY, UFont* Font, float Scale);
	void DrawLine(const FDrawHUDContext& Context, float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, const FLinearColor& LineColor, float LineThickness);

	void DrawActorScreenSpaceBoundingBox(const FDrawHUDContext& Context, AActor* InActor, const FLinearColor& InColor, const bool bInDrawBracket, const FString& InLabelText = TEXT(""));

}