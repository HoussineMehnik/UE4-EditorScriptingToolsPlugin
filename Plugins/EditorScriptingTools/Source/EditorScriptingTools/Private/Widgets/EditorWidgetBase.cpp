//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

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
