//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//


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
			FEditorScriptingToolsStyle::GetAppStyleSetName() // Icon Style Set
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