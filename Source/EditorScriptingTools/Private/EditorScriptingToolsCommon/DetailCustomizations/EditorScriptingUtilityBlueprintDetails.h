//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "IDetailCustomization.h"
#include "Input/Reply.h"
#include "Layout/Visibility.h"

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