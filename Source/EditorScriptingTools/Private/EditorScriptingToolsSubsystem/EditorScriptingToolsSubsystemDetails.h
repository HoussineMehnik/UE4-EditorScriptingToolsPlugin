//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

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