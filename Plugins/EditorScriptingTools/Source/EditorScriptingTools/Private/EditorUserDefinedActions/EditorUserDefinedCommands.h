//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "EditorStyleSet.h"
#include "Framework/Commands/Commands.h"
#include "EditorTypesWrapperTypes.h"

class UEditorUserDefinedActions;

class FEditorUserDefinedCommands : public TCommands<FEditorUserDefinedCommands>
{

public:
	FEditorUserDefinedCommands() : TCommands<FEditorUserDefinedCommands>(
			"EditorUserDefinedCommands", // Context name for fast lookup
			NSLOCTEXT("Contexts", "EditorUserDefinedCommands", "Editor User Defined Actions"), // Localized context name for displaying
			NAME_None, // Parent
			FEditorStyle::GetStyleSetName()) // Icon Style Set
	{}

	virtual void RegisterCommands() override;


	static bool RegisterActions(UEditorUserDefinedActions* InActionsAsset);
	static bool UnregisterActions(bool bClearCachedAsset);
	static void RefreshCurrentMappings();
	

	static TSharedPtr<FUICommandList>& GetActionList() { return ActionList; }
	static TArray<TSharedPtr<FUICommandInfo>>& GetUICommandInfoLIst() { return Commands; }
	static UEditorUserDefinedActions* GetCurrentActionsAsset() { return CurrentActionsAsset.Get(); }
	static bool IsEditorUserDefinedActionsRegistered(const UEditorUserDefinedActions* ActionsAsset) { return ActionsAsset == CurrentActionsAsset.Get(); }
public:
	DECLARE_MULTICAST_DELEGATE_ThreeParams(FOnExecuteActionSignature, UEditorUserDefinedActions*/* ActionsAsset*/, int32/* ActionIndex*/,bool/* bIsRepeated*/);
	static FOnExecuteActionSignature OnExecuteActionDelegate;


private:
	static void ExecuteAction(int32 ActionIndex);
	static bool CanExecuteAction(int32 ActionIndex);

private:

	static TSharedPtr< FUICommandList> ActionList;
	static TArray<TSharedPtr<FUICommandInfo>> Commands;
	static TWeakObjectPtr<UEditorUserDefinedActions> CurrentActionsAsset;

};
