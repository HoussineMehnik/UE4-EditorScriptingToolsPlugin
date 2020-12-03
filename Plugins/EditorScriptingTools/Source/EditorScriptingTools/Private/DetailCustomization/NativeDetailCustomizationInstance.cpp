//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "NativeDetailCustomizationInstance.h"

//~
#include "GameFramework/WorldSettings.h"
#include "NavMesh/RecastNavMesh.h"
//-

#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "IDetailPropertyRow.h"
#include "Engine/Engine.h"
#include "UnrealEngine.h"
#include "Editor.h"
#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"
#include "PropertyHandle.h"

#include "EditorUserWidget.h"
#include "DetailCustomizationInstance.h"
#include "EditorScriptingToolsUtils.h"

#include "GameFramework/Actor.h"
#include "NativeDetailCustomizationInstancesManager.h"
#include "DetailCategoryBuilderHandle.h"
#include "DetailCustomizationUtilityBlueprint.h"


#define LOCTEXT_NAMESPACE "NativeDetailCustomizationInstance"


TSharedRef<IDetailCustomization> FNativeDetailCustomizationInstance::MakeCustomizationInstance(UDetailCustomizationUtilityBlueprint* InDetailsBlueprint)
{
	TSharedRef< FNativeDetailCustomizationInstance> NewCustomizationInstance = MakeShareable(new FNativeDetailCustomizationInstance(InDetailsBlueprint));
	return NewCustomizationInstance;
}

FNativeDetailCustomizationInstance::FNativeDetailCustomizationInstance(UDetailCustomizationUtilityBlueprint* InDetailsBlueprintWeakPtr)
	: DetailBuilderWeakPtr(nullptr)
	, ActiveCategoryBuilder(nullptr)
	, DetailsInstancePtr(nullptr)
	, DetailsBlueprintPtr(InDetailsBlueprintWeakPtr)
	, bAddedBinding(false)
{

}

PRAGMA_DISABLE_OPTIMIZATION
FNativeDetailCustomizationInstance::~FNativeDetailCustomizationInstance()
{
	ClearCacheIfNeeded();
}
PRAGMA_ENABLE_OPTIMIZATION

void FNativeDetailCustomizationInstance::CustomizeDetails(const TSharedPtr<IDetailLayoutBuilder>& DetailBuilder)
{
	DetailBuilderWeakPtr = DetailBuilder;
	bool bCustomizeDetails = true;

	//@HACK
	/*{
		TArray<TWeakObjectPtr<UObject>> WeakObjectsBeingCustomized;
		DetailBuilder->GetObjectsBeingCustomized(WeakObjectsBeingCustomized);

		for (const auto& ObjectPtr : WeakObjectsBeingCustomized)
		{
			if (UObject* Object = ObjectPtr.Get())
			{
				if (Object->IsA(ARecastNavMesh::StaticClass()) || Object->IsA(AWorldSettings::StaticClass()))
				{
					bCustomizeDetails = false;
					break;
				}
			}
		}
	}*/


	if (bCustomizeDetails)
	{
		if (!DetailsBlueprintPtr.IsValid() || !DetailBuilder.IsValid())
		{
			bCustomizeDetails = false;
		}
		else if (!AllowDefaultObjectCustomization() && DetailBuilder.IsValid() && DetailBuilder->HasClassDefaultObject())
		{
			bCustomizeDetails = false;
		}
		else
		{
			CreateDetailsInstance();
		}
	}


	if (bCustomizeDetails)
	{
		check(DetailsInstancePtr.IsValid());
	}
	else
	{
		ClearCacheIfNeeded();
		return;
	}


	AddBinding();
	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			DetailsInstancePtr->SetCustomizationsWrapper(SharedThis(this));
	}
	CustomizeDetails(*DetailBuilder);
}

void FNativeDetailCustomizationInstance::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	TArray<TWeakObjectPtr<UObject>> WeakObjectsBeingCustomized;
	DetailBuilder.GetObjectsBeingCustomized(WeakObjectsBeingCustomized);
	TArray<UObject*> ObjectsBeingCustomized;
	for (const auto& ObjectPtr : WeakObjectsBeingCustomized)
	{
		if (UObject * Object = ObjectPtr.Get())
		{
			ObjectsBeingCustomized.Add(Object);
		}
	}

	{
		EDITOR_SCRIPT_EXECUTION_GUARD
			DetailsInstancePtr->OnCustomizeDetails(ObjectsBeingCustomized);
	}
}

