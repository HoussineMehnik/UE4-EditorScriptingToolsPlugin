//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "DetailCustomizationUtilityBlueprint.h"
#include "DetailCustomizationTypes.generated.h"


class FPropertyWidgetHelpers
{
public:
	static TSharedRef<class SWidget> UnknownPropertyWidget;
};


USTRUCT(BlueprintType)
struct FEditablePropertyInfo
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Editable Property Info")
		FName PropertyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Editable Property Info")
		FString PropertyPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Editable Property Info")
		TSubclassOf<UObject> PropertyOwnerClass;

	FEditablePropertyInfo()
		:PropertyName(NAME_None)
		, PropertyPath(TEXT(""))
		, PropertyOwnerClass(nullptr)
	{

	}

};



