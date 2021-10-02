//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "Widgets/SCompoundWidget.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Templates/SubclassOf.h"
#include "Input/Reply.h"


class SPropertiesBrowser : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SPropertiesBrowser) {}
	SLATE_END_ARGS()

		/** Slate widget construction */
	void Construct(const FArguments& InArgs);

private:
	FText GetClassName() const;
	FReply OpenClassPickerDialog();
	FReply ClipboardCopy();
	TSharedRef<SWidget> OnGenerateComboWidget(TSharedPtr<FString> InName);
	void OnComboSelectionChanged(TSharedPtr<FString> InSelectedItem, ESelectInfo::Type SelectInfo);
	FText GetPropertyName() const;

	void FillPropertiesNamesList();


private:
	TSharedPtr<class SBox> PropertyListContainer;
	TSubclassOf<class UObject> ObjectClass;
	TArray<TSharedPtr<FString>> PropertiesNames;
	TWeakPtr<FString> SelectedPropertyName;
};