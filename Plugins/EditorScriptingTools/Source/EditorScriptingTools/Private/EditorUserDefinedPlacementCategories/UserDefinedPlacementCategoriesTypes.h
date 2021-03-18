//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UserDefinedPlacementCategoriesTypes.generated.h"


USTRUCT(BlueprintType)
struct FUserDefinedPlacementCategoryInfo
{
	GENERATED_BODY()

	FUserDefinedPlacementCategoryInfo()
		: Name("MyCategory")
		, SortOrder(0)
		, bSortable(false)
	{

	}

	static FName GetFName()
	{
		return { "UserDefinedPlacementCategoryInfo" };
	}

	/** A unique name used to register this category. */
	UPROPERTY(config, EditAnywhere, Category = "PlacementCategory")
		FName Name;

	/** Sort order for the category tab (lowest first). */
	UPROPERTY(config, EditAnywhere, Category = "PlacementCategory", meta = (EditCondition = "bSortable"))
		uint32 SortOrder;

	/** Whether the items in this category are automatically sortable by name. False if the items are already sorted. */
	UPROPERTY(config, EditAnywhere, Category = "PlacementCategory", meta = (InlineEditConditionToggle))
		bool bSortable;

	/** The placeable items to register. */
	UPROPERTY(config, EditAnywhere, Category = "PlacementCategory")
		TSet<TSubclassOf<AActor>> ActorClasses;

	FORCEINLINE bool operator ==(const FUserDefinedPlacementCategoryInfo& Other) const
	{
		return this->Name == Other.Name;
	}

	friend FORCEINLINE uint32 GetTypeHash(const FUserDefinedPlacementCategoryInfo& Other)
	{
		return ::GetTypeHash(Other.Name);
	}
};
