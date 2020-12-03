//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "LevelViewportPrimitiveDrawingUtils.h"
#include "EditorTypesWrapperTypes.h"
#include "BluEdMode.h"
#include "Editor.h"
#include "Engine/Engine.h"
#include "Materials/MaterialInterface.h"
#include "Materials/Material.h"
#include "Components/SplineComponent.h"
#include "EditorScriptingToolsTypes.h"


#define LOCTEXT_NAMESPACE "LevelViewportPrimitiveDrawingUtils"

namespace LevelViewportPrimitiveDrawingUtils
{
	void DrawPoint(const FDrawPrimitivesContext& Context, const FVector& Position, const FLinearColor& Color, float PointSize, EDepthPriorityGroup DepthPriorityGroup)
	{
		if (FPrimitiveDrawInterface* PDI = Context.PDI)
		{
			PDI->DrawPoint(Position, Color, PointSize, CAST_TO_UINT8(DepthPriorityGroup));
		}
	}

	void DrawLine(const FDrawPrimitivesContext& Context, const FVector& Start, const FVector& End, const FLinearColor& Color, EDepthPriorityGroup DepthPriorityGroup, float Thickness, float DepthBias)
	{
		if (FPrimitiveDrawInterface* PDI = Context.PDI)
		{
			PDI->DrawLine(Start, End, Color, CAST_TO_UINT8(DepthPriorityGroup), Thickness, DepthBias, false);
		}
	}

	void DrawTriangle(const FDrawPrimitivesContext& Context, const FVector& PointA, const FVector& PointB, const FVector& PointC, const FLinearColor& Color, bool bDrawLines, UMaterialInterface* Material, EDepthPriorityGroup DepthPriorityGroup, bool bDisableBackfaceCulling, bool bReceivesDecals)
	{
		if (FPrimitiveDrawInterface* PDI = Context.PDI)
		{
			const FMaterialRenderProxy* MaterialRenderProxy = Material != nullptr ? Material->GetRenderProxy() : GEditor->ArrowMaterial->GetRenderProxy();

			FDynamicMeshBuilder MeshBuilder(PDI->View->GetFeatureLevel());

			const FVector Normal = (PointB - PointA).GetSafeNormal();
			const FVector Tangent = ((PointB - PointA) ^ (PointC - PointA)).GetSafeNormal();
			const FColor VertexColor = Color.ToFColor(false);

			MeshBuilder.AddVertex(FDynamicMeshVertex(PointA, Tangent, Normal, FVector2D(0, 0), VertexColor));
			MeshBuilder.AddVertex(FDynamicMeshVertex(PointB, Tangent, Normal, FVector2D(0, 1), VertexColor));
			MeshBuilder.AddVertex(FDynamicMeshVertex(PointC, Tangent, Normal, FVector2D(1, 1), VertexColor));

			MeshBuilder.AddTriangle(0, 1, 2);

			MeshBuilder.Draw(PDI, FMatrix::Identity, MaterialRenderProxy, CAST_TO_UINT8(DepthPriorityGroup), bDisableBackfaceCulling, bReceivesDecals);

			if (bDrawLines)
			{
				PDI->DrawLine(PointA, PointB, VertexColor, CAST_TO_UINT8(DepthPriorityGroup), 1.f);
				PDI->DrawLine(PointA, PointC, VertexColor, CAST_TO_UINT8(DepthPriorityGroup), 1.f);
				PDI->DrawLine(PointB, PointC, VertexColor, CAST_TO_UINT8(DepthPriorityGroup), 1.f);
			}
		}
	}

	void DrawSphere(const FDrawPrimitivesContext& Context, const FVector& Center, float Radius, int32 NumSides, int32 NumRings, UMaterialInterface* Material, EDepthPriorityGroup DepthPriorityGroup, bool bDisableBackfaceCulling)
	{
		if (FPrimitiveDrawInterface* PDI = Context.PDI)
		{
			const FMaterialRenderProxy* MaterialRenderProxy = Material != nullptr ? Material->GetRenderProxy() : GEditor->ArrowMaterial->GetRenderProxy();
			::DrawSphere(PDI, Center, FRotator::ZeroRotator, FVector(Radius), NumSides, NumRings, MaterialRenderProxy, CAST_TO_UINT8(DepthPriorityGroup), bDisableBackfaceCulling);
		}
	}

