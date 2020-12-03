//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "EditorUserDefinedCommands.h"
#include "Framework/Commands/UICommandList.h"
#include "EditorTypesWrapperTypes.h"
#include "EditorUserDefinedActions.h"
#include "EditorEventsSubsystem.h"
#include "MainFrame/Public/Interfaces/IMainFrameModule.h"
#include "LevelEditor.h"
#include "Editor/LevelEditor/Private/SLevelEditor.h"
#include "Modules/ModuleManager.h"
#include "EditorScriptingToolsTypes.h"



#define LOCTEXT_NAMESPACE "EditorUserDefinedCommands"

FEditorUserDefinedCommands::FOnExecuteActionSignature FEditorUserDefinedCommands::OnExecuteActionDelegate;
TSharedPtr< FUICommandList> FEditorUserDefinedCommands::ActionList = nullptr;
TArray<TSharedPtr<FUICommandInfo>> FEditorUserDefinedCommands::Commands;
TWeakObjectPtr<UEditorUserDefinedActions> FEditorUserDefinedCommands::CurrentActionsAsset = nullptr;

void FEditorUserDefinedCommands::RegisterCommands()
{
	UEditorUserDefinedActions* ActionsAsset = GetCurrentActionsAsset();
	const int32 NumActions = ActionsAsset->GetActionsNum();

	TSharedPtr<FUICommandList> LevelEditorActions = nullptr;
	{
		FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
		TWeakPtr<class ILevelEditor> LevelEditorInstanceWeakPtr = LevelEditorModule.GetLevelEditorInstance();
		if (LevelEditorInstanceWeakPtr.IsValid())
		{
			LevelEditorActions = LevelEditorInstanceWeakPtr.Pin()->GetLevelEditorActions();
		}
	}

	if (!LevelEditorActions.IsValid())
	{
		IMainFrameModule& MainFrameModule = IMainFrameModule::Get();
		LevelEditorActions = MainFrameModule.GetMainFrameCommandBindings();
	}

	Commands.SetNumZeroed(NumActions);
	ActionList = MakeShareable(new FUICommandList);

	for (int32 Index = 0; Index < NumActions; ++Index)
	{
		TSharedPtr < FUICommandInfo>& Command = Commands[Index];
		const bool& bRepeatAction = ActionsAsset->RepeatStatesList[Index];
		const FString CommandIdStr = TEXT("Command") + FString::FromInt(Index);
		const FString& CommandNameStr = ActionsAsset->GetDisplayNameTextByIndex(Index).ToString();

		UI_USER_DEFINED_COMMAND(
			Command,
			*CommandIdStr,
			*CommandNameStr,
			"Executes Action By Index.",
			EUserInterfaceActionType::None,
			ActionsAsset->GetActiveChord(EMultipleKeyBindingIndex::Primary, Index),
			ActionsAsset->GetActiveChord(EMultipleKeyBindingIndex::Secondary, Index)
		);

		ActionList->MapAction(
			Command,
			FExecuteAction::CreateStatic(&FEditorUserDefinedCommands::ExecuteAction, Index),
			FCanExecuteAction::CreateStatic(&FEditorUserDefinedCommands::CanExecuteAction, Index),
			bRepeatAction ? EUIActionRepeatMode::RepeatEnabled : EUIActionRepeatMode::RepeatDisabled);
	}

	LevelEditorActions->Append(ActionList.ToSharedRef());

}


bool FEditorUserDefinedCommands::RegisterActions(UEditorUserDefinedActions* InActionsAsset)
{
	if (IsRegistered())
	{
		UnregisterActions(true);
	}

	if (IsValid(InActionsAsset))
	{
		if (InActionsAsset->GetActionsNum() <= 0)
		{
			UE_LOG(LogEditorScriptingTools, Warning, TEXT("Could not map [%s] actions. Make sure actions list is not empty."), *InActionsAsset->GetFName().ToString());
			return false;
		}

		CurrentActionsAsset = InActionsAsset;
		Register();
		CurrentActionsAsset->OnRegisterDone();
		FEditorScriptingToolsDelegates::RefreshEditorScriptingToolsTabDelegate.Broadcast();
	}

	return IsRegistered();
}

bool FEditorUserDefinedCommands::UnregisterActions(bool bClearCachedAsset)
{
	if (ActionList.IsValid())
	{
		for (TSharedPtr<const FUICommandInfo> Action : Commands)
		{
			ActionList->UnmapAction(Action);
			Action.Reset();
		}
		ActionList.Reset();
	}

	Unregister();

	if (UEditorUserDefinedActions* ActionsAsset = GetCurrentActionsAsset())
	{
		ActionsAsset->OnUnregisterDone();
	}

	if (bClearCachedAsset)
	{
		CurrentActionsAsset = nullptr;
	}

	FEditorScriptingToolsDelegates::RefreshEditorScriptingToolsTabDelegate.Broadcast();
	return !IsRegistered();
}

void FEditorUserDefinedCommands::RefreshCurrentMappings()
{
	UnregisterActions(false);
	Register();
}

void FEditorUserDefinedCommands::ExecuteAction(int32 ActionIndex)
{
	UEditorUserDefinedActions* ActionsAsset = GetCurrentActionsAsset();
	if (ActionsAsset == nullptr)
	{
		UnregisterActions(true);
		UE_LOG(LogEditorScriptingTools, Warning, TEXT("Could not execute action [Action Index : %d]. UserDefinedActions asset is invalid."), ActionIndex);
		return;
	}

	if (!Commands.IsValidIndex(ActionIndex))
	{
		UE_LOG(LogEditorScriptingTools, Warning, TEXT("Could not execute action [Action Index : %d]. UserDefinedActions asset is invalid."), ActionIndex);
		return;
	}

	if (const FUIAction* ExecutedAction = ActionList->GetActionForCommand(Commands[ActionIndex]))
	{
		OnExecuteActionDelegate.Broadcast(ActionsAsset, ActionIndex, ExecutedAction->CanRepeat());
	}
}

bool FEditorUserDefinedCommands::CanExecuteAction(int32 ActionIndex)
{
	return CurrentActionsAsset.IsValid() &&
		(GEditor != nullptr) &&
		(GEditor->PlayWorld == nullptr);
}

#undef LOCTEXT_NAMESPACE