//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"

class UEditorUserWidget;
class UDetailCustomizationInstance;
class FNativeDetailCustomizationInstance;

class FDetailWidgetRow;

class FDetailCustomizationHelpers
{

private:


public:
	static UEditorUserWidget* AddDetailWidgetRow(FDetailWidgetRow& DetailWidgetRow, FNativeDetailCustomizationInstance* CustomizationInstance, TSubclassOf<UEditorUserWidget> WidgetClass);
	static void AddDetailWidgetRowSplitted(FDetailWidgetRow& DetailWidgetRow, FNativeDetailCustomizationInstance* CustomizationInstance, UEditorUserWidget*& OutNameColumnWidget, UEditorUserWidget*& OutValueColumnWidget, TSubclassOf<UEditorUserWidget> NameColumnWidgetClass, TSubclassOf<UEditorUserWidget> ValueColumnWidgetClass);

};
