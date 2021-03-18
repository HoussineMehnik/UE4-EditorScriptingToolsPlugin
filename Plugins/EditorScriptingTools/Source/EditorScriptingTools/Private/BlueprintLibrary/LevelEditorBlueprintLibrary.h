//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditorScriptingToolsTypes.h"
#include "EditorTypesWrapperTypes.h"
#include "LevelEditorBlueprintLibrary.generated.h"


/**
 * 
 */
UCLASS()
class ULevelEditorBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Level Editor", meta = (DisplayName = "Post Edit Change Object", Keywords = "post edit change"))
		static void PostEditChangeObject(UObject* Object);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Level Editor", meta = (DisplayName = "Select Component", Keywords = "select component"))
		static void SelectComponent(class UActorComponent* Component, bool bInSelected, bool bNotify, bool bSelectEvenIfHidden = false);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Level Editor", meta = (DisplayName = "Select Actor", Keywords = "select actor"))
		static void SelectActor(class AActor* Actor, bool bInSelected, bool bNotify, bool bSelectEvenIfHidden = false, bool bForceRefresh = false);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Level Editor", meta = (DisplayName = "Select None", Keywords = "select unselect deselect actor selection"))
		static void SelectNone(bool bNoteSelectionChange, bool bDeselectBSPSurfs, bool WarnAboutManyActors = true);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Level Editor", meta = (DisplayName = "Refresh Components Render State", Keywords = "refresh component render"))
		static void MarkActorComponentsRenderStateDirty(class AActor* Actor);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Level Editor", meta = (DisplayName = "Rerun Actor Construction Scripts", Keywords = "run actor construction script"))
		static void RerunActorConstructionScripts(class AActor* Actor);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Level Editor", meta = (DisplayName = "Notify Actor Moved", Keywords = "notify actor editor move change transform scale rotation"))
		static void NotifyActorMoved(class AActor* Actor);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Level Editor", meta = (DisplayName = "NotifyComponentTransformChanged", Keywords = "notify component editor move transform scale rotation"))
		static void NotifyComponentTransformChanged(class USceneComponent* Component);

	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Level Editor", meta = (DisplayName = "Get Editor State", Keywords = "editor state status play simulat idle  playing simulating PIE"))
		static EEditorState GetEditorState();

	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Level Editor", meta = (CompactNodeTitle = "Get Editor Mode ID", Keywords = "editor mode edmode name id"))
		static FName GetEditorModeID(EBuiltinEditorModes EdMode);
};
