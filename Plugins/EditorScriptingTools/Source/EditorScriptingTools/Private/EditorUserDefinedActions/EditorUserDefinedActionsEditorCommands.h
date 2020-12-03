//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#pragma once

#include "CoreMinimal.h"
#include "EditorStyleSet.h"
#include "Framework/Commands/Commands.h"
#include "EditorScriptingToolsStyle.h"


class FEditorUserDefinedActionsEditorCommands : public TCommands<FEditorUserDefinedActionsEditorCommands>
{
public:
	FEditorUserDefinedActionsEditorCommands()
		: TCommands<FEditorUserDefinedActionsEditorCommands>(
			"EditorUserDefinedActionsEditor", // Context name for fast lookup
			NSLOCTEXT("Contexts", "EditorUserDefinedActionsEditor", "Editor User Defined Actions Editor"), // Localized context name for displaying
			NAME_None, // Parent
			FEditorScriptingToolsStyle::GetStyleSetName() // Icon Style Set
			)
	{

	}
	// TCommand<> interface
	virtual void RegisterCommands() override;
	// End of TCommand<> interface

public:
	TSharedPtr<FUICommandInfo> MapActions;
	TSharedPtr<FUICommandInfo> UnmapActions;
};