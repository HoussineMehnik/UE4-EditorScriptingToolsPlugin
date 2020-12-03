//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "IDetailCustomization.h"

class UEditorScriptingUtilityBlueprint;

class FEditorScriptingUtilityBlueprintDetails : public IDetailCustomization
{

public:
	/** Makes a new instance of this detail layout class for a specific detail view requesting it */
	static TSharedRef<IDetailCustomization> MakeInstance();

	FEditorScriptingUtilityBlueprintDetails();
	virtual ~FEditorScriptingUtilityBlueprintDetails();

	// IDetailCustomization interface
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder);
	// End of IDetailCustomization interface

private:
	void OnEditorScriptingUtilityRegistered(bool bRegister);
	FReply OnRegisterButton_Clicked(bool bRegister);
	bool IsRegisterButton_Enabled(bool bRegister) const;
	EVisibility GetRegisterButton_Visibility(bool bRegister) const;

protected:
	IDetailLayoutBuilder* CachedDetailBuilder;
	TWeakObjectPtr<UEditorScriptingUtilityBlueprint> EditedScriptingUtilityBlueprintWeakPtr;
};