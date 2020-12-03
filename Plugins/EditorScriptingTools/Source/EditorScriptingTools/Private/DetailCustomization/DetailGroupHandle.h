//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DetailCategoryBuilderHandle.h"
#include "DetailGroupHandle.generated.h"


class UEditorUserWidget;
class IDetailCategoryBuilder;
class IDetailGroup;
class FNativeDetailCustomizationInstance;


USTRUCT(BlueprintType)
struct FDetailGroupHandle
{
	GENERATED_USTRUCT_BODY()


public:
	FDetailGroupHandle() {}

	void Init(const FDetailCategoryBuilderHandle& InCategoryBuilderHandle, IDetailGroup& InDetailGroup);
	bool IsValid() const;
	void Invalidate();

	FDetailCategoryBuilderHandle& GetCategoryBuilderHandle();
	IDetailGroup* GetNativDetailGroup();

	void operator=(const FDetailGroupHandle& Other);

private:
	FDetailCategoryBuilderHandle DetailCategoryBuilderHandle{};
	IDetailGroup* NativeDetailGroupPtr{ nullptr };
};

UCLASS()
class UDetailGroupBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "Detail Customization | Detail Group")
		static bool IsValid(UPARAM(ref) FDetailGroupHandle& DetailGroupHandle);

	/**
	 * Adds a group to the category
	 *
	 * @param OutDetailGroupHandle	The name of the group
	 * @param GroupName	The name of the group
	 * @param DisplayName The display name of the group
	 * @param bIsAdvanced true if the group should appear in the advanced section of the category
	 * @param bStartExpanded true if the group should start expanded
	 */
	UFUNCTION(BlueprintCallable, Category = "Detail Customization | Category Builder", meta = (DisplayName = "Add Group", Keywords = "add new detail group category"))
		static void AddGroup(UPARAM(ref) FDetailCategoryBuilderHandle& CategoryBuilderHandle, FDetailGroupHandle& OutDetailGroupHandle, FName InGroupName, FText InDisplayName, bool bIsAdvanced = false, bool bStartExpanded = false);

	/**
	 * Makes a custom row for the groups header
	 *
	 * @return a new row for customizing the header
	 */
	UFUNCTION(BlueprintCallable, Category = "Detail Customization | Detail Group", meta = (DeterminesOutputType = "WidgetClass", DisplayName = "Add Header Row Widget", Keywords = "add create header row widget"))
		static UEditorUserWidget* HeaderRow(UPARAM(ref) FDetailGroupHandle& DetailGroupHandle, TSubclassOf<UEditorUserWidget> WidgetClass);

	/**
	 * Adds a new row for custom widgets *
	 *
	 * @return a new row for adding widgets
	 */
	UFUNCTION(BlueprintCallable, Category = "Detail Customization | Detail Group", meta = (DeterminesOutputType = "WidgetClass", DisplayName = "Add Group Row Widget", Keywords = "add create category group row widget"))
		static UEditorUserWidget* AddWidgetRow(UPARAM(ref) FDetailGroupHandle& DetailGroupHandle, TSubclassOf<UEditorUserWidget> WidgetClass);
};