	void DrawWireSphere(const FDrawPrimitivesContext& Context, const FVector& Center, const FLinearColor& Color, float Radius, int32 NumSides, EDepthPriorityGroup DepthPriorityGroup, float Thickness, float DepthBias)
	{
		if (FPrimitiveDrawInterface* PDI = Context.PDI)
		{
			::DrawWireSphere(PDI, Center, Color, Radius, NumSides, CAST_TO_UINT8(DepthPriorityGroup), Thickness, DepthBias, false);
		}
	}

	void DrawBox(const FDrawPrimitivesContext& Context, const FTransform& Transform, const FVector& Extent, UMaterialInterface* Material, EDepthPriorityGroup DepthPriorityGroup)
	{
		if (FPrimitiveDrawInterface* PDI = Context.PDI)
		{
			const FMaterialRenderProxy* MaterialRenderProxy = Material != nullptr ? Material->GetRenderProxy() : GEditor->ArrowMaterial->GetRenderProxy();
			::DrawBox(PDI, Transform.ToMatrixWithScale(), Extent, MaterialRenderProxy, CAST_TO_UINT8(DepthPriorityGroup));
		}
	}

	void DrawWireBox(const FDrawPrimitivesContext& Context, const FTransform& Transform, const FVector& Extent, const FLinearColor& Color, EDepthPriorityGroup DepthPriorityGroup, float Thickness, float DepthBias)
	{
		if (FPrimitiveDrawInterface* PDI = Context.PDI)
		{
			::DrawWireBox(PDI, Transform.ToMatrixWithScale(), FBox(-Extent, Extent), Color, CAST_TO_UINT8(DepthPriorityGroup), Thickness, DepthBias);
		}
	}

	void DrawCylinder(const FDrawPrimitivesContext& Context, const FVector& Center, const FRotator& Rotation, UMaterialInterface* Material, float Radius, float HalfHeight, uint32 NumSides, EDepthPriorityGroup DepthPriorityGroup, float DepthBias)
	{
		if (FPrimitiveDrawInterface* PDI = Context.PDI)
		{
			const FVector X = Rotation.Vector();
			const FVector Y = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
			const FVector Z = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Z);
			//::DrawCylinder(PDI, Center, X, Y, Z, Radius, HalfHeight, NumSides, Material, ENUM_TO_UINT8(DepthPriorityGroup));
		}
	}

	void DrawWireCylinder(const FDrawPrimitivesContext& Context, const FVector& Center, const FRotator& Rotation, const FLinearColor& Color, float Radius, float HalfHeight, int32 NumSides, EDepthPriorityGroup DepthPriorityGroup, float Thickness, float DepthBias)
	{
		if (FPrimitiveDrawInterface* PDI = Context.PDI)
		{
			const FVector X = Rotation.Vector();
			const FVector Y = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
			const FVector Z = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Z);
			::DrawWireCylinder(PDI, Center, X, Y, Z, Color, Radius, HalfHeight, NumSides, CAST_TO_UINT8(DepthPriorityGroup), Thickness, DepthBias, false);
		}
	}

	void DrawFlatArrow(const FDrawPrimitivesContext& Context, const FVector& Location, const FVector& XAxis, const FVector& YAxis, const FLinearColor& Color, float Length, int32 Width, UMaterialInterface* Material, EDepthPriorityGroup DepthPriorityGroup, float Thickness)
	{
		if (FPrimitiveDrawInterface* PDI = Context.PDI)
		{
			const FMaterialRenderProxy* MaterialRenderProxy = Material != nullptr ? Material->GetRenderProxy() : GEditor->ArrowMaterial->GetRenderProxy();
			::DrawFlatArrow(PDI, Location, XAxis, YAxis, Color.ToFColor(false), Length, Width, MaterialRenderProxy, CAST_TO_UINT8(DepthPriorityGroup), Thickness);
		}
	}

	void DrawSpline(const FDrawPrimitivesContext& Context, USplineComponent* SplineComponent, const FLinearColor& LineColor, EDepthPriorityGroup DepthPriorityGroup)
	{
		if (Context.IsValid())
		{
			USplineComponent::Draw(Context.PDI, Context.View, SplineComponent->GetSplinePointsPosition(), SplineComponent->GetComponentTransform().ToMatrixWithScale(), LineColor, CAST_TO_UINT8(DepthPriorityGroup));
		}
	}
}

#undef LOCTEXT_NAMESPACE 