//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "AssetPickerWidget/AssetPickerWidget.h"

#include "EditorTypesWrapperTypes.h"
#include "BluEdModeTypes.h"

#include "PropertyCustomizationHelpers.h"

#include "Framework/Application/SlateApplication.h"
#include "Components/Widget.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Widgets/Notifications/SErrorText.h"
#include "Styling/SlateIconFinder.h"


#define LOCTEXT_NAMESPACE "AssetPickerWidget"


UAssetPickerWidget::UAssetPickerWidget()
	: AllowedClass(nullptr)
	, bAllowClear(true)
	, bOpenSubMenuOnClick(false)
	, MenuLabelText(LOCTEXT("PickAsset", "Pick Asset"))
	, MenuToolTipText(LOCTEXT("PickAssetTooltip", "Pick Asset."))
	, CurrentAssetPtr(nullptr)
{

}


void UAssetPickerWidget::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	RebuildWidget();
}


void UAssetPickerWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	SlateAssetPickerWidget.Reset();
}

TSharedRef<SWidget> UAssetPickerWidget::RebuildWidget()
{

	FMenuBuilder MenuBuilder(true, nullptr);
	MenuBuilder.AddSubMenu(
		MenuLabelText,
		MenuToolTipText,
		FNewMenuDelegate::CreateUObject(this, &UAssetPickerWidget::OpenAssetPickerMenu),
		bOpenSubMenuOnClick,
		FSlateIconFinder::FindIconForClass(AllowedClass));

	SlateAssetPickerWidget = MenuBuilder.MakeWidget();

	return  SlateAssetPickerWidget.ToSharedRef();
}


void UAssetPickerWidget::OpenAssetPickerMenu(FMenuBuilder& MenuBuilder)
{

	if (AllowedClass && !AllowedClass->HasAnyClassFlags(CLASS_Abstract))
	{
		TArray<const UClass*> AllowedClasses;
		AllowedClasses.Add(AllowedClass);

		TSharedRef<SWidget> AssetPickerWidget = PropertyCustomizationHelpers::MakeAssetPickerWithMenu(FAssetData(CurrentAssetPtr.Get()),
			bAllowClear,
			AllowedClasses,
			PropertyCustomizationHelpers::GetNewAssetFactoriesForClasses(AllowedClasses),
			FOnShouldFilterAsset(),
			FOnAssetSelected::CreateUObject(this, &UAssetPickerWidget::OnNewAssetSelected),
			FSimpleDelegate::CreateUObject(this, &UAssetPickerWidget::CloseMenu));


		MenuBuilder.AddWidget(AssetPickerWidget, FText::GetEmpty(), /*bNoIndent=*/ true);
	}
	else
	{
		MenuBuilder.AddWidget(
			SNew(SErrorText)
			.ErrorText(LOCTEXT("AllowedClass_Error", "Innvalid Allowed Class")),
			FText::GetEmpty());
	}
}


void UAssetPickerWidget::OnNewAssetSelected(const FAssetData& AssetData)
{
	OnAssetSelected.Broadcast(AssetData.GetAsset());
}


void UAssetPickerWidget::CloseMenu()
{
	FSlateApplication::Get().DismissAllMenus();
}


void UAssetPickerWidget::SetCurrentAsset(UObject* InAsset)
{
	CurrentAssetPtr = InAsset;
}

UObject* UAssetPickerWidget::GetCurrentAsset() const
{
	return CurrentAssetPtr.Get();
}


#undef LOCTEXT_NAMESPACE