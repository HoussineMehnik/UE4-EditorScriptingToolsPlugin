//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#pragma once

#include "CoreMinimal.h"
#include "Input/Reply.h"
#include "Layout/Visibility.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SWidget.h"
#include "Widgets/SCompoundWidget.h"
#include "Framework/Commands/UICommandInfo.h"

class SButton;
class SEditorAction_ChordEditor;
class SMenuAnchor;
struct FSlateBrush;
class UEditorUserDefinedActions;

/**
 * A widget that adds visuals to an SEditorAction_ChordEditor
 */
class SEditorAction_ChordEditBox
	: public SCompoundWidget
{
public:

	SLATE_BEGIN_ARGS( SEditorAction_ChordEditBox ){}
	SLATE_END_ARGS()
public:

	/**
	 * Constructs the widget.
	 *
	 * @param InArgs The Slate argument list.
	 */
	void Construct( const FArguments& InArgs,UEditorUserDefinedActions* ActionsEnum,int32 CommandIndex, EMultipleKeyBindingIndex ChordIndex );
private:

	/** @return Border image for the text box based on the hovered and focused state */
	const FSlateBrush* GetBorderImage() const;

	FText GetNotificationMessage() const;

	/** Called when the chord editor loses focus */
	void OnChordEditorLostFocus();

	/** Called when editing starts in the chord editor */
	void OnChordEditingStarted();

	/** Called when editing stops in the chord editor */
	void OnChordEditingStopped();

	/** Called when the edited chord changes */
	void OnChordChanged();

	/** @return the visibility of the chord edit button */
	EVisibility GetChordRemoveButtonVisibility() const;

	/** Called when the chord edit button is clicked */
	FReply OnChordRemoveButtonClicked();

	/** Called when the accept button is clicked.  */
	FReply OnAcceptNewChordButtonClicked();

	/** @return content to be shown in the key binding conflict pop-up */
	TSharedRef<SWidget> OnGetContentForConflictPopup();

	/** Called when conflict popup opens or closes */
	void OnConflictPopupOpenChanged(bool bIsOpen);

	/** @return The visibility of the duplicate binding notification area */
	EVisibility GetNotificationVisibility() const; 
	virtual FReply OnMouseButtonDown( const FGeometry& MyGeometry, const FPointerEvent& InMouseEvent );

private:

	/** The chord editor for this box */
	TSharedPtr<class SEditorAction_ChordEditor> ChordEditor;
	
	/** Menu anchor where the conflict pop-up is shown */
	TSharedPtr<SMenuAnchor> ConflictPopup;
	
	/** The button for committing chord */
	mutable TSharedPtr<SButton> ChordAcceptButton;
	
	/** Styling: border image to draw when not hovered or focused */
	const FSlateBrush* BorderImageNormal;
	
	/** Styling: border image to draw when hovered */
	const FSlateBrush* BorderImageHovered;
	
	/** Styling: border image to draw when focused */
	const FSlateBrush* BorderImageFocused;
};
