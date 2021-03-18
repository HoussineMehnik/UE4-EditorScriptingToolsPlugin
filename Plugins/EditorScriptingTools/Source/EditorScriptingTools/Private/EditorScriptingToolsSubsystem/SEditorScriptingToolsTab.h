//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "Widgets/Docking/SDockTab.h"

class SWidget;
class SBox;
class SEditorScriptingToolsSubsystemDetailsPanel;

namespace EEditorScriptingToolsTabRefreshMode
{
	enum Type
	{
		ToolBar = 1 << 0,
		SettingsSection = 1 << 1,

		All = ToolBar | SettingsSection
	};
}


enum class EEditorScriptingToolsSectionType : uint8
{
	BluEdMode = 0,
	ComponentVisualizers,
	DetailCustomizations,
	UserDefinedSettings,
	UserDefinedActions,
	UserDefinedPlacementCategories,
	OtherUtils,
	OtherSettings,


	Num
};

class SEditorScriptingToolsTab : public SDockTab
{

public:

	SLATE_BEGIN_ARGS(SEditorScriptingToolsTab) {}
	SLATE_END_ARGS();

	void Construct(const FArguments& InArgs);
	virtual ~SEditorScriptingToolsTab();

private:
	int32 GetActiveSectionIndex() const;
	int32 GetSectionNum() const;
	int32 GetSectionIndex(EEditorScriptingToolsSectionType InSection) const;
	EEditorScriptingToolsSectionType GetSectionTypeByIndex(int32 InIndex) const;
	FText GetSectionNameText(EEditorScriptingToolsSectionType InSection) const;
	FText GetActiveSectionSettingsText() const;
	FName GetSectionIconName(EEditorScriptingToolsSectionType InSection) const;

	void RefreshContent(EEditorScriptingToolsTabRefreshMode::Type RefreshMode);
	void ClearContent();
	void CreateSettingsDetailsView();
	void OnSettingChanged(const FPropertyChangedEvent& InPropertyChangedEvent);
	void OnRefreshEditorScriptingToolsTab();

	TSharedRef<SWidget> CreateToolBarWidget();
	void OnSectionButton_Clicked(EEditorScriptingToolsSectionType InSection);
	bool IsSectionButton_Selected(EEditorScriptingToolsSectionType InSection) const;

	TSharedRef<SWidget> CreateSettingsSectionWidget();
	TSharedRef<SWidget> CreateSettingsSectionWidget_BluEdMode();
	TSharedRef<SWidget> CreateSettingsSectionWidget_ComponentVisualizers();
	TSharedRef<SWidget> CreateSettingsSectionWidget_DetailCustomizations();
	TSharedRef<SWidget> CreateSettingsSectionWidget_UserDefinedSettings();
	TSharedRef<SWidget> CreateSettingsSectionWidget_UserDefinedActions();
	TSharedRef<SWidget> CreateSettingsSectionWidget_UserDefinedPlacementCategories();
	TSharedRef<SWidget> CreateSettingsSectionWidget_OtherUtils();
	TSharedRef<SWidget> CreateSettingsSectionWidget_OtherSettings();


	TSharedRef<SWidget> CreateSectionHeader(FText InText);
	TSharedRef<SWidget> CreateWarningMessageWidegt(FText InText);


private:
	FSimpleMulticastDelegate SectionChanged{};
	TSharedPtr<SBox> ToolBarWidget;
	TSharedPtr<SBox> SettingsSectionWidget;
	TSharedPtr<SEditorScriptingToolsSubsystemDetailsPanel> ScriptingToolsDetailsView;
	EEditorScriptingToolsSectionType ActiveSection = EEditorScriptingToolsSectionType::BluEdMode;

	friend class FEditorScriptingToolsSubsystemDetails;
	friend class SEditorScriptingToolsSubsystemDetailsPanel;
};