//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorScriptingToolsModule.h"

#include "EditorScriptingToolsSubsystem.h"


#include "EditorScriptingToolsSubsystemDetails.h"
#include "EditorScriptingUtilityBlueprintDetails.h"

#include "PropertyEditorModule.h"
#include "PropertyEditorDelegates.h"
#include "UserDefinedPlacementCategoryInfoCustomization.h"
#include "EditorScriptingUtilityBlueprint.h"
#include "DetailCustomizationUtilityBlueprint.h"
#include "NativeDetailCustomizationInstance.h"



#define LOCTEXT_NAMESPACE "EditorScriptingToolsModule_CustomClassLayouts"


void FEditorScriptingToolsModule::RegisterCustomClassLayouts()
{
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.RegisterCustomClassLayout(UEditorScriptingToolsSubsystem::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FEditorScriptingToolsSubsystemDetails::MakeDefaultInstance));
	PropertyModule.RegisterCustomClassLayout(UEditorScriptingUtilityBlueprint::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FEditorScriptingUtilityBlueprintDetails::MakeInstance));
	//PropertyModule.RegisterCustomPropertyTypeLayout(FUserDefinedPlacementCategoryInfo::StaticStruct()->GetFName(), FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FUserDefinedPlacementCategoryInfoCustomization::MakeInstance));

	UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
	for (auto& CustomizationBlueprintPtr : ScriptingToolsSubsystem->DetailCustomizationUtilityBlueprints)
	{
		if (UDetailCustomizationUtilityBlueprint* CustomizationBlueprint = CustomizationBlueprintPtr.LoadSynchronous())
		{
			RegisterCustomClassLayout(&PropertyModule, CustomizationBlueprint);
		}
	}

	PropertyModule.NotifyCustomizationModuleChanged();
}


void FEditorScriptingToolsModule::UnregisterCustomClassLayouts()
{
	if (FPropertyEditorModule* PropertyModule = FModuleManager::GetModulePtr<FPropertyEditorModule>("PropertyEditor"))
	{
		PropertyModule->UnregisterCustomClassLayout(UEditorScriptingToolsSubsystem::StaticClass()->GetFName());
		PropertyModule->UnregisterCustomClassLayout(UEditorScriptingUtilityBlueprint::StaticClass()->GetFName());
		//PropertyModule->UnregisterCustomPropertyTypeLayout(FUserDefinedPlacementCategoryInfo::StaticStruct()->GetFName());

		for (const auto& Elem : RegisteredCustomDetailLayouts)
		{
			UnregisterCustomClassLayout(PropertyModule, Elem.Key.Get(), false);
		}
		RegisteredCustomDetailLayouts.Reset();
	}
}

void FEditorScriptingToolsModule::RegisterDetailCustomizationUtilityBlueprint(UDetailCustomizationUtilityBlueprint* DetailCustomizationBlueprint)
{
	if (!IsDetailCustomizationUtilityBlueprintRegistered(DetailCustomizationBlueprint))
	{
		check(DetailCustomizationBlueprint->CustomizedClass);
		UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
		if (!ScriptingToolsSubsystem->DetailCustomizationUtilityBlueprints.Contains(DetailCustomizationBlueprint))
		{
			ScriptingToolsSubsystem->DetailCustomizationUtilityBlueprints.Add(DetailCustomizationBlueprint);
			ScriptingToolsSubsystem->NotifySettingsModified();
		}
		FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
		RegisterCustomClassLayout(&PropertyModule, DetailCustomizationBlueprint);
		DetailCustomizationBlueprint->OnUnregisterDone();
		PropertyModule.NotifyCustomizationModuleChanged();
	}
}

void FEditorScriptingToolsModule::RefreshDetailCustomizationUtilityBlueprint(UDetailCustomizationUtilityBlueprint* DetailCustomizationBlueprint)
{
	check(IsDetailCustomizationUtilityBlueprintRegistered(DetailCustomizationBlueprint));
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	UnregisterCustomClassLayout(&PropertyModule, DetailCustomizationBlueprint, true);
	DetailCustomizationBlueprint->OnUnregisterDone();
	RegisterCustomClassLayout(&PropertyModule, DetailCustomizationBlueprint);
	DetailCustomizationBlueprint->OnUnregisterDone();
	PropertyModule.NotifyCustomizationModuleChanged();
}

