//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditorTypesWrapperTypes.h"
#include "MathEditorBlueprintLibrary.generated.h"


UCLASS()
class UMathEditorBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/**
	 * Intersection test with an axis-aligned box.
	 * @param Volume -
	 * @param Origin - Origin of the box.
	 * @param Extent - Extent of the box along each axis.
	 * @param bOutFullyContained - The box is definitely inside frustums and fully contained.
	 * @returns true if this convex volume intersects the given translated box.
	 */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Selection Frustum Volume", meta = (DisplayName = "Intersect Box", Keywords = "intersect"))
		static bool IntersectBox(const FSelectionFrustumVolume& SelectionFrustum, const FVector& Origin, const FVector& Extent, bool& bOutFullyContained);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Selection Frustum Volume", meta = (DisplayName = "Intersect Sphere", Keywords = "intersect"))
		static bool IntersectSphere(const FSelectionFrustumVolume& SelectionFrustum, const FVector& Origin, const float& Radius, bool& bOutFullyContained);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Selection Frustum Volume", meta = (DisplayName = "Intersect Line", Keywords = "intersect"))
		static bool IntersectLineSegment(const FSelectionFrustumVolume& SelectionFrustum, const FVector& Start, const FVector& End);

	/** Determines whether the given point lies inside the convex volume */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Selection Frustum Volume", meta = (DisplayName = "Intersect Point", Keywords = "intersect"))
		static bool IntersectPoint(const FSelectionFrustumVolume& SelectionFrustum, const FVector& Point);
};