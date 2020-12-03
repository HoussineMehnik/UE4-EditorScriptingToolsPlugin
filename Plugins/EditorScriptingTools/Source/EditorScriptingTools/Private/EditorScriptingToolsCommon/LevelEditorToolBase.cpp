//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "LevelEditorToolBase.h"
#include "Editor.h"
#include "Engine/Engine.h"
#include "Editor/EditorEngine.h"
#include "CanvasTypes.h"
#include "LevelViewportPrimitiveDrawingUtils.h"
#include "LevelViewportCanvasDrawingUtils.h"



#define LOCTEXT_NAMESPACE "LevelEditorToolBase"


ULevelEditorToolBase::ULevelEditorToolBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}


class UWorld* ULevelEditorToolBase::GetWorld() const
{
	if (GWorld)
	{
		// When in 'Simulate' mode, the editor mode tools will actually interact with the PIE world
		if (GEditor->bIsSimulatingInEditor)
		{
			return GEditor->GetPIEWorldContext()->World();
		}
		else
		{
			return GEditor->GetEditorWorldContext().World();
		}
	}

	return Super::GetWorld();
}


//~ Level Viewport Primitives Drawing *****************************************************************************************************************************************/


void ULevelEditorToolBase::DrawPoint(FDummyStruct DrawPrimitivesContext, FVector Position, FLinearColor Color /*= FLinearColor::White*/, float PointSize /*= 0.0f*/, EDepthPriorityGroup DepthPriorityGroup /*= EDepthPriorityGroup::World*/)
{
	LevelViewportPrimitiveDrawingUtils::DrawPoint(GetDrawPrimitivesContext(), Position, Color, PointSize, DepthPriorityGroup);
}

void ULevelEditorToolBase::DrawLine(FDummyStruct DrawPrimitivesContext, FVector Start, FVector End, FLinearColor Color/*= FLinearColor::White*/, EDepthPriorityGroup DepthPriorityGroup /*= EDepthPriorityGroup::World*/, float Thickness /*= 0.0f*/, float DepthBias /*= 0.0f*/)
{
	LevelViewportPrimitiveDrawingUtils::DrawLine(GetDrawPrimitivesContext(), Start, End, Color, DepthPriorityGroup, Thickness, DepthBias);
}

void ULevelEditorToolBase::DrawTriangle(FDummyStruct DrawPrimitivesContext, FVector PointA, FVector PointB, FVector PointC, FLinearColor Color /*= FLinearColor::White*/, bool bDrawLines /*= false*/, UMaterialInterface* Material /*= nullptr*/, EDepthPriorityGroup DepthPriorityGroup /*= EDepthPriorityGroup::World*/, bool bDisableBackfaceCulling /*= false*/, bool bReceivesDecals /*= false*/)
{
	LevelViewportPrimitiveDrawingUtils::DrawTriangle(GetDrawPrimitivesContext(), PointA, PointB, PointC, Color, bDrawLines, Material, DepthPriorityGroup, bDisableBackfaceCulling, bReceivesDecals);
}

void ULevelEditorToolBase::DrawSphere(FDummyStruct DrawPrimitivesContext, FVector Center, float Radius /*= 50.0f*/, int32 NumSides /*= 16*/, int32 NumRings /*= 16*/, UMaterialInterface* Material /*= nullptr*/, EDepthPriorityGroup DepthPriorityGroup /*= EDepthPriorityGroup::World*/, bool bDisableBackfaceCulling /*= false*/)
{
	LevelViewportPrimitiveDrawingUtils::DrawSphere(GetDrawPrimitivesContext(), Center, Radius, NumSides, NumRings, Material, DepthPriorityGroup, bDisableBackfaceCulling);
}

void ULevelEditorToolBase::DrawWireSphere(FDummyStruct DrawPrimitivesContext, FVector Center, FLinearColor Color /*= FLinearColor::White*/, float Radius /*= 50.0f*/, int32 NumSides /*= 16*/, EDepthPriorityGroup DepthPriority /*= EDepthPriorityGroup::DPG_World*/, float Thickness /*= 0.0f*/, float DepthBias /*= 0.0f*/)
{
	LevelViewportPrimitiveDrawingUtils::DrawWireSphere(GetDrawPrimitivesContext(), Center, Color, Radius, NumSides, DepthPriority, Thickness, DepthBias);
}

