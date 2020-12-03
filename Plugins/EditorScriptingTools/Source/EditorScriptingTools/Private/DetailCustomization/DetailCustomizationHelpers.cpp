//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "DetailCustomizationHelpers.h"
#include "EditorScriptingToolsUtils.h"
#include "DetailWidgetRow.h"
#include "DetailCustomizationInstance.h"
#include "EditorUserWidget.h"
#include "NativeDetailCustomizationInstance.h"


UEditorUserWidget* FDetailCustomizationHelpers::AddDetailWidgetRow(FDetailWidgetRow& DetailWidgetRow, FNativeDetailCustomizationInstance* CustomizationInstance, TSubclassOf<UEditorUserWidget> WidgetClass)
{
	if (EditorScriptingToolsUtils::CanInstantiateClass(WidgetClass))
	{
		UEditorUserWidget* NewRowWidget = EditorScriptingToolsUtils::CreateTransientEditorWidget<UEditorUserWidget>(CustomizationInstance->GetInstance(), WidgetClass);
		if (NewRowWidget != nullptr)
		{
			CustomizationInstance->GetInstance()->ReferencedObjects.Add(NewRowWidget);

			DetailWidgetRow.WholeRowContent()
				[
					NewRowWidget->TakeWidget()
				];

			return  NewRowWidget;
		}
	}

	return nullptr;
}

void FDetailCustomizationHelpers::AddDetailWidgetRowSplitted(FDetailWidgetRow& DetailWidgetRow, FNativeDetailCustomizationInstance* CustomizationInstance, UEditorUserWidget*& OutNameColumnWidget, UEditorUserWidget*& OutValueColumnWidget, TSubclassOf<UEditorUserWidget> NameColumnWidgetClass, TSubclassOf<UEditorUserWidget> ValueColumnWidgetClass)
{
	if (EditorScriptingToolsUtils::CanInstantiateClass(NameColumnWidgetClass))
	{
		OutNameColumnWidget = EditorScriptingToolsUtils::CreateTransientEditorWidget<UEditorUserWidget>(CustomizationInstance->GetInstance(), NameColumnWidgetClass);
		CustomizationInstance->GetInstance()->ReferencedObjects.Add(OutNameColumnWidget);
	}

	if (EditorScriptingToolsUtils::CanInstantiateClass(ValueColumnWidgetClass))
	{
		OutValueColumnWidget = EditorScriptingToolsUtils::CreateTransientEditorWidget<UEditorUserWidget>(CustomizationInstance->GetInstance(), ValueColumnWidgetClass);
		CustomizationInstance->GetInstance()->ReferencedObjects.Add(OutValueColumnWidget);
	}

	TSharedRef<SWidget> NameContentWidget{ (OutNameColumnWidget == nullptr) ? SNullWidget::NullWidget : OutNameColumnWidget->TakeWidget() };
	TSharedRef<SWidget> ValueContentWidget{ (OutValueColumnWidget == nullptr) ? SNullWidget::NullWidget : OutValueColumnWidget->TakeWidget() };

	DetailWidgetRow.NameContent()
					[
						NameContentWidget
					]
					.ValueContent()
					[
						ValueContentWidget
					];
}

