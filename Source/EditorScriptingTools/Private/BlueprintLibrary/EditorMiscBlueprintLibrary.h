//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditorTypesWrapperTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "EditorMiscBlueprintLibrary.generated.h"



/**
 * 
 */
UCLASS()
class UEditorMiscBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Editor Scripting | UI")
		static FSlateBrush FindIconBrushForClass(TSubclassOf<UObject> Class);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | UI")
		static FEventReply BeginClassDragDrop(TSubclassOf<UObject> DraggedClass);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | UI")
		static FEventReply BeginAssetsDragDrop(TArray<UObject*> DraggedAssets);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | UI")
		static FEventReply BeginAssetDragDrop(UObject* DraggedAsset);
};
