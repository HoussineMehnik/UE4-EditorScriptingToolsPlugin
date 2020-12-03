//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "Widgets/SCompoundWidget.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Templates/SubclassOf.h"


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