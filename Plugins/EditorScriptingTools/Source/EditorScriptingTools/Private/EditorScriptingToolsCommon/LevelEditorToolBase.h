//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "UObject/ScriptMacros.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditorScriptingToolsTypes.h"
#include "EditorTypesWrapperTypes.h"
#include "ILevelEditingContext.h"
#include "LevelEditorToolBase.generated.h"

class UEditorUserDefinedActions;
class UTexture2D;
class AActor;
class USplineComponent;
class UEditorUserWidget;



UCLASS(Abstract)
class ULevelEditorToolBase : public UObject, public ILevelEditingContext
{
	GENERATED_UCLASS_BODY()

public:


	//~ Begin UObject interface
	virtual class UWorld* GetWorld() const final;
	//~ End UObject interface

	//~ Begin ILevelEditingContext interface
	virtual ELevelEditingContextType GetLevelEditingContext() override { return ELevelEditingContextType::Invalid; }
	virtual const FDrawPrimitivesContext& GetDrawPrimitivesContext() override { return FDrawPrimitivesContext::InvalidContext; }
	virtual const FDrawHUDContext& GetDrawHUDContext() override { return FDrawHUDContext::InvalidContext; }
	//~ End UObject interface

	//~ Level Viewport Primitives Drawing *****************************************************************************************************************************************/

	UFUNCTION(BlueprintCallable, Category = "LevelEditingViewport|DrawPrimitives", meta = (HideSelfPin = "true"))
		void  DrawPoint(FDummyStruct DrawPrimitivesContext, FVector Position, FLinearColor Color = FLinearColor::White, float PointSize = 0.0f, EDepthPriorityGroup DepthPriorityGroup = EDepthPriorityGroup::World);

	UFUNCTION(BlueprintCallable, Category = "LevelEditingViewport|DrawPrimitives", meta = (HideSelfPin = "true"))
		void DrawLine(FDummyStruct DrawPrimitivesContext, FVector Start, FVector End, FLinearColor Color = FLinearColor::White, EDepthPriorityGroup DepthPriorityGroup = EDepthPriorityGroup::World, float Thickness = 0.0f, float DepthBias = 0.0f);

	UFUNCTION(BlueprintCallable, Category = "LevelEditingViewport|DrawPrimitives", meta = (HideSelfPin = "true"))
		void DrawTriangle(FDummyStruct DrawPrimitivesContext, FVector PointA, FVector PointB, FVector PointC, FLinearColor Color = FLinearColor::White, bool bDrawLines = false, UMaterialInterface* Material = nullptr, EDepthPriorityGroup DepthPriorityGroup = EDepthPriorityGroup::World, bool bDisableBackfaceCulling = false, bool bReceivesDecals = false);

	UFUNCTION(BlueprintCallable, Category = "LevelEditingViewport|DrawPrimitives", meta = (HideSelfPin = "true"))
		void DrawSphere(FDummyStruct DrawPrimitivesContext, FVector Center, float Radius = 50.0f, int32 NumSides = 16, int32 NumRings = 16, UMaterialInterface* Material = nullptr, EDepthPriorityGroup DepthPriorityGroup = EDepthPriorityGroup::World, bool bDisableBackfaceCulling = false);

	UFUNCTION(BlueprintCallable, Category = "LevelEditingViewport|DrawPrimitives", meta = (HideSelfPin = "true"))
		void DrawWireSphere(FDummyStruct DrawPrimitivesContext, FVector Center, FLinearColor Color = FLinearColor::White, float Radius = 50.0f, int32 NumSides = 16, EDepthPriorityGroup DepthPriority = EDepthPriorityGroup::World, float Thickness = 0.0f, float DepthBias = 0.0f);

	UFUNCTION(BlueprintCallable, Category = "LevelEditingViewport|DrawPrimitives", meta = (HideSelfPin = "true"))
		void DrawBox(FDummyStruct DrawPrimitivesContext, FTransform Transform, FVector Extent = FVector(50.0f), UMaterialInterface* Material = nullptr, EDepthPriorityGroup DepthPriority = EDepthPriorityGroup::World);

