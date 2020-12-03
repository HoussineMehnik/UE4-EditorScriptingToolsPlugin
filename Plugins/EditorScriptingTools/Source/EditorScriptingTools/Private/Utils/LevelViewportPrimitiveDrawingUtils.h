//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"


class UMaterialInterface;
class USplineComponent;

struct FDrawPrimitivesContext;

enum class EDepthPriorityGroup : uint8;

namespace LevelViewportPrimitiveDrawingUtils
{

	void DrawPoint(const FDrawPrimitivesContext& Context, const FVector& Position, const FLinearColor& Color, float PointSize, EDepthPriorityGroup DepthPriorityGroup);

	void DrawLine(const FDrawPrimitivesContext& Context, const FVector& Start, const FVector& End, const FLinearColor& Color, EDepthPriorityGroup DepthPriorityGroup, float Thickness, float DepthBias);

	void DrawTriangle(const FDrawPrimitivesContext& Context, const FVector& PointA, const FVector& PointB, const FVector& PointC, const FLinearColor& Color, bool bDrawLines, UMaterialInterface* Material, EDepthPriorityGroup DepthPriorityGroup, bool bDisableBackfaceCulling, bool bReceivesDecals);

	void DrawSphere(const FDrawPrimitivesContext& Context, const FVector& Center, float Radius, int32 NumSides, int32 NumRings, UMaterialInterface* Material, EDepthPriorityGroup DepthPriorityGroup, bool bDisableBackfaceCulling);
	void DrawWireSphere(const FDrawPrimitivesContext& Context, const FVector& Center, const FLinearColor& Color, float Radius, int32 NumSides, EDepthPriorityGroup DepthPriorityGroup, float Thickness, float DepthBias);

	void DrawBox(const FDrawPrimitivesContext& Context, const FTransform& Transform, const FVector& Extent, UMaterialInterface* Material, EDepthPriorityGroup DepthPriorityGroup);
	void DrawWireBox(const FDrawPrimitivesContext& Context, const FTransform& Transform, const FVector& Extent, const FLinearColor& Color, EDepthPriorityGroup DepthPriorityGroup, float Thickness, float DepthBias);

	void DrawCylinder(const FDrawPrimitivesContext& Context, const FVector& Center, const FRotator& Rotation, const UMaterialInterface* Material, float Radius, float HalfHeight, uint32 NumSides, EDepthPriorityGroup DepthPriorityGroup, float DepthBias);
	void DrawWireCylinder(const FDrawPrimitivesContext& Context, const FVector& Center, const FRotator& Rotation, const FLinearColor& Color, float Radius, float HalfHeight, int32 NumSides, EDepthPriorityGroup DepthPriorityGroup, float Thickness, float DepthBias);

	void DrawFlatArrow(const FDrawPrimitivesContext& Context, const FVector& Location, const FVector& XAxis, const FVector& YAxis, const FLinearColor& Color, float Length, int32 Width, UMaterialInterface* Material, EDepthPriorityGroup DepthPriorityGroup, float Thickness);

	void DrawSpline(const FDrawPrimitivesContext& Context, USplineComponent* SplineComponent, const FLinearColor& LineColor, EDepthPriorityGroup DepthPriorityGroup);
}