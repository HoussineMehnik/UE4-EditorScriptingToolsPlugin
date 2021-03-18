//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "SPropertiesBrowser.h"
#include "EditorFontGlyphs.h"
#include "ClassViewerFilter.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SBox.h"
#include "Kismet2/SClassPickerDialog.h"
#include "HAL/PlatformApplicationMisc.h"
#include "IPropertyTypeCustomization.h"

#define LOCTEXT_NAMESPACE "SPropertiesBrowser"


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FObjectClassFilter


class FObjectClassFilter : public IClassViewerFilter
{
public:
	virtual bool IsClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const UClass* InClass, TSharedRef< FClassViewerFilterFuncs > InFilterFuncs) override
	{
		if (InClass != nullptr && !InClass->HasAnyClassFlags(CLASS_Abstract))
		{
			return InClass->IsChildOf(UObject::StaticClass());
		}
		return false;
	}

	virtual bool IsUnloadedClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const TSharedRef< const IUnloadedBlueprintData > InUnloadedClassData, TSharedRef< FClassViewerFilterFuncs > InFilterFuncs) override
	{
		return InUnloadedClassData->IsChildOf(UObject::StaticClass());
	}
};



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// SPropertiesBrowser


void SPropertiesBrowser::Construct(const FArguments& InArgs)
{
	ChildSlot
		[
			SNew(SBox)
			.MinDesiredWidth(480)
			.MaxDesiredWidth(480)
			.Padding(FMargin(4.f, 1.f, 8.f, 1.f))
			[
				SNew(SVerticalBox)
				+SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.Padding(1)
					.HAlign(HAlign_Fill)
					[
						SNew(SBorder)
						.BorderImage(FEditorStyle::GetBrush("ExpandableButton.Background"))
						.VAlign(VAlign_Center)
						.ForegroundColor(FCoreStyle::Get().GetSlateColor("InvertedForeground"))
						.BorderBackgroundColor(FLinearColor::Black)
						[
							SNew(SBox)
							.Padding(FMargin(4.f, 1.f, 1.f, 0.f))
							[
								SNew(STextBlock)
								.Text(this, &SPropertiesBrowser::GetClassName)
								.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
							]
						]
					]
					+SHorizontalBox::Slot()
					.Padding(1)
					.AutoWidth()
					[
						SNew(SButton)
						.ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
						.OnClicked(this, &SPropertiesBrowser::OpenClassPickerDialog)
						.VAlign(VAlign_Center)
						.ToolTipText(LOCTEXT("PickObject", "Pick Object"))
						[
							SNew(STextBlock)
							.ColorAndOpacity(FLinearColor(0.65f, 0.4f, 0.15f, 1.0f))
							.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
							.Font(FEditorStyle::Get().GetFontStyle("FontAwesome.10"))
							.Text(FEditorFontGlyphs::List)
						]
					]
					+ SHorizontalBox::Slot()
					.Padding(4.0f)
					.VAlign(VAlign_Center)
					.Padding(1.0f, 0.0f, 9.0f, 0.0f)
					[
						SAssignNew(PropertyListContainer, SBox)
					]
					
				]
			]
		];
}
//
FText SPropertiesBrowser::GetClassName() const
{
	return ObjectClass ? ObjectClass->GetDisplayNameText() : FText::FromString("Select a class");
}

FReply SPropertiesBrowser::OpenClassPickerDialog()
{
	FClassViewerInitializationOptions Options;
	Options.Mode = EClassViewerMode::ClassPicker;
	Options.InitiallySelectedClass = ObjectClass;
	Options.DisplayMode = EClassViewerDisplayMode::ListView;
	Options.bShowNoneOption = true;

	TSharedPtr<FObjectClassFilter> Filter = MakeShareable(new FObjectClassFilter);
	Options.ClassFilter = Filter;

	const FText TitleText = LOCTEXT("PickBluEdModeUserWidgetClass", "Pick Ed Mode Widget Blueprint Class");
	UClass* ChosenClass = nullptr;
	const bool bPressedOk = SClassPickerDialog::PickClass(TitleText, Options, ChosenClass, UObject::StaticClass());


	if (bPressedOk)
	{
		ObjectClass = ChosenClass;
		FillPropertiesNamesList();
		return FReply::Handled();
	}

	return FReply::Unhandled();
}