void FNativeDetailCustomizationInstance::RequestRefresh()
{
	FNativeDetailCustomizationInstancesManager::Get()->AddToLayoutsToRefresh(SharedThis(this));
}

void FNativeDetailCustomizationInstance::AddBinding()
{
	if (!bAddedBinding)
	{
		if (IDetailLayoutBuilder* DetailBuilder = GetDetailBuilder())
		{
			if (const IDetailsView* DetailsViewPtr = DetailBuilder->GetDetailsView())
			{
				DetailsViewPtr->OnFinishedChangingProperties().AddSP(this, &FNativeDetailCustomizationInstance::OnFinishedChangingProperties);
			}
		}

		if (GEditor)
		{
			GEditor->OnBlueprintReinstanced().AddSP(this, &FNativeDetailCustomizationInstance::HandleAnyBlueprintReinstanced);
		}

		bAddedBinding = true;
	}
}

void FNativeDetailCustomizationInstance::RemoveBinding()
{
	if (bAddedBinding)
	{
		bAddedBinding = false;
	}
}

void FNativeDetailCustomizationInstance::CreateDetailsInstance()
{
	DestroyDetailsInstanceIfNeeded();

	if (UDetailCustomizationUtilityBlueprint* DetailCustomizationBlueprint = DetailsBlueprintPtr.Get())
	{
		const UClass* CustomizationInstanceClass = DetailCustomizationBlueprint->GeneratedClass;
		check(CustomizationInstanceClass);
		DetailsInstancePtr = TWeakObjectPtr<UDetailCustomizationInstance>(EditorScriptingToolsUtils::CreateTransientEditorObject<UDetailCustomizationInstance>(GetTransientPackage(), CustomizationInstanceClass));
		DetailsInstancePtr->AddToRoot();
	}
}

void FNativeDetailCustomizationInstance::DestroyDetailsInstanceIfNeeded()
{
	if (DetailsInstancePtr.IsValid())
	{
		if (DetailsInstancePtr.IsValid())
		{
			EDITOR_SCRIPT_EXECUTION_GUARD
				DetailsInstancePtr->OnCustomizeDetailsEnd();
		}

		DetailsInstancePtr->Rename(nullptr, GetTransientPackage());
		DetailsInstancePtr->RemoveFromRoot();
		DetailsInstancePtr->MarkPendingKill();
		DetailsInstancePtr = nullptr;
	}
}

void FNativeDetailCustomizationInstance::ClearCacheIfNeeded()
{
	RemoveBinding();
	DestroyDetailsInstanceIfNeeded();
	ActiveCategoryBuilder = nullptr;
	DetailBuilderWeakPtr = nullptr;
}

bool FNativeDetailCustomizationInstance::AllowDefaultObjectCustomization() const
{
	check(DetailsBlueprintPtr.IsValid());
	return DetailsBlueprintPtr->bAllowDefaultObjectCustomization;
}

bool FNativeDetailCustomizationInstance::IsValidPropertyOwnerClass(const UClass* InClass) const
{
	const UClass* CustomizedClass = GetCustomizedClass();

	return
		InClass != nullptr &&
		CustomizedClass != nullptr &&
		CustomizedClass->IsChildOf(InClass);
}

void FNativeDetailCustomizationInstance::OnFinishedChangingProperties(const FPropertyChangedEvent& PropertyChangedEvent)
{
	if (DetailsInstancePtr.IsValid())
	{
		const FProperty* Property = PropertyChangedEvent.Property;
		const FProperty* MemberProperty = PropertyChangedEvent.MemberProperty;

		const FName PropertyName = (Property != nullptr) ? Property->GetFName() : NAME_None;
		const FName MemberPropertyName = (MemberProperty != nullptr) ? MemberProperty->GetFName() : NAME_None;
		const EDetailsViewPropertyChangeType::Type ChangeType = static_cast<EDetailsViewPropertyChangeType::Type>(PropertyChangedEvent.ChangeType);

		// Call Once
		DetailsInstancePtr->OnChangingPropertyFinished(PropertyName, MemberPropertyName, ChangeType);
	}
}

void FNativeDetailCustomizationInstance::HandleAnyBlueprintReinstanced()
{
	ForceRefreshDetails();
}

const UClass* FNativeDetailCustomizationInstance::GetCustomizedClass() const
{
	if (UDetailCustomizationUtilityBlueprint* DetailCustomizationBlueprint = DetailsBlueprintPtr.Get())
	{
		return DetailCustomizationBlueprint->CustomizedClass;
	}
	return nullptr;
}

