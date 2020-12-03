//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "SEditorAction_ChordEditor.h"
#include "Styling/CoreStyle.h"
#include "Framework/Commands/InputBindingManager.h"
#include "Widgets/Text/SlateEditableTextLayout.h"
#include "EditorUserDefinedActions.h"

#define LOCTEXT_NAMESPACE "SEditorAction_ChordEditor"


/* SEditorAction_ChordEditor interface
 *****************************************************************************/

void SEditorAction_ChordEditor::Construct(const FArguments& InArgs, UEditorUserDefinedActions* InActionsEnum, int32 InCommandIndex, EMultipleKeyBindingIndex InChordIndex)
{
	bIsEditing = false;

	ActionsEnum = InActionsEnum;
	CommandIndex = InCommandIndex;
	ChordIndex = InChordIndex;
	OnEditBoxLostFocus = InArgs._OnEditBoxLostFocus;
	OnChordChanged = InArgs._OnChordChanged;
	OnEditingStopped = InArgs._OnEditingStopped;
	OnEditingStarted = InArgs._OnEditingStarted;

	SEditableText::Construct( 
		SEditableText::FArguments() 
		.Text( this, &SEditorAction_ChordEditor::OnGetChordInputText )
		.HintText( this, &SEditorAction_ChordEditor::OnGetChordInputHintText )
		.Font( FCoreStyle::GetDefaultFontStyle("Regular", 9) )
	);

	EditableTextLayout->LoadText();
}


TWeakPtr<SEditorAction_ChordEditor> SEditorAction_ChordEditor::ChordBeingEdited;


FReply SEditorAction_ChordEditor::OnKeyDown( const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent )
{
	const FKey Key = InKeyEvent.GetKey();

	if( bIsEditing ) 
	{

		TGuardValue<bool> TypingGuard( bIsTyping, true );

		if( !EKeys::IsModifierKey(Key) )
		{
			EditingInputChord.Key = Key;
		}
	
		EditableTextLayout->BeginEditTransation();

		EditingInputChord.bCtrl = InKeyEvent.IsControlDown();
		EditingInputChord.bAlt = InKeyEvent.IsAltDown();
		EditingInputChord.bShift = InKeyEvent.IsShiftDown();
		EditingInputChord.bCmd = InKeyEvent.IsCommandDown();

		EditableTextLayout->LoadText();
		EditableTextLayout->GoTo(ETextLocation::EndOfDocument);

		EditableTextLayout->EndEditTransaction();
		
		OnChordTyped( EditingInputChord );
		
		return FReply::Handled();
	}

	return FReply::Unhandled();
}


FReply SEditorAction_ChordEditor::OnKeyUp( const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent )
{
	return FReply::Unhandled();
}


FReply SEditorAction_ChordEditor::OnKeyChar( const FGeometry& MyGeometry, const FCharacterEvent& InCharacterEvent )
{
	return FReply::Unhandled();
}


FReply SEditorAction_ChordEditor::OnMouseButtonDown( const FGeometry& MyGeometry, const FPointerEvent& InMouseEvent )
{
	if ( InMouseEvent.GetEffectingButton() == EKeys::LeftMouseButton && !bIsEditing )
	{
		StartEditing();
		return FReply::Handled().SetUserFocus(AsShared(), EFocusCause::Mouse);
	}

	return FReply::Unhandled();
}


FReply SEditorAction_ChordEditor::OnMouseButtonDoubleClick( const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent )
{
	return FReply::Handled();
}


void SEditorAction_ChordEditor::OnFocusLost( const FFocusEvent& InFocusEvent )
{
	SEditableText::OnFocusLost(InFocusEvent);
	// Notify a listener that we lost focus so they can determine if we should still be in edit mode
	OnEditBoxLostFocus.ExecuteIfBound();
}


