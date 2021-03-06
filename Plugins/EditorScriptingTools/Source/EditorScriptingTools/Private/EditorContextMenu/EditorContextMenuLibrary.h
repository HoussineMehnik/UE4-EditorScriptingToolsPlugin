//====================================================================//
// Copyright 2019 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//==================== http://ue4resources.com/ =====================//

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "EditorUserWidget.h"
#include "EditorContextMenuLibrary.generated.h"

class IMenu;

/**
 * 
 */
UCLASS()
class UEditorContextMenuLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

private:
	static TWeakObjectPtr<UEditorUserWidget> ActiveContextMenuWidgetPtr;

public:

	/** Creates a new Editor Context Menu at cursor location. */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Context Menu", meta = (DeterminesOutputType = "MenuWidgetClass", DisplayName = "Push Context Menu", Keywords = "push create add context menu"))
		static UEditorUserWidget* CreateContextMenu(TSubclassOf<UEditorUserWidget> MenuWidgetClass, bool& bIsValid);

	/** Dismisses all open menus */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Context Menu", meta = (DisplayName = "Dismiss Context Menus", Keywords = "dismiss remove destroy context menu"))
		static void DismissContextMenus();

private:
	static void HandleMenuDismissed(TSharedRef<IMenu> Menu);

};
