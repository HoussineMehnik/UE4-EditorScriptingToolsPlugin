//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorScriptingToolsSubsystemDetails.h"
#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "SEditorScriptingToolsTab.h"
#include <EditorScriptingToolsTypes.h>


#define LOCTEXT_NAMESPACE "FEditorScriptingToolsSubsystemDetails"


FEditorScriptingToolsSubsystemDetails::FEditorScriptingToolsSubsystemDetails()
	: CachedDetailBuilder(nullptr)
	, ToolsSettingsTabWeakPtr(nullptr)
{

}

FEditorScriptingToolsSubsystemDetails::~FEditorScriptingToolsSubsystemDetails()
{
	CachedDetailBuilder = nullptr;
	ToolsSettingsTabWeakPtr = nullptr;
}

TSharedRef<IDetailCustomization> FEditorScriptingToolsSubsystemDetails::MakeDefaultInstance()
{
	return MakeShareable(new FEditorScriptingToolsSubsystemDetails);
}

TSharedRef<IDetailCustomization> FEditorScriptingToolsSubsystemDetails::MakeInstanceForSettingsTab(TWeakPtr<SEditorScriptingToolsTab> SettingsToolTab)
{
	TSharedRef<FEditorScriptingToolsSubsystemDetails> Instance = MakeShareable(new FEditorScriptingToolsSubsystemDetails());
	Instance->ToolsSettingsTabWeakPtr = SettingsToolTab;
	return Instance;
}

void FEditorScriptingToolsSubsystemDetails::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	CachedDetailBuilder = &DetailBuilder;
	
	if (ToolsSettingsTabWeakPtr.IsValid())
	{
		CustomizeDetailsForSettingsTab();
	}
	
}

void FEditorScriptingToolsSubsystemDetails::CustomizeDetailsForSettingsTab()
{
	SEditorScriptingToolsTab* ToolsSettingsTab = ToolsSettingsTabWeakPtr.Pin().Get();

	ToolsSettingsTab->SectionChanged.AddSP(this, &FEditorScriptingToolsSubsystemDetails::OnRefresh);

	const EEditorScriptingToolsSectionType ActiveSection = ToolsSettingsTab->ActiveSection;

	if (ActiveSection != EEditorScriptingToolsSectionType::BluEdMode)
	{
		CachedDetailBuilder->HideCategory("EditorMode");
	}

	if (ActiveSection != EEditorScriptingToolsSectionType::ComponentVisualizers)
	{
		CachedDetailBuilder->HideCategory("ComponentVisualizers");
	}

	if (ActiveSection != EEditorScriptingToolsSectionType::DetailCustomizations)
	{
		CachedDetailBuilder->HideCategory("DetailCustomizations");
	}

	if (ActiveSection != EEditorScriptingToolsSectionType::UserDefinedSettings)
	{
		CachedDetailBuilder->HideCategory("UserDefinedSettings");
	}

	if (ActiveSection != EEditorScriptingToolsSectionType::UserDefinedActions)
	{
		CachedDetailBuilder->HideCategory("UserDefinedActions");
	}

	if (ActiveSection != EEditorScriptingToolsSectionType::UserDefinedPlacementCategories)
	{
		CachedDetailBuilder->HideCategory("UserDefinedPlacementCategories");
	}

	if (ActiveSection != EEditorScriptingToolsSectionType::OtherSettings)
	{
		CachedDetailBuilder->HideCategory("General");
	}

	

}

void FEditorScriptingToolsSubsystemDetails::OnRefresh()
{
	if (CachedDetailBuilder != nullptr)
	{
		if (ToolsSettingsTabWeakPtr.IsValid())
		{
			ToolsSettingsTabWeakPtr.Pin()->SectionChanged.RemoveAll(this);
		}
		CachedDetailBuilder->ForceRefreshDetails();
		CachedDetailBuilder = nullptr;
	}
}

#undef LOCTEXT_NAMESPACE
