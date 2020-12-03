//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditorTypesWrapperTypes.h"
#include "DetailCategoryBuilderHandle.generated.h"


class UEditorUserWidget;
class IDetailCategoryBuilder;
class FNativeDetailCustomizationInstance;

USTRUCT(BlueprintType)
struct FDetailCategoryBuilderHandle
{
	GENERATED_USTRUCT_BODY()


public:
	FDetailCategoryBuilderHandle() {}

	void Init(const TSharedPtr<FNativeDetailCustomizationInstance>& InNativeDetailCustomization, IDetailCategoryBuilder& InCategoryBuilder);
	bool IsValid() const;
	void Invalidate();
	IDetailCategoryBuilder* GetNativeCategoryBuilder();
	FNativeDetailCustomizationInstance* GetNativeDetailCustomizationInstance();

	void operator=(const FDetailCategoryBuilderHandle& Other);

private:
	TWeakPtr<FNativeDetailCustomizationInstance> NativeDetailCustomizationWeakPtr{ nullptr };
	IDetailCategoryBuilder* NativeCategoryBuilderPtr{ nullptr };
};


UCLASS()
class UDetailCategoryBuilderBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "Detail Customization | Category Builder")
		static bool IsValid(UPARAM(ref) FDetailCategoryBuilderHandle& CategoryBuilderHandle);

	/**
	 * Whether or not the category should be initially collapsed
	 */
	UFUNCTION(BlueprintCallable, Category = "Detail Customization | Category Builder")
		static void SetInitiallyCollapsed(UPARAM(ref) FDetailCategoryBuilderHandle& CategoryBuilderHandle, bool bShouldBeInitiallyCollapsed);

	/**
	 * Adds a custom widget row to the edited category ( Whole row widget )
	 *
	 * @param WidgetClass		 UMG widget class
	 * @param FilterString		 A string which is used to filter this custom row when a user types into the details panel search box
	 * @param bForAdvanced		 Whether the widget should appear in the advanced section
	 */
	UFUNCTION(BlueprintCallable, Category = "Detail Customization | Category Builder", meta = (DeterminesOutputType = "WidgetClass", DisplayName = "Add Category Row Widget", Keywords = "add create category row widget"))
		static UEditorUserWidget* AddCustomRowWidget(UPARAM(ref) FDetailCategoryBuilderHandle& CategoryBuilderHandle, TSubclassOf<UEditorUserWidget> WidgetClass, FText FilterString, bool bIsAdvanced = false);

	/**
	 * Adds a custom widgets row to the edited category ( Name and Value columns widgets )
	 *
	 * @param OutNameColumnWidget	 Created name column widget
	 * @param OutValueColumnWidget   Created value column widget
	 * @param NameColumnWidget		 Name column UMG widget class ( null value will generate an empty widget )
	 * @param ValueColumnWidget		 Value column UMG widget class ( null value will generate an empty widget )
	 * @param FilterString			 A string which is used to filter this custom row when a user types into the details panel search box
	 * @param bForAdvanced			 Whether the widget should appear in the advanced section
	 */
	UFUNCTION(BlueprintCallable, Category = "Detail Customization | Category Builder", meta = (DisplayName = "Add Category Row Name And Value Widgets", Keywords = "add create category name value content column widget"))
		static void AddCustomRowWidgets(UPARAM(ref) FDetailCategoryBuilderHandle& CategoryBuilderHandle, UEditorUserWidget*& OutNameColumnWidget, UEditorUserWidget*& OutValueColumnWidget, TSubclassOf<UEditorUserWidget> NameColumnWidgetClass, TSubclassOf<UEditorUserWidget> ValueColumnWidgetClass, FText FilterString, bool bIsAdvanced = false);


	/**
	 * Adds header content to the category
	 *
	 * @param WidgetClass	The header content widget class
	 */
	UFUNCTION(BlueprintCallable, Category = "Detail Customization | Category Builder", meta = (DeterminesOutputType = "WidgetClass", DisplayName = "Add Header Content Widget", Keywords = "add create category header widget"))
		static UEditorUserWidget* AddHeaderContent(UPARAM(ref) FDetailCategoryBuilderHandle& CategoryBuilderHandle, TSubclassOf<UEditorUserWidget> WidgetClass);


	/**
	 * Adds a property, shown in the default way to the category
	 *
	 * @param PropertyHandle		The handle to the property to add
	 * @param Location				The location within the category where the property is shown
	 */
	UFUNCTION(BlueprintCallable, Category = "Detail Customization | Category Builder", meta = (DisplayName = "Add Property", Keywords = "add property"))
		static void AddProperty(UPARAM(ref) FDetailCategoryBuilderHandle& CategoryBuilderHandle, FName PropertyPath, EDetailPropertyLocation Location = EDetailPropertyLocation::Default);


	/**
	 * @return The localized display name of the category
	 */
	UFUNCTION(BlueprintPure, Category = "Detail Customization | Category Builder", meta = (DisplayName = "Get Display Name", Keywords = "get name string display category"))
		static FText GetDisplayName(UPARAM(ref) FDetailCategoryBuilderHandle& CategoryBuilderHandle);


};
