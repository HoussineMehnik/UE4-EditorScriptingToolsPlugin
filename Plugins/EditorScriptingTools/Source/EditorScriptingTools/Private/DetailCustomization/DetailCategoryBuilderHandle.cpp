//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "DetailCategoryBuilderHandle.h"
#include "NativeDetailCustomizationInstance.h"
#include "DetailCategoryBuilder.h"
#include "EditorScriptingToolsUtils.h"
#include "EditorUserWidget.h"
#include "DetailCustomizationInstance.h"
#include "DetailWidgetRow.h"
#include "IDetailGroup.h"
#include "DetailCustomizationHelpers.h"
#include "DetailGroupHandle.h"


void FDetailCategoryBuilderHandle::Init(const TSharedPtr<FNativeDetailCustomizationInstance>& InNativeDetailCustomization, IDetailCategoryBuilder& InCategoryBuilder)
{
	NativeDetailCustomizationWeakPtr = InNativeDetailCustomization;
	NativeCategoryBuilderPtr = &InCategoryBuilder;
}

bool FDetailCategoryBuilderHandle::IsValid() const
{
	return NativeDetailCustomizationWeakPtr.IsValid() && NativeCategoryBuilderPtr != nullptr;
}

void FDetailCategoryBuilderHandle::Invalidate()
{
	NativeDetailCustomizationWeakPtr.Reset();
	NativeCategoryBuilderPtr = nullptr;
}

IDetailCategoryBuilder* FDetailCategoryBuilderHandle::GetNativeCategoryBuilder() 
{
	return IsValid() ? NativeCategoryBuilderPtr : nullptr;
}

FNativeDetailCustomizationInstance* FDetailCategoryBuilderHandle::GetNativeDetailCustomizationInstance()
{
	return NativeDetailCustomizationWeakPtr.Pin().Get();
}

void FDetailCategoryBuilderHandle::operator=(const FDetailCategoryBuilderHandle& Other)
{
	if (Other.IsValid())
	{
		NativeDetailCustomizationWeakPtr = Other.NativeDetailCustomizationWeakPtr;
		NativeCategoryBuilderPtr = Other.NativeCategoryBuilderPtr;
	}
	else
	{
		NativeDetailCustomizationWeakPtr.Reset();
		NativeCategoryBuilderPtr = nullptr;
	}
}



bool UDetailCategoryBuilderBlueprintLibrary::IsValid(FDetailCategoryBuilderHandle& CategoryBuilderHandle)
{
	return CategoryBuilderHandle.IsValid();
}

void UDetailCategoryBuilderBlueprintLibrary::SetInitiallyCollapsed(UPARAM(ref) FDetailCategoryBuilderHandle& CategoryBuilderHandle, bool bShouldBeInitiallyCollapsed)
{
	if (IDetailCategoryBuilder* CategoryBuilder = CategoryBuilderHandle.GetNativeCategoryBuilder())
	{
		CategoryBuilder->InitiallyCollapsed(bShouldBeInitiallyCollapsed);
	}
}

UEditorUserWidget* UDetailCategoryBuilderBlueprintLibrary::AddCustomRowWidget(UPARAM(ref) FDetailCategoryBuilderHandle& CategoryBuilderHandle, TSubclassOf<UEditorUserWidget> WidgetClass, FText FilterString, bool bIsAdvanced /*= false*/)
{
	if (IDetailCategoryBuilder* CategoryBuilder = CategoryBuilderHandle.GetNativeCategoryBuilder())
	{
		FNativeDetailCustomizationInstance* CustomizationInstance = CategoryBuilderHandle.GetNativeDetailCustomizationInstance();
		FDetailWidgetRow& DetailWidgetRow = CategoryBuilder->AddCustomRow(FilterString, bIsAdvanced);
		return FDetailCustomizationHelpers::AddDetailWidgetRow(DetailWidgetRow, CustomizationInstance, WidgetClass);
	}
	return nullptr;
}

void UDetailCategoryBuilderBlueprintLibrary::AddCustomRowWidgets(UPARAM(ref) FDetailCategoryBuilderHandle& CategoryBuilderHandle, UEditorUserWidget*& OutNameColumnWidget, UEditorUserWidget*& OutValueColumnWidget, TSubclassOf<UEditorUserWidget> NameColumnWidgetClass, TSubclassOf<UEditorUserWidget> ValueColumnWidgetClass, FText FilterString, bool bIsAdvanced /*= false*/)
{

	if (IDetailCategoryBuilder* CategoryBuilder = CategoryBuilderHandle.GetNativeCategoryBuilder())
	{
		FNativeDetailCustomizationInstance* CustomizationInstance = CategoryBuilderHandle.GetNativeDetailCustomizationInstance();
		FDetailWidgetRow& DetailWidgetRow = CategoryBuilder->AddCustomRow(FilterString, bIsAdvanced);
		FDetailCustomizationHelpers::AddDetailWidgetRowSplitted(DetailWidgetRow, CustomizationInstance, OutNameColumnWidget, OutValueColumnWidget, NameColumnWidgetClass, ValueColumnWidgetClass);
	}
}

UEditorUserWidget* UDetailCategoryBuilderBlueprintLibrary::AddHeaderContent(UPARAM(ref) FDetailCategoryBuilderHandle& CategoryBuilderHandle, TSubclassOf<UEditorUserWidget> WidgetClass)
{
	if (IDetailCategoryBuilder* CategoryBuilder = CategoryBuilderHandle.GetNativeCategoryBuilder())
	{
		if (EditorScriptingToolsUtils::CanInstantiateClass(WidgetClass))
		{
			UDetailCustomizationInstance* CustomizationInstance = CategoryBuilderHandle.GetNativeDetailCustomizationInstance()->GetInstance();
			UEditorUserWidget* HeaderContentWidget = EditorScriptingToolsUtils::CreateTransientEditorWidget<UEditorUserWidget>(CustomizationInstance, WidgetClass);

			if (HeaderContentWidget != nullptr)
			{
				CustomizationInstance->ReferencedObjects.Add(HeaderContentWidget);
				CategoryBuilder->HeaderContent(HeaderContentWidget->TakeWidget());
				return  HeaderContentWidget;
			}
		}
	}
	return nullptr;
}

void UDetailCategoryBuilderBlueprintLibrary::AddProperty(UPARAM(ref) FDetailCategoryBuilderHandle& CategoryBuilderHandle, FName PropertyPath, EDetailPropertyLocation Location /*= EDetailPropertyLocation::Default*/)
{
	if (IDetailCategoryBuilder* CategoryBuilder = CategoryBuilderHandle.GetNativeCategoryBuilder())
	{
		CategoryBuilder->AddProperty(PropertyPath, nullptr, NAME_None, static_cast<EPropertyLocation::Type>(Location));
	}
}

FText UDetailCategoryBuilderBlueprintLibrary::GetDisplayName(UPARAM(ref) FDetailCategoryBuilderHandle& CategoryBuilderHandle)
{
	if (IDetailCategoryBuilder* CategoryBuilder = CategoryBuilderHandle.GetNativeCategoryBuilder())
	{
		return CategoryBuilder->GetDisplayName();
	}
	return FText::GetEmpty();
}

