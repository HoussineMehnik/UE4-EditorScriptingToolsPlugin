// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDITORSCRIPTINGTOOLS_EditorScriptingToolsTypes_generated_h
#error "EditorScriptingToolsTypes.generated.h already included, missing '#pragma once' in EditorScriptingToolsTypes.h"
#endif
#define EDITORSCRIPTINGTOOLS_EditorScriptingToolsTypes_generated_h

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_EditorScriptingToolsTypes_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEventDummyReturn_Statics; \
	EDITORSCRIPTINGTOOLS_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<struct FEventDummyReturn>();

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_EditorScriptingToolsTypes_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDummyStruct_Statics; \
	EDITORSCRIPTINGTOOLS_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<struct FDummyStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_EditorScriptingToolsTypes_h


#define FOREACH_ENUM_EEDITORSTATE(op) \
	op(EEditorState::Editor) \
	op(EEditorState::SimulatingInEditor) \
	op(EEditorState::PlayingInEditor) \
	op(EEditorState::Unknown) 

enum class EEditorState : uint8;
template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EEditorState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
