//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"

class UEditorUserWidget;
class UDetailCustomizationInstance;

class FDetailWidgetRow;

class FDetailCustomizationHelpers
{

private:


public:
	static UEditorUserWidget* AddDetailWidgetRow(FDetailWidgetRow& DetailWidgetRow, FNativeDetailCustomizationInstance* CustomizationInstance, TSubclassOf<UEditorUserWidget> WidgetClass);
	static void AddDetailWidgetRowSplitted(FDetailWidgetRow& DetailWidgetRow, FNativeDetailCustomizationInstance* CustomizationInstance, UEditorUserWidget*& OutNameColumnWidget, UEditorUserWidget*& OutValueColumnWidget, TSubclassOf<UEditorUserWidget> NameColumnWidgetClass, TSubclassOf<UEditorUserWidget> ValueColumnWidgetClass);

};
