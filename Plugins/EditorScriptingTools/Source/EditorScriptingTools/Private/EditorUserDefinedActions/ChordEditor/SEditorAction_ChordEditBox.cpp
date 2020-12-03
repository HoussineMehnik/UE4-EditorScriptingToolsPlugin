//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "SEditorAction_ChordEditBox.h"
#include "SlateOptMacros.h"
#include "Widgets/SBoxPanel.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SMenuAnchor.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Input/SButton.h"
#include "EditorStyleSet.h"
#include "SEditorAction_ChordEditor.h"
#include "Widgets/Layout/SBox.h"
#include "EditorUserDefinedActions.h"


#define LOCTEXT_NAMESPACE "SEditorAction_ChordEditBox"


/* SEditorAction_ChordEditBox interface
 *****************************************************************************/

void SEditorAction_ChordEditBox::Construct(const FArguments& InArgs, UEditorUserDefinedActions* ActionsEnum, int32 CommandIndex, EMultipleKeyBindingIndex ChordIndex)
{
	BorderImageNormal = FEditorStyle::GetBrush( "EditableTextBox.Background.Normal" );
	BorderImageHovered = FEditorStyle::GetBrush( "EditableTextBox.Background.Hovered" );
	BorderImageFocused = FEditorStyle::GetBrush( "EditableTextBox.Background.Focused" );

	static const FName InvertedForegroundName("InvertedForeground");

	ChildSlot
	[
		SAssignNew( ConflictPopup, SMenuAnchor )
		.Placement(MenuPlacement_ComboBox)
		.OnGetMenuContent( this, &SEditorAction_ChordEditBox::OnGetContentForConflictPopup )
		.OnMenuOpenChanged(this, &SEditorAction_ChordEditBox::OnConflictPopupOpenChanged)
		[
			SNew( SBox )
			.WidthOverride( 200.0f )
			[
				SNew( SBorder )
				.VAlign(VAlign_Center)
				.Padding( FMargin( 4.0f, 2.0f ) )
				.BorderImage( this, &SEditorAction_ChordEditBox::GetBorderImage )
				.ForegroundColor( FEditorStyle::GetSlateColor(InvertedForegroundName) )
				[
					SNew( SHorizontalBox )
					+ SHorizontalBox::Slot()
					.FillWidth(1)
					.VAlign(VAlign_Center)
					[
						SAssignNew( ChordEditor, SEditorAction_ChordEditor, ActionsEnum,CommandIndex, ChordIndex )
						.OnEditBoxLostFocus( this, &SEditorAction_ChordEditBox::OnChordEditorLostFocus )
						.OnChordChanged( this, &SEditorAction_ChordEditBox::OnChordChanged )
						.OnEditingStarted( this, &SEditorAction_ChordEditBox::OnChordEditingStarted )
						.OnEditingStopped( this, &SEditorAction_ChordEditBox::OnChordEditingStopped )
					]
					+ SHorizontalBox::Slot()
					.AutoWidth()
					.HAlign(HAlign_Right)
					.VAlign(VAlign_Center)
					[
						// Remove binding button
						SNew(SButton)
						.Visibility( this, &SEditorAction_ChordEditBox::GetChordRemoveButtonVisibility )
						.ButtonStyle( FEditorStyle::Get(), "NoBorder" )
						.ContentPadding(0)
						.OnClicked( this, &SEditorAction_ChordEditBox::OnChordRemoveButtonClicked )
						.ForegroundColor( FSlateColor::UseForeground() )
						.IsFocusable(false)
						.ToolTipText(LOCTEXT("ChordEditButtonRemove_ToolTip", "Remove this binding") )
						[
							SNew( SImage )
							.Image( FEditorStyle::GetBrush( "Symbols.X" ) )
							.ColorAndOpacity( FLinearColor(.7f,0,0,.75f) )
						]
					]
				]
			]
		]
	];
}


const FSlateBrush* SEditorAction_ChordEditBox::GetBorderImage() const
{
	if ( ChordEditor->HasKeyboardFocus() )
	{
		return BorderImageFocused;
	}
	else
	{
		if ( ChordEditor->IsHovered() )
		{
			return BorderImageHovered;
		}
		else
		{
			return BorderImageNormal;
		}
	}
}


FText SEditorAction_ChordEditBox::GetNotificationMessage() const
{
	return ChordEditor->GetNotificationText();
}


void SEditorAction_ChordEditBox::OnChordEditorLostFocus()
{
	if( (!ChordAcceptButton.IsValid() || ChordAcceptButton->HasMouseCapture() == false) && !ChordEditor->IsTyping() )
	{
		if( ChordEditor->IsEditing() && ChordEditor->IsEditedChordValid() && !ChordEditor->HasConflict() )
		{
			ChordEditor->CommitNewChord();
		}

		ChordEditor->StopEditing();
	}
}


