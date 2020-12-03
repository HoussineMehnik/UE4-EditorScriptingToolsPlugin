//====================================================================//
// Copyright 2019 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//==================== http://ue4resources.com/ =====================//

#include "EditorContextMenuLibrary.h"

#include "EditorUserWidget.h"
#include "EditorScriptingToolsUtils.h"

#include "Modules/ModuleManager.h"
#include "LevelEditor.h"
#include "Editor.h"

#include "Framework/Application/SlateApplication.h"
#include "Widgets/Layout/SBox.h"


TWeakObjectPtr<UEditorUserWidget> UEditorContextMenuLibrary::ActiveContextMenuWidgetPtr = nullptr;

UEditorUserWidget* UEditorContextMenuLibrary::CreateContextMenu(TSubclassOf<UEditorUserWidget> MenuWidgetClass, bool& bIsValid)
{
	ActiveContextMenuWidgetPtr = nullptr;

	if (EditorScriptingToolsUtils::CanInstantiateClass(*MenuWidgetClass))
	{
		if (UWorld* World = GEditor->GetEditorWorldContext().World())
		{
			FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
			TWeakPtr<class ILevelEditor> LevelEditorInstanceWeakPtr = LevelEditorModule.GetLevelEditorInstance();
			if (LevelEditorInstanceWeakPtr.IsValid())
			{
				ActiveContextMenuWidgetPtr = EditorScriptingToolsUtils::CreateTransientEditorWidget<UEditorUserWidget>(World, MenuWidgetClass);
				if (ActiveContextMenuWidgetPtr != nullptr)
				{
					TSharedRef<SWidget> MenuSlateWidget = SNew(SBox)
						.HAlign(HAlign_Fill)
						[
							ActiveContextMenuWidgetPtr->TakeWidget()
						];

					TSharedPtr<IMenu> Menu = FSlateApplication::Get().PushMenu(
						LevelEditorInstanceWeakPtr.Pin().ToSharedRef(),
						FWidgetPath(),
						MenuSlateWidget,
						FSlateApplication::Get().GetCursorPos(),
						FPopupTransitionEffect(FPopupTransitionEffect::ContextMenu)
					);

					Menu->GetOnMenuDismissed().AddStatic(&UEditorContextMenuLibrary::HandleMenuDismissed);
				}
			}
		}
	}

	bIsValid = ActiveContextMenuWidgetPtr.IsValid();
	return ActiveContextMenuWidgetPtr.Get();
}

void UEditorContextMenuLibrary::DismissContextMenus()
{
	FSlateApplication::Get().DismissAllMenus();
}

void UEditorContextMenuLibrary::HandleMenuDismissed(TSharedRef<IMenu> Menu)
{
	ActiveContextMenuWidgetPtr = nullptr;
}




