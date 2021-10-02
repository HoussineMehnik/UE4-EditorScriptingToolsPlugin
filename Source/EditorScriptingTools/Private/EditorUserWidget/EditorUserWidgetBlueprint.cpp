//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "EditorUserWidgetBlueprint.h"
#include "EditorUserWidget.h"



UEditorUserWidgetBlueprint::UEditorUserWidgetBlueprint(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}


void UEditorUserWidgetBlueprint::GetReparentingRules(TSet< const UClass* >& AllowedChildrenOfClasses, TSet< const UClass* >& DisallowedChildrenOfClasses) const
{
	AllowedChildrenOfClasses.Empty();
	AllowedChildrenOfClasses.Add(UEditorUserWidget::StaticClass());
}