IDetailLayoutBuilder* FNativeDetailCustomizationInstance::GetDetailBuilder() 
{
	if (DetailBuilderWeakPtr.IsValid())
	{
		return DetailBuilderWeakPtr.Pin().Get();
	}
	return nullptr;
}


IDetailCategoryBuilder* FNativeDetailCustomizationInstance::GetActiveCategoryBuilder() 
{
	return IsEditingCategory() ? ActiveCategoryBuilder : nullptr;
}

UDetailCustomizationInstance* FNativeDetailCustomizationInstance::GetInstance() 
{
	return DetailsInstancePtr.Get();
}

bool FNativeDetailCustomizationInstance::GetCustomizedObjects(TArray<UObject*>& OutObjects)
{
	OutObjects.Empty();

	if (IDetailLayoutBuilder* DetailBuilder = GetDetailBuilder())
	{
		TArray<TWeakObjectPtr<UObject>> WeakObjectsBeingCustomized;
		DetailBuilder->GetObjectsBeingCustomized(WeakObjectsBeingCustomized);
		for (const auto& ObjectPtr : WeakObjectsBeingCustomized)
		{
			if (UObject * Object = ObjectPtr.Get())
			{
				OutObjects.Add(Object);
			}
		}
	}

	return OutObjects.Num() > 0;
}

bool FNativeDetailCustomizationInstance::GetCustomizedActors(TArray<AActor*>& OutActors)
{
	OutActors.Empty();

	if (IDetailLayoutBuilder * DetailBuilder = GetDetailBuilder())
	{
		TArray<TWeakObjectPtr<UObject>> WeakObjectsBeingCustomized;
		DetailBuilder->GetObjectsBeingCustomized(WeakObjectsBeingCustomized);
		for (const auto& ObjectPtr : WeakObjectsBeingCustomized)
		{
			if (AActor * Actor = Cast<AActor>(ObjectPtr.Get()))
			{
				OutActors.Add(Actor);
			}
		}
	}

	return OutActors.Num() > 0;
}

bool FNativeDetailCustomizationInstance::ForceRefreshDetails()
{
	if (IDetailLayoutBuilder* DetailBuilder = GetDetailBuilder())
	{
		DetailBuilder->ForceRefreshDetails();
		return true;
	}
	else if (FPropertyEditorModule* PropertyModule = FModuleManager::GetModulePtr<FPropertyEditorModule>("PropertyEditor"))
	{
		PropertyModule->NotifyCustomizationModuleChanged();
		return true;
	}

	return false;
}

bool FNativeDetailCustomizationInstance::HideCategory(const FName& HiddenCategoryName, bool bCheckIfCategoryExists)
{
	if (IDetailLayoutBuilder* DetailBuilder = GetDetailBuilder())
	{
		TArray<FName> CategoryNames;
		if (bCheckIfCategoryExists)
		{
			DetailBuilder->GetCategoryNames(CategoryNames);
		}

		if (!bCheckIfCategoryExists || CategoryNames.Contains(HiddenCategoryName))
		{
			DetailBuilder->HideCategory(HiddenCategoryName);
			return true;
		}
	}
	return false;
}

bool FNativeDetailCustomizationInstance::HideProperty(const FName& HiddenPropertyName, TSubclassOf<UObject> PropertyOwnerClass)
{
	if (const UClass* OwnerClass = *PropertyOwnerClass)
	{
		if (IDetailLayoutBuilder* DetailBuilder = GetDetailBuilder())
		{
			TSharedRef<IPropertyHandle> PropertyHandle = DetailBuilder->GetProperty(HiddenPropertyName, OwnerClass);
			if (PropertyHandle->IsValidHandle())
			{
				PropertyHandle->MarkHiddenByCustomization();
				return true;
			}
		}
	}
	return false;
}

bool FNativeDetailCustomizationInstance::IsEditingCategory() const
{
	return DetailBuilderWeakPtr.IsValid() && ActiveCategoryBuilder != nullptr;
}

void FNativeDetailCustomizationInstance::EditCategory(FDetailCategoryBuilderHandle& OutCategoryBuilderHandle, const FName& CategoryName, const FText& NewLocalizedDisplayName, EDetailCategoryPriority CategoryType)
{
	if (IDetailLayoutBuilder* DetailBuilder = GetDetailBuilder())
	{
		IDetailCategoryBuilder& CategoryBuilder = DetailBuilder->EditCategory(CategoryName, NewLocalizedDisplayName, static_cast<ECategoryPriority::Type>(CategoryType));
		OutCategoryBuilderHandle.Init(SharedThis(this), CategoryBuilder);
	}
}

