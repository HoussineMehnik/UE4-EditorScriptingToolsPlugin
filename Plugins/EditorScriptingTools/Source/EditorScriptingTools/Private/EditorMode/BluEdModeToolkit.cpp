//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "BluEdModeToolkit.h"
#include "BluEdMode.h"
#include "Engine/Selection.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"
#include "EditorModeManager.h"
#include "SBluEdModeWidget.h"
#include "EditorTypesWrapperTypes.h"
#include "BluEdModeTypes.h"


#define LOCTEXT_NAMESPACE "FBluEdModeToolkit"

FBluEdModeToolkit::FBluEdModeToolkit()
{
}

void FBluEdModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost)
{
	FBluEdMode* CurrentEditorMode = (FBluEdMode*)(GetEditorMode());
	SAssignNew(ToolkitWidget, SBluEdModeWidget);
	FModeToolkit::Init(InitToolkitHost);
}

FName FBluEdModeToolkit::GetToolkitFName() const
{
	return FName("BluEdMode");
}

FText FBluEdModeToolkit::GetBaseToolkitName() const
{
	return LOCTEXT("BluEdModeToolkit_DisplayName", "Blueprint Editor Mode Tool");
}

class FEdMode* FBluEdModeToolkit::GetEditorMode() const
{
	return FBluEdMode::GetPtr();
}

TSharedPtr<class SWidget> FBluEdModeToolkit::GetInlineContent() const
{
	return ToolkitWidget;
}


#undef LOCTEXT_NAMESPACE