void FEditorScriptingToolsModule::UnregisterDetailCustomizationUtilityBlueprint(UDetailCustomizationUtilityBlueprint* DetailCustomizationBlueprint)
{
	if (IsDetailCustomizationUtilityBlueprintRegistered(DetailCustomizationBlueprint))
	{
		UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
		{
			ScriptingToolsSubsystem->DetailCustomizationUtilityBlueprints.Remove(DetailCustomizationBlueprint);
			ScriptingToolsSubsystem->NotifySettingsModified();
		}
		FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
		UnregisterCustomClassLayout(&PropertyModule, DetailCustomizationBlueprint, true);
		DetailCustomizationBlueprint->OnUnregisterDone();
		PropertyModule.NotifyCustomizationModuleChanged();
	}
}

bool FEditorScriptingToolsModule::CanRegisterCustomClassLayoutClass(UClass* CustomizedClass) const
{
	check(CustomizedClass != nullptr);
	const FCustomizedClassInfo CustomizedClassInfo{ CustomizedClass, CustomizedClass->GetFName() };
	const FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");

	return
		RegisteredCustomDetailLayouts.FindKey(CustomizedClassInfo) == nullptr &&
		!PropertyModule.GetClassNameToDetailLayoutNameMap().Contains(CustomizedClass->GetFName());
}

bool FEditorScriptingToolsModule::CanRegisterDetailCustomizationUtilityBlueprint(const UDetailCustomizationUtilityBlueprint* DetailCustomizationBlueprint) const
{
	if (UClass* CustomizedClass = DetailCustomizationBlueprint->CustomizedClass)
	{
		return CanRegisterCustomClassLayoutClass(CustomizedClass);
	}
	return false;
}

bool FEditorScriptingToolsModule::IsDetailCustomizationUtilityBlueprintRegistered(const UDetailCustomizationUtilityBlueprint* DetailCustomizationBlueprint) const
{
	for (const auto& Elem : RegisteredCustomDetailLayouts)
	{
		if (Elem.Key.Get() == DetailCustomizationBlueprint)
		{
			return true;
		}
	}
	return false;
}

void FEditorScriptingToolsModule::RegisterCustomClassLayout(FPropertyEditorModule* PropertyModule, UDetailCustomizationUtilityBlueprint* DetailCustomizationBlueprint)
{
	const FCustomizedClassInfo CustomizedClassInfo{ DetailCustomizationBlueprint->CustomizedClass, DetailCustomizationBlueprint->CustomizedClass->GetFName() };
	PropertyModule->RegisterCustomClassLayout(CustomizedClassInfo.ClassName, FOnGetDetailCustomizationInstance::CreateStatic(&FNativeDetailCustomizationInstance::MakeCustomizationInstance, DetailCustomizationBlueprint));
	RegisteredCustomDetailLayouts.Add(DetailCustomizationBlueprint, CustomizedClassInfo);
}

void FEditorScriptingToolsModule::UnregisterCustomClassLayout(FPropertyEditorModule* PropertyModule, UDetailCustomizationUtilityBlueprint* DetailCustomizationBlueprint, bool bRemoveFromRegisterList)
{
	const auto* Value = RegisteredCustomDetailLayouts.Find(DetailCustomizationBlueprint);
	if (Value != nullptr)
	{
		const FCustomizedClassInfo& CustomizedClassInfo = *Value;
		if (PropertyModule != nullptr)
		{
			PropertyModule->UnregisterCustomClassLayout(CustomizedClassInfo.ClassName);
		}

		if (bRemoveFromRegisterList)
		{
			RegisteredCustomDetailLayouts.Remove(DetailCustomizationBlueprint);
		}
	}
}

void FEditorScriptingToolsModule::UnregisterInvalidClassesLayouts()
{
	TArray<TWeakObjectPtr<UDetailCustomizationUtilityBlueprint>> LayoutsToUnregister;
	for (auto& Elem : RegisteredCustomDetailLayouts)
	{
		if (!Elem.Key->CustomizedClass || !Elem.Value.Class)
		{
			LayoutsToUnregister.Add(Elem.Key);
		}
	}

	if (LayoutsToUnregister.Num() == 0)
	{
		return;
	}

	for (auto& CustomizationBlueprintPtr : LayoutsToUnregister)
	{
		if (UDetailCustomizationUtilityBlueprint* DetailCustomizationBlueprint = CustomizationBlueprintPtr.Get())
		{
			UnregisterDetailCustomizationUtilityBlueprint(DetailCustomizationBlueprint);
		}
	}
}

#undef LOCTEXT_NAMESPACE	