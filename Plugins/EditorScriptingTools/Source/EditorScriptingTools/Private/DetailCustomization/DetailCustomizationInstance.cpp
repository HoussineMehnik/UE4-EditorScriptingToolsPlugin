//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "DetailCustomizationInstance.h"

#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "IDetailPropertyRow.h"
#include "Engine/Engine.h"
#include "UnrealEngine.h"
#include "NativeDetailCustomizationInstance.h"
#include "EditorScriptingToolsUtils.h"
#include "Widgets/SWidget.h"
#include "Editor.h"
#include "Editor/EditorEngine.h"
#include "EditorUserWidget.h"



UDetailCustomizationInstance::UDetailCustomizationInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, NativeDetailCustomizationWeakPtr(nullptr)
{
	
}

void UDetailCustomizationInstance::SaveConfigProperties()
{
	SaveConfig();
}

UClass* UDetailCustomizationInstance::GetCustomizedClass()
{
	if (UDetailCustomizationUtilityBlueprint* CustomizationUtilityBlueprint = Cast<UDetailCustomizationUtilityBlueprint>(GetClass()->ClassGeneratedBy))
	{
		return CustomizationUtilityBlueprint->CustomizedClass;
	}
	return nullptr;
}

bool UDetailCustomizationInstance::GetCustomizedObjects(TArray<UObject*>& OutObjects)
{
	if (NativeDetailCustomizationWeakPtr.IsValid())
	{
		return NativeDetailCustomizationWeakPtr.Pin()->GetCustomizedObjects(OutObjects);
	}
	OutObjects.Empty();
	return false;
}

bool UDetailCustomizationInstance::GetCustomizedActors(TArray<AActor*>& OutActors)
{

	if (NativeDetailCustomizationWeakPtr.IsValid())
	{
		return NativeDetailCustomizationWeakPtr.Pin()->GetCustomizedActors(OutActors);
	}
	OutActors.Empty();
	return false;
}

bool UDetailCustomizationInstance::RefreshDetails()
{
	if (NativeDetailCustomizationWeakPtr.IsValid())
	{
		NativeDetailCustomizationWeakPtr.Pin()->RequestRefresh();
		return true;
	}
	return false;
}

bool UDetailCustomizationInstance::HideCategory(FName HiddenCategoryName, bool bCheckIfCategoryExists /*= false*/)
{
	if (NativeDetailCustomizationWeakPtr.IsValid())
	{
		return NativeDetailCustomizationWeakPtr.Pin()->HideCategory(HiddenCategoryName, bCheckIfCategoryExists);
	}
	return false;
}


bool UDetailCustomizationInstance::GetCategoryNames(TArray<FName>& OutNames)
{
	if (NativeDetailCustomizationWeakPtr.IsValid())
	{
		return NativeDetailCustomizationWeakPtr.Pin()->GetCategoryNames(OutNames);
	}
	return false;
}

bool UDetailCustomizationInstance::HideProperty(FName HiddenPropertyName, TSubclassOf<UObject> PropertyOwnerClass)
{
	if (NativeDetailCustomizationWeakPtr.IsValid())
	{
		return NativeDetailCustomizationWeakPtr.Pin()->HideProperty(HiddenPropertyName, PropertyOwnerClass);
	}
	return false;
}

bool UDetailCustomizationInstance::GetEditablePropertyInfosByClass(TArray<FEditablePropertyInfo>& OutInfos, TSubclassOf<UObject> PropertyOwnerClass)
{
	if (NativeDetailCustomizationWeakPtr.IsValid())
	{
		return NativeDetailCustomizationWeakPtr.Pin()->GetEditablePropertyInfos( OutInfos, PropertyOwnerClass);
	}
	return false;
}

bool UDetailCustomizationInstance::GetAllEditablePropertyInfos(TArray<FEditablePropertyInfo>& OutInfos)
{
	if (NativeDetailCustomizationWeakPtr.IsValid())
	{
		return NativeDetailCustomizationWeakPtr.Pin()->GetAllEditablePropertyInfos(OutInfos);
	}
	return false;
}

bool UDetailCustomizationInstance::EditCategory(FDetailCategoryBuilderHandle& OutCategoryBuilderHandle, FName CategoryName, FText DisplayName /*= FText::GetEmpty()*/, EDetailCategoryPriority CategoryType /*= ECustomizationWidgetCategoryPriority::Default*/)
{
	OutCategoryBuilderHandle.Invalidate();
	if (NativeDetailCustomizationWeakPtr.IsValid())
	{
		NativeDetailCustomizationWeakPtr.Pin()->EditCategory(OutCategoryBuilderHandle, CategoryName, DisplayName, CategoryType);
		return OutCategoryBuilderHandle.IsValid();
	}
	return false;
}

TSharedRef<SWidget> UDetailCustomizationInstance::CreatePropertyNameWidget(FName PropertyName, TSubclassOf<UObject> PropertyOwnerClass, FText NameOverride /*= FText::GetEmpty()*/, FText ToolTipOverride /*= FText::GetEmpty()*/, bool bDisplayResetToDefault /*= false*/, bool bDisplayText /*= true*/, bool bDisplayThumbnail /*= true*/)
{
	if (NativeDetailCustomizationWeakPtr.IsValid())
	{
		return NativeDetailCustomizationWeakPtr.Pin()->CreatePropertyNameWidget(PropertyName, PropertyOwnerClass, NameOverride, ToolTipOverride, bDisplayResetToDefault, bDisplayText, bDisplayThumbnail);
	}
	return SNullWidget::NullWidget;
}

TSharedRef<SWidget> UDetailCustomizationInstance::CreatePropertyValueWidget(FName PropertyName, TSubclassOf<UObject> PropertyOwnerClass, bool bDisplayDefaultPropertyButtons /*= true*/)
{
	if (NativeDetailCustomizationWeakPtr.IsValid())
	{
		return NativeDetailCustomizationWeakPtr.Pin()->CreatePropertyValueWidget(PropertyName, PropertyOwnerClass, bDisplayDefaultPropertyButtons);
	}
	return SNullWidget::NullWidget;
}


void UDetailCustomizationInstance::SetCustomizationsWrapper(const TSharedPtr<FNativeDetailCustomizationInstance>& CustomizationsWrapper)
{
	NativeDetailCustomizationWeakPtr = CustomizationsWrapper;
}

void UDetailCustomizationInstance::ClearCustomizationsWrapper()
{
	NativeDetailCustomizationWeakPtr = nullptr;
}

class UWorld* UDetailCustomizationInstance::GetWorld() const
{
	if (GEditor != nullptr)

	{
		if (GEditor->bIsSimulatingInEditor)
		{
			return GEditor->GetPIEWorldContext()->World();
		}
		else
		{
			return GEditor->GetEditorWorldContext().World();
		}
	}

	return nullptr;
}