TSharedRef<SWidget> FNativeDetailCustomizationInstance::CreatePropertyNameWidget(const FName& PropertyName, TSubclassOf<UObject> PropertyOwnerClass, const FText& NameOverride, const FText& ToolTipOverride, bool bDisplayResetToDefault , bool bDisplayText, bool bDisplayThumbnail)
{
	if (IsValidPropertyOwnerClass(*PropertyOwnerClass))
	{
		if (IDetailLayoutBuilder* DetailBuilder = GetDetailBuilder())
		{
			TSharedRef<IPropertyHandle> PropertyHandle = DetailBuilder->GetProperty(PropertyName, *PropertyOwnerClass);
			if (PropertyHandle->IsValidHandle())
			{
				return PropertyHandle->CreatePropertyNameWidget(NameOverride, ToolTipOverride, bDisplayResetToDefault, bDisplayText, bDisplayThumbnail);
			}
		}
	}

	return FPropertyWidgetHelpers::UnknownPropertyWidget;
}

TSharedRef<SWidget> FNativeDetailCustomizationInstance::CreatePropertyValueWidget(const FName& PropertyName, TSubclassOf<UObject> PropertyOwnerClass, bool bDisplayDefaultPropertyButtons)
{
	if (IsValidPropertyOwnerClass(*PropertyOwnerClass))
	{
		if (IDetailLayoutBuilder* DetailBuilder = GetDetailBuilder())
		{
			TSharedRef<IPropertyHandle> PropertyHandle = DetailBuilder->GetProperty(PropertyName, *PropertyOwnerClass);
			if (PropertyHandle->IsValidHandle())
			{
				return PropertyHandle->CreatePropertyValueWidget(bDisplayDefaultPropertyButtons);
			}
		}
	}
	return FPropertyWidgetHelpers::UnknownPropertyWidget;
}

bool FNativeDetailCustomizationInstance::GetCategoryNames(TArray<FName>& OutNames)
{
	OutNames.Empty();
	if (IDetailLayoutBuilder* DetailBuilder = GetDetailBuilder())
	{
		DetailBuilder->GetCategoryNames(OutNames);
		return true;
	}
	return false;
}

bool FNativeDetailCustomizationInstance::GetAllEditablePropertyInfos(TArray<FEditablePropertyInfo>& OutInfos)
{
	OutInfos.Empty();

	if (const UClass* CustomizedClass = GetCustomizedClass())
	{
		if (IDetailLayoutBuilder* DetailBuilder = GetDetailBuilder())
		{
			FEditablePropertyInfo TempPropertyInfo{};
			for (TFieldIterator<FProperty> PropertyIt(CustomizedClass); PropertyIt; ++PropertyIt)
			{
				if (FProperty* Property = *PropertyIt)
				{
					if (Property->HasAnyPropertyFlags(CPF_Edit))
					{
						TempPropertyInfo.PropertyOwnerClass = Property->GetOwnerClass();
						TempPropertyInfo.PropertyPath = Property->GetPathName();
						TempPropertyInfo.PropertyName = *Property->GetNameCPP();
						OutInfos.Add(TempPropertyInfo);
					}
				}
			}
		}
	}
	return OutInfos.Num() > 0;
}

bool FNativeDetailCustomizationInstance::GetEditablePropertyInfos(TArray<FEditablePropertyInfo>& OutInfos, TSubclassOf<UObject> PropertyOwnerClass)
{
	OutInfos.Empty();

	if (IsValidPropertyOwnerClass(*PropertyOwnerClass))
	{
		if (const UClass* CustomizedClass = GetCustomizedClass())
		{
			if (IDetailLayoutBuilder* DetailBuilder = GetDetailBuilder())
			{
				FEditablePropertyInfo TempPropertyInfo{};
				for (TFieldIterator<FProperty> PropertyIt(CustomizedClass); PropertyIt; ++PropertyIt)
				{
					if (FProperty* Property = *PropertyIt)
					{
						if (Property->HasAnyPropertyFlags(CPF_Edit))
						{
							if (Property->GetOwnerClass() == PropertyOwnerClass)
							{
								TempPropertyInfo.PropertyOwnerClass = Property->GetOwnerClass();
								TempPropertyInfo.PropertyPath = Property->GetPathName();
								TempPropertyInfo.PropertyName = *Property->GetNameCPP();
								OutInfos.Add(TempPropertyInfo);
							}
						}
					}
				}
			}
		}
	}
	return OutInfos.Num() > 0;
}

#undef LOCTEXT_NAMESPACE 
