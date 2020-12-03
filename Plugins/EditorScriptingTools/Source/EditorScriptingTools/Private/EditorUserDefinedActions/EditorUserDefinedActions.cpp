//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "EditorUserDefinedActions.h"
#include "EditorUserDefinedCommands.h"
#include "EditorScriptingToolsTypes.h"
#include "IEditorScriptingToolsModule.h"



#define LOCTEXT_NAMESPACE "EditorUserDefinedActions"

const FInputChord UEditorUserDefinedActions::DefaultChord = FInputChord(EKeys::Invalid);


UEditorUserDefinedActions::UEditorUserDefinedActions()
{

}

void UEditorUserDefinedActions::OnRegisterDone()
{
	OnEditorUserDefinedActionsRegisteredDelegate.Broadcast(true);
}

void UEditorUserDefinedActions::OnUnregisterDone()
{
	OnEditorUserDefinedActionsRegisteredDelegate.Broadcast(false);
}

FName UEditorUserDefinedActions::GetUtilitySettingsCategoryName() const
{
	return NAME_None;
}

void UEditorUserDefinedActions::GetUneditablePropertiesWhenRegistered(TArray<FName>& OutProperties) const
{
	OutProperties.Empty();
}

FInputChord* UEditorUserDefinedActions::GetChordPtrFromInputChord(const FInputChord& InChord)
{
	for (FInputChord& Chord : DefaultChordList)
	{
		if (Chord == InChord)
		{
			return &Chord;
		}
	}

	for (FInputChord& Chord : AlternateChordList)
	{
		if (Chord == InChord)
		{
			return &Chord;
		}
	}

	return nullptr;
}

int32 UEditorUserDefinedActions::GetChordIndexFromInputChord(const FInputChord& InChord)
{
	const int32 NumDefaultChords = DefaultChordList.Num();
	check(AlternateChordList.Num() == NumDefaultChords);

	for (int32 Index = 0; Index < NumDefaultChords; Index++)
	{
		if (DefaultChordList[Index] == InChord)
		{
			return Index;
		}
	}

	for (int32 Index = 0; Index < NumDefaultChords; Index++)
	{
		if (AlternateChordList[Index] == InChord)
		{
			return Index;
		}
	}

	return INDEX_NONE;
}

int32 UEditorUserDefinedActions::GetActionsNum() const
{
	const int32 NumActions = DefaultChordList.Num();
	check( AlternateChordList.Num() == NumActions);
	return NumActions;
}

FInputChord& UEditorUserDefinedActions::GetActiveChord(const EMultipleKeyBindingIndex InChordIndex, int32 InInputChord)
{
	if (InChordIndex == EMultipleKeyBindingIndex::Primary)
	{
		return DefaultChordList[InInputChord];
	}
	return AlternateChordList[InInputChord];
}

const FInputChord& UEditorUserDefinedActions::GetActiveChord(const EMultipleKeyBindingIndex InChordIndex, int32 InInputChord) const
{
	if (InChordIndex == EMultipleKeyBindingIndex::Primary)
	{
		return DefaultChordList[InInputChord];
	}
	return AlternateChordList[InInputChord];
}

const bool& UEditorUserDefinedActions::IsActionRepeated(int32 InInputChord) const
{
	return RepeatStatesList[InInputChord];
}

FInputChord UEditorUserDefinedActions::GetDefaultChord(const EMultipleKeyBindingIndex InChordIndex, int32 InInputChord) const
{
	return DefaultChord;
}

void UEditorUserDefinedActions::RemoveActiveChord(const EMultipleKeyBindingIndex InChordIndex, int32 InInputChord)
{
	if (InChordIndex == EMultipleKeyBindingIndex::Primary)
	{
		DefaultChordList[InInputChord] = FInputChord();
	}
	else if (InChordIndex == EMultipleKeyBindingIndex::Secondary)
	{
		AlternateChordList[InInputChord] = FInputChord();
	}
}

void UEditorUserDefinedActions::SetActiveChord(const FInputChord& NewChord, const EMultipleKeyBindingIndex InChordIndex, int32 InInputChord)
{
	if (InChordIndex == EMultipleKeyBindingIndex::Primary)
	{
		DefaultChordList[InInputChord] = NewChord;
	}
	else if (InChordIndex == EMultipleKeyBindingIndex::Secondary)
	{
		AlternateChordList[InInputChord] = NewChord;
	}
}

FUserDefinedEditorActionInputChords UEditorUserDefinedActions::GetActionInputChords(uint8 ActionAsByte)
{
	const int32 ActionIndex = static_cast<int32>(ActionAsByte);
	const FInputChord DefaultInputChord = DefaultChordList.IsValidIndex(ActionIndex) ? DefaultChordList[ActionIndex] : DefaultChord;
	const FInputChord AlternateInputChord = AlternateChordList.IsValidIndex(ActionIndex) ? AlternateChordList[ActionIndex] : DefaultChord;

	return FUserDefinedEditorActionInputChords(DefaultInputChord, AlternateInputChord);
}


#undef LOCTEXT_NAMESPACE