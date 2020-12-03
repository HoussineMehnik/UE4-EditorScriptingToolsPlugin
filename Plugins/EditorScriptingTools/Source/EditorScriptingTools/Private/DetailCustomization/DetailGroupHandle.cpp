//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "DetailGroupHandle.h"
#include "NativeDetailCustomizationInstance.h"
#include "DetailCategoryBuilder.h"
#include "EditorScriptingToolsUtils.h"
#include "EditorUserWidget.h"
#include "DetailCustomizationInstance.h"
#include "DetailWidgetRow.h"
#include "IDetailGroup.h"
#include "DetailCustomizationHelpers.h"




void FDetailGroupHandle::Init(const FDetailCategoryBuilderHandle& InCategoryBuilderHandle, IDetailGroup& InDetailGroup)
{
	DetailCategoryBuilderHandle = InCategoryBuilderHandle;
	NativeDetailGroupPtr = &InDetailGroup;
}

bool FDetailGroupHandle::IsValid() const
{
	return DetailCategoryBuilderHandle.IsValid() && NativeDetailGroupPtr != nullptr;
}

void FDetailGroupHandle::Invalidate()
{
	DetailCategoryBuilderHandle.Invalidate();
	NativeDetailGroupPtr = nullptr;
}

FDetailCategoryBuilderHandle& FDetailGroupHandle::GetCategoryBuilderHandle()
{
	return DetailCategoryBuilderHandle;
}

IDetailGroup* FDetailGroupHandle::GetNativDetailGroup()
{
	return IsValid() ? NativeDetailGroupPtr : nullptr;
}

void FDetailGroupHandle::operator=(const FDetailGroupHandle& Other)
{
	if (Other.IsValid())
	{
		DetailCategoryBuilderHandle = Other.DetailCategoryBuilderHandle;
		NativeDetailGroupPtr = Other.NativeDetailGroupPtr;
	}
	else
	{
		DetailCategoryBuilderHandle.Invalidate();
		NativeDetailGroupPtr = nullptr;
	}
}

bool UDetailGroupBlueprintLibrary::IsValid(UPARAM(ref) FDetailGroupHandle& DetailGroupHandle)
{
	return DetailGroupHandle.IsValid();
}

void UDetailGroupBlueprintLibrary::AddGroup(UPARAM(ref) FDetailCategoryBuilderHandle& CategoryBuilderHandle, FDetailGroupHandle& OutDetailGroupHandle, FName InGroupName, FText InDisplayName, bool bIsAdvanced /*= false*/, bool bStartExpanded /*= false*/)
{
	OutDetailGroupHandle.Invalidate();

	if (IDetailCategoryBuilder* CategoryBuilder = CategoryBuilderHandle.GetNativeCategoryBuilder())
	{
		IDetailGroup& NewGroup = CategoryBuilder->AddGroup(InGroupName, InDisplayName, bIsAdvanced, bStartExpanded);
		OutDetailGroupHandle.Init(CategoryBuilderHandle, NewGroup);
	}
}

UEditorUserWidget* UDetailGroupBlueprintLibrary::HeaderRow(UPARAM(ref) FDetailGroupHandle& DetailGroupHandle, TSubclassOf<UEditorUserWidget> WidgetClass)
{
	if (IDetailGroup* DetailGroup = DetailGroupHandle.GetNativDetailGroup())
	{
		FNativeDetailCustomizationInstance* CustomizationInstance = DetailGroupHandle.GetCategoryBuilderHandle().GetNativeDetailCustomizationInstance();
		FDetailWidgetRow& DetailWidgetRow = DetailGroup->HeaderRow();
		return FDetailCustomizationHelpers::AddDetailWidgetRow(DetailWidgetRow, CustomizationInstance, WidgetClass);
	}
	return nullptr;
}

UEditorUserWidget* UDetailGroupBlueprintLibrary::AddWidgetRow(UPARAM(ref) FDetailGroupHandle& DetailGroupHandle, TSubclassOf<UEditorUserWidget> WidgetClass)
{
	if (IDetailGroup* DetailGroup = DetailGroupHandle.GetNativDetailGroup())
	{
		FNativeDetailCustomizationInstance* CustomizationInstance = DetailGroupHandle.GetCategoryBuilderHandle().GetNativeDetailCustomizationInstance();
		FDetailWidgetRow& DetailWidgetRow = DetailGroup->AddWidgetRow();
		return FDetailCustomizationHelpers::AddDetailWidgetRow(DetailWidgetRow, CustomizationInstance, WidgetClass);
	}
	return nullptr;
}