void ULevelEditorToolBase::DrawBox(FDummyStruct DrawPrimitivesContext, FTransform Transform, FVector Extent /*= FVector(50.0f)*/, UMaterialInterface* Material /*= nullptr*/, EDepthPriorityGroup DepthPriority /*= EDepthPriorityGroup::DPG_World*/)
{
	LevelViewportPrimitiveDrawingUtils::DrawBox(GetDrawPrimitivesContext(), Transform, Extent, Material, DepthPriority);
}

void ULevelEditorToolBase::DrawWireBox(FDummyStruct DrawPrimitivesContext, FTransform Transform, FVector Extent /*= FVector(50.0f)*/, FLinearColor Color /*= FLinearColor::White*/, EDepthPriorityGroup DepthPriority /*= EDepthPriorityGroup::DPG_World*/, float Thickness /*= 0.0f*/, float DepthBias /*= 0.0f*/)
{
	LevelViewportPrimitiveDrawingUtils::DrawWireBox(GetDrawPrimitivesContext(), Transform, Extent, Color, DepthPriority, Thickness, DepthBias);
}

void ULevelEditorToolBase::DrawFlatArrow(FDummyStruct DrawPrimitivesContext, FVector Location, FVector XAxis /*= FVector(1, 0, 0)*/, FVector YAxis /*= FVector(0, 1, 0)*/, FLinearColor Color /*= FLinearColor::White*/, float Length /*= 1.0f*/, int32 Width /*= 1*/, UMaterialInterface* Material /*= nullptr*/, EDepthPriorityGroup DepthPriority /*= EDepthPriorityGroup::DPG_World*/, float Thickness /*= 0.0f*/)
{
	LevelViewportPrimitiveDrawingUtils::DrawFlatArrow(GetDrawPrimitivesContext(), Location, XAxis, YAxis, Color, Length, Width, Material, DepthPriority, Thickness);
}


void ULevelEditorToolBase::DrawSpline(FDummyStruct DrawPrimitivesContext, USplineComponent* SplineComponent, FLinearColor LineColor /*= FLinearColor::White*/, EDepthPriorityGroup DepthPriorityGroup /*= EDepthPriorityGroup::World*/)
{
	LevelViewportPrimitiveDrawingUtils::DrawSpline(GetDrawPrimitivesContext(), SplineComponent, LineColor, DepthPriorityGroup);
}

/** ~Level Viewport Canvas  Drawing *********************************************************************************************************************************************/
/********************************************************************************************************************************************************************************/


void ULevelEditorToolBase::DrawSimpleText(FDummyStruct DrawHUDContext, const FString& Text, FLinearColor TextColor, float ScreenX, float ScreenY, UFont* Font /*= nullptr*/, float Scale /*= 1.f*/)
{
	LevelViewportCanvasDrawingUtils::DrawText(GetDrawHUDContext(), Text, TextColor, ScreenX, ScreenY, Font, Scale);

}

void ULevelEditorToolBase::DrawCanvasLine(FDummyStruct DrawHUDContext, FVector2D LineStart, FVector2D LineEnd, FLinearColor LineColor, float LineThickness /*= 0.f*/)
{
	LevelViewportCanvasDrawingUtils::DrawLine(GetDrawHUDContext(), LineStart.X, LineStart.Y, LineEnd.X, LineEnd.Y, LineColor, LineThickness);
}

void ULevelEditorToolBase::DrawActorScreenSpaceBoundingBox(FDummyStruct DrawHUDContext, AActor* InActor, FLinearColor Color, const bool bDrawBracket, FString LabelText /*= TEXT("")*/)
{
	LevelViewportCanvasDrawingUtils::DrawActorScreenSpaceBoundingBox(GetDrawHUDContext(), InActor, Color, bDrawBracket, LabelText);
}

float ULevelEditorToolBase::GetCanvasDPIScale(FDummyStruct DrawHUDContext)
{
	if (FCanvas* Canvas = GetDrawHUDContext().Canvas)
	{
		return  Canvas->GetDPIScale();
	}
	return 1.0f;
}


#undef LOCTEXT_NAMESPACE