FReply SPropertiesBrowser::ClipboardCopy()
{
	if (SelectedPropertyName.IsValid())
	{
		FPlatformApplicationMisc::ClipboardCopy(**SelectedPropertyName.Pin().Get());
		return FReply::Handled();
	}

	return FReply::Unhandled();
}

TSharedRef<SWidget> SPropertiesBrowser::OnGenerateComboWidget(TSharedPtr<FString> InName)
{
	return
		SNew(SBox)
		[
			SNew(STextBlock)
			.Text(FText::FromString(*InName.Get()))
			.Font(IPropertyTypeCustomizationUtils::GetRegularFont())
		];
}

void SPropertiesBrowser::OnComboSelectionChanged(TSharedPtr<FString> InSelectedItem, ESelectInfo::Type SelectInfo)
{
	SelectedPropertyName = InSelectedItem;
}

FText SPropertiesBrowser::GetPropertyName() const
{
	if (SelectedPropertyName.IsValid())
	{
		return FText::FromString(*SelectedPropertyName.Pin().Get());
	}

	return LOCTEXT("InvalidPropertyName", "InValid Property Name");
}

void SPropertiesBrowser::FillPropertiesNamesList()
{
	PropertiesNames.Empty();
	if (ObjectClass != nullptr)
	{
		for (TFieldIterator<FProperty> PropertyIt(ObjectClass); PropertyIt; ++PropertyIt)
		{
			if (FProperty* Property = *PropertyIt)
			{
				if (Property->GetOwnerClass() == ObjectClass)
				{
					if (Property->HasAnyPropertyFlags(CPF_Edit))
					{
						PropertiesNames.Add(MakeShareable(new FString(Property->GetNameCPP())));
					}
				}
			}
		}
	}

	if (PropertiesNames.Num() > 0)
	{
		PropertiesNames.Sort([](const TSharedPtr<FString>& A, const TSharedPtr<FString>& B) {
			return *A < *B; });

		SelectedPropertyName = PropertiesNames[0];

		PropertyListContainer->SetContent(
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			[
				SNew(SComboBox<TSharedPtr<FString>>)
				.OptionsSource(&PropertiesNames)
				.OnGenerateWidget(this, &SPropertiesBrowser::OnGenerateComboWidget)
				.OnSelectionChanged(this, &SPropertiesBrowser::OnComboSelectionChanged)
				.InitiallySelectedItem(SelectedPropertyName.Pin())
				[
					SNew(STextBlock)
					.Text(this, &SPropertiesBrowser::GetPropertyName)
					.Font(IPropertyTypeCustomizationUtils::GetRegularFont())
				]
			]
			+SHorizontalBox::Slot()
			.Padding(1)
			.AutoWidth()
			.HAlign(HAlign_Right)
			[
				SNew(SButton)
				.ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
				.OnClicked(this, &SPropertiesBrowser::ClipboardCopy)
				.VAlign(VAlign_Center)
				.ToolTipText(LOCTEXT("ClipboardCopy", "Copy To Clipboard"))
				[
					SNew(STextBlock)
					.ColorAndOpacity(FLinearColor(0.65f, 0.4f, 0.15f, 1.0f))
					.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
					.Font(FEditorStyle::Get().GetFontStyle("FontAwesome.10"))
					.Text(FEditorFontGlyphs::Clipboard)
				]
			]
		);
	}
	else
	{
		PropertyListContainer->SetContent(SNew(STextBlock).Text(FText::FromString("No Property Found")));
	}
}


#undef LOCTEXT_NAMESPACE 