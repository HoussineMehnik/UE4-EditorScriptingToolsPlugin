//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "EditorMiscBlueprintLibrary.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Editor.h"
#include "EditorScriptingToolsUtils.h"
#include "EditorModeToolInstance.h"
#include "BluEdMode.h"
#include "CanvasTypes.h"
#include "DragAndDrop/ClassDragDropOp.h"
#include "UObject/WeakObjectPtrTemplates.h"
#include "DragAndDrop/AssetDragDropOp.h"
#include "EditorUserDefinedCommands.h"
#include "BluEdModeTypes.h"




FSlateBrush UEditorMiscBlueprintLibrary::FindIconBrushForClass(TSubclassOf<UObject> Class)
{
	if (Class)
	{
		const FSlateIcon ClassIcon = FSlateIconFinder::FindIconForClass(*Class);
		if (const FSlateBrush* IconBrush = ClassIcon.GetIcon())
		{
			return *IconBrush;
		}
	}

	return FSlateNoResource();
}

FEventReply UEditorMiscBlueprintLibrary::BeginClassDragDrop(TSubclassOf<UObject> InClass)
{
	FEventReply UMGEventReply{};
	UMGEventReply.NativeReply = FReply::Handled().BeginDragDrop(FClassDragDropOp::New(MakeWeakObjectPtr(*InClass)));
	return UMGEventReply;
}

FEventReply UEditorMiscBlueprintLibrary::BeginAssetsDragDrop(TArray<UObject*> DraggedAssets)
{
	FEventReply UMGEventReply{};
	if (DraggedAssets.Num() == 0)
	{
		UMGEventReply.NativeReply = FReply::Unhandled();
	}
	else
	{
		TArray<FAssetData> AssetData;
		AssetData.Reset(DraggedAssets.Num());
		for (const UObject* Asset : DraggedAssets)
		{
			if (IsValid(Asset))
			{
				AssetData.Add(FAssetData(Asset, true));
			}
		}

		if (AssetData.Num() > 0)
		{
			UMGEventReply.NativeReply = FReply::Handled().BeginDragDrop(FAssetDragDropOp::New(AssetData));
		}
	}
	return UMGEventReply;
}

FEventReply UEditorMiscBlueprintLibrary::BeginAssetDragDrop(UObject* DraggedAsset)
{
	TArray<UObject*> DraggedAssets;
	if (IsValid(DraggedAsset))
	{
		DraggedAssets.Add(DraggedAsset);
	}
	return BeginAssetsDragDrop(DraggedAssets);
}
