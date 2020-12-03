//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "IDetailCustomization.h"

class IDetailLayoutBuilder;
class SWidget;
class SEditorScriptingToolsTab;

class FEditorScriptingToolsSubsystemDetails : public IDetailCustomization
{

public:
	static TSharedRef<IDetailCustomization> MakeDefaultInstance();
	static TSharedRef<IDetailCustomization> MakeInstanceForSettingsTab(TWeakPtr<SEditorScriptingToolsTab> ToolsSettingsTab);

	FEditorScriptingToolsSubsystemDetails();
	virtual ~FEditorScriptingToolsSubsystemDetails();

	// IDetailCustomization interface
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder);
	// End of IDetailCustomization interface

private:
	void CustomizeDetailsForSettingsTab();

	void OnRefresh();
private:
	IDetailLayoutBuilder* CachedDetailBuilder;
	TWeakPtr<SEditorScriptingToolsTab> ToolsSettingsTabWeakPtr;
};