	UFUNCTION(BlueprintCallable, Category = "LevelEditingViewport|DrawPrimitives", meta = (HideSelfPin = "true"))
		void DrawWireBox(FDummyStruct DrawPrimitivesContext, FTransform Transform, FVector Extent = FVector(50.0f), FLinearColor Color = FLinearColor::White, EDepthPriorityGroup DepthPriority = EDepthPriorityGroup::World, float Thickness = 0.0f, float DepthBias = 0.0f);

	UFUNCTION(BlueprintCallable, Category = "LevelEditingViewport|DrawPrimitives", meta = (HideSelfPin = "true"))
		void DrawFlatArrow(FDummyStruct DrawPrimitivesContext, FVector Location, FVector XAxis = FVector(1, 0, 0), FVector YAxis = FVector(0, 1, 0), FLinearColor Color = FLinearColor::White, float Length = 1.0f, int32 Width = 1, UMaterialInterface* Material = nullptr, EDepthPriorityGroup DepthPriority = EDepthPriorityGroup::World, float Thickness = 0.0f);

	UFUNCTION(BlueprintCallable, Category = "LevelEditingViewport|DrawPrimitives", meta = (HideSelfPin = "true"))
		void DrawSpline(FDummyStruct DrawPrimitivesContext, USplineComponent* SplineComponent, FLinearColor LineColor = FLinearColor::White, EDepthPriorityGroup DepthPriorityGroup = EDepthPriorityGroup::World);


	//~ Level Viewport Canvas  Drawing ********************************************************************************************************************************************/

	/**
	 * Draws a string on the HUD.
	 * @param Text				String to draw
	 * @param TextColor			Color to draw string
	 * @param ViewportX			Screen-space X coordinate of upper left corner of the string.
	 * @param ViewportY			Screen-space Y coordinate of upper left corner of the string.
	 * @param Font				Font to draw text.  If NULL, default font is chosen.
	 * @param TextScale				Scale multiplier to control size of the text.
	 */
	UFUNCTION(BlueprintCallable, Category = "LevelEditingViewport|HUD", meta = (TextColor = "(R=0,G=0,B=0,A=1)"), meta = (HideSelfPin = "true"))
		void DrawSimpleText(FDummyStruct DrawHUDContext, const FString& Text, FLinearColor TextColor, float ViewportX, float ViewportY, UFont* Font = nullptr, float TextScale = 1.f);

	/**
	 * Draws a 2D line on the HUD.
	 * @param StartScreenX		Screen-space X coordinate of start of the line.
	 * @param StartScreenY		Screen-space Y coordinate of start of the line.
	 * @param EndScreenX		Screen-space X coordinate of end of the line.
	 * @param EndScreenY		Screen-space Y coordinate of end of the line.
	 * @param LineColor			Color to draw line
	 * @param LineThickness		Thickness of the line to draw
	 */
	UFUNCTION(BlueprintCallable, Category = "LevelEditingViewport|HUD", meta = (LineColor = "(R=0,G=0,B=0,A=1)"), DisplayName = "Draw Line", meta = (HideSelfPin = "true"))
		void DrawCanvasLine(FDummyStruct DrawHUDContext, FVector2D LineStart, FVector2D LineEnd, FLinearColor LineColor, float LineThickness = 0.f);

	/**
	 * Draws a screen space bounding box around the specified actor
	 *
	 * @param	Actor			Actor to draw a bounding box for
	 * @param	Color			Color of bounding box
	 * @param	bDrawBracket	True to draw a bracket, otherwise a box will be rendered
	 * @param	LabelText		Optional label text to draw
	 */
	UFUNCTION(BlueprintCallable, Category = "LevelEditingViewport|HUD", meta = (Color = "(R=0,G=0,B=0,A=1)"), DisplayName = "Draw Actor Screen Space Bounding Box", meta = (HideSelfPin = "true"))
		void DrawActorScreenSpaceBoundingBox(FDummyStruct DrawHUDContext, AActor* Actor, FLinearColor Color, const bool bDrawBracket, FString LabelText = TEXT(""));


	/** Returns the DPI scale factor of the native window */
	UFUNCTION(BlueprintPure, Category = "LevelEditingViewport|HUD", meta = (HideSelfPin = "true"))
		float GetCanvasDPIScale(FDummyStruct DrawHUDContext);
};