FText SEditorAction_ChordEditor::OnGetChordInputText() const
{
	if( bIsEditing )
	{
		return EditingInputChord.GetInputText();
	}
	else if( ActionsEnum->GetActiveChord(ChordIndex, CommandIndex).IsValidChord() )
	{
		return ActionsEnum->GetActiveChord(ChordIndex, CommandIndex).GetInputText();
	}
	else
	{
		return FText::GetEmpty();
	}
}


FText SEditorAction_ChordEditor::OnGetChordInputHintText() const
{
	const FInputChord& ActiveChord = ActionsEnum->GetActiveChord(ChordIndex, CommandIndex);
	
	if( !bIsEditing || !ActionsEnum->GetDefaultChord(ChordIndex, CommandIndex).IsValidChord() )
	{
		return LOCTEXT("NewBindingHelpText_NoCurrentBinding", "Type a new binding");

	}
	else if( bIsEditing )
	{
		FFormatNamedArguments Args;
		Args.Add( TEXT("InputCommandBinding"), ActionsEnum->GetDefaultChord(ChordIndex, CommandIndex).GetInputText() );
		return FText::Format( LOCTEXT("NewBindingHelpText_CurrentBinding", "Default: {InputCommandBinding}"), Args );
	}
	
	return FText::GetEmpty();
}


void SEditorAction_ChordEditor::CommitNewChord()
{
	if( EditingInputChord.IsValidChord() )
	{
		OnChordCommitted( EditingInputChord);
	}
}


void SEditorAction_ChordEditor::RemoveActiveChord()
{
	ActionsEnum->RemoveActiveChord(ChordIndex, CommandIndex);
}


void SEditorAction_ChordEditor::StartEditing()
{
	if( ChordBeingEdited.IsValid()  )
	{
		ChordBeingEdited.Pin()->StopEditing();
	}

	ChordBeingEdited = SharedThis( this );

	NotificationMessage = FText::GetEmpty();
	EditingInputChord = FInputChord( EKeys::Invalid, EModifierKey::None );
	bIsEditing = true;

	OnEditingStarted.ExecuteIfBound();
}


void SEditorAction_ChordEditor::StopEditing()
{
	if( ChordBeingEdited.IsValid() && ChordBeingEdited.Pin().Get() == this )
	{
		ChordBeingEdited.Reset();
	}

	OnEditingStopped.ExecuteIfBound();

	bIsEditing = false;

	EditingInputChord = FInputChord( EKeys::Invalid, EModifierKey::None );
	NotificationMessage = FText::GetEmpty();
}


void SEditorAction_ChordEditor::OnChordTyped( const FInputChord& NewChord )
{
	// Check to see if a valid sequence was entered
	if( NewChord.IsValidChord() )
	{
		const int32 FoundIndex = ActionsEnum->GetChordIndexFromInputChord(NewChord);

		if (FoundIndex != INDEX_NONE)
		{
			// Chord already exists
			NotificationMessage = FText::Format( LOCTEXT("KeyAlreadyBound", "{0} is already bound to {1}"), NewChord.GetInputText(), ActionsEnum->GetDisplayNameTextByIndex(FoundIndex));
		}
		else
		{

			NotificationMessage = FText::GetEmpty();
		}
	}

	OnChordChanged.ExecuteIfBound();
}


void SEditorAction_ChordEditor::OnChordCommitted( const FInputChord& NewChord)
{
	// This delegate is only called on valid chords
	check( NewChord.IsValidChord() );

	{
		 FInputChord* FoundDesc = ActionsEnum->GetChordPtrFromInputChord(NewChord);
		 if (FoundDesc != nullptr)
		 {
			 if (*FoundDesc == NewChord)
			 {
				 *FoundDesc = FInputChord();
			 }
		 }

		// Set the new chord on the command being edited
		ActionsEnum->SetActiveChord( NewChord, ChordIndex, CommandIndex);
	}
}


#undef LOCTEXT_NAMESPACE
