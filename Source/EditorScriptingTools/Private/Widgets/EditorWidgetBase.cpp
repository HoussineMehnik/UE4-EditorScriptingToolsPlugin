//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "EditorWidgetBase.h"


#define LOCTEXT_NAMESPACE "EditorWidgetBase"

UEditorWidgetBase::UEditorWidgetBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

#if WITH_EDITOR
const FText UEditorWidgetBase::GetPaletteCategory()
{
	return LOCTEXT("Editor", "Editor");
}
#endif //WITH_EDITOR

#undef LOCTEXT_NAMESPACE