void SEditorAction_ChordEditBox::OnChordEditingStarted()
{
	ConflictPopup->SetIsOpen(false);
}


void SEditorAction_ChordEditBox::OnChordEditingStopped()
{
	if( ChordEditor->IsEditedChordValid() && !ChordEditor->HasConflict() )
	{
		ChordEditor->CommitNewChord();
	}
}


void SEditorAction_ChordEditBox::OnChordChanged()
{
	if( ChordEditor->HasConflict() )
	{
		ConflictPopup->SetIsOpen(true, true);
	}
	else
	{
		ConflictPopup->SetIsOpen(false);

		if (ChordEditor->IsEditedChordValid())
		{
			ChordEditor->CommitNewChord();
			ChordEditor->StopEditing();
			FSlateApplication::Get().ClearKeyboardFocus(EFocusCause::SetDirectly);
		}
	}
}

EVisibility SEditorAction_ChordEditBox::GetChordRemoveButtonVisibility() const
{
	if( !ChordEditor->IsEditing() && ChordEditor->IsActiveChordValid() )
	{
		// Chord should display a button.  What the button does is defined by the two cases above
		return EVisibility::Visible;
	}
	else
	{
		// Nothing to remove, but still take up the space
		return EVisibility::Hidden;
	}
}


FReply SEditorAction_ChordEditBox::OnChordRemoveButtonClicked()
{
	if( !ChordEditor->IsEditing() )
	{
		ChordEditor->RemoveActiveChord();
	}

	return FReply::Handled();
}


FReply SEditorAction_ChordEditBox::OnAcceptNewChordButtonClicked()
{
	if( ChordEditor->IsEditing() )
	{
		ChordEditor->CommitNewChord();
		ChordEditor->StopEditing();
		
	}

	ConflictPopup->SetIsOpen(false);

	return FReply::Handled();
}


TSharedRef<SWidget> SEditorAction_ChordEditBox::OnGetContentForConflictPopup()
{
	return SNew(SBorder)
		.BorderImage( FEditorStyle::GetBrush("NotificationList.ItemBackground")  )
		[
			SNew( SVerticalBox )

			+ SVerticalBox::Slot()
				.VAlign(VAlign_Center)
				.Padding( 2.0f, 0.0f )
				.AutoHeight()
				[
					SNew( STextBlock )
						.WrapTextAt(200.0f)
						.ColorAndOpacity( FLinearColor( .75f, 0.0f, 0.0f, 1.0f ) )
						.Text( this, &SEditorAction_ChordEditBox::GetNotificationMessage )
						.Visibility( this, &SEditorAction_ChordEditBox::GetNotificationVisibility )
				]

			+ SVerticalBox::Slot()
				.Padding( 2.0f )
				.VAlign(VAlign_Center)
				.HAlign(HAlign_Right)
				.AutoHeight()
				[
					SAssignNew( ChordAcceptButton, SButton )
						.ContentPadding(1)
						.ToolTipText( LOCTEXT("ChordAcceptButton_ToolTip", "Accept this new binding") )
						.OnClicked( this, &SEditorAction_ChordEditBox::OnAcceptNewChordButtonClicked )
						[
							SNew( SHorizontalBox )

							+ SHorizontalBox::Slot()
								.AutoWidth()
								[
									SNew( SImage )
										.Image( FEditorStyle::GetBrush( "Symbols.Check" ) )
										.ColorAndOpacity( FLinearColor(0,.7f,0,.75f) )
								]

							+ SHorizontalBox::Slot()
								.AutoWidth()
								.Padding(2.0f,0.0f)
								[
									SNew( STextBlock )
										.Text( LOCTEXT("ChordAcceptButtonText_Override", "Override") )
								]
						]
				]
		];
}

void SEditorAction_ChordEditBox::OnConflictPopupOpenChanged(bool bIsOpen)
{
	if(!bIsOpen)
	{
		ChordEditor->StopEditing();
	}
}

EVisibility SEditorAction_ChordEditBox::GetNotificationVisibility() const
{
	return !ChordEditor->GetNotificationText().IsEmpty() ? EVisibility::Visible : EVisibility::Collapsed;
}


FReply SEditorAction_ChordEditBox::OnMouseButtonDown( const FGeometry& MyGeometry, const FPointerEvent& InMouseEvent )
{
	// This is a passthrough if the chord edit box gets a mouse click in the button area and the button isn't visible. 
	// we should focus the lower level editing widget in this case
	if ( InMouseEvent.GetEffectingButton() == EKeys::LeftMouseButton )
	{
		if( !ChordEditor->IsEditing() )
		{
			ChordEditor->StartEditing();
		}
		return FReply::Handled().SetUserFocus(ChordEditor.ToSharedRef(), EFocusCause::Mouse);
	}

	return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE
