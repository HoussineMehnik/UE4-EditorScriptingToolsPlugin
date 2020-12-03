// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDITORSCRIPTINGTOOLS_HitProxiesTypes_generated_h
#error "HitProxiesTypes.generated.h already included, missing '#pragma once' in HitProxiesTypes.h"
#endif
#define EDITORSCRIPTINGTOOLS_HitProxiesTypes_generated_h

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_HitProxiesTypes_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitProxyHandle_Statics; \
	EDITORSCRIPTINGTOOLS_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<struct FHitProxyHandle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_HitProxiesTypes_h


#define FOREACH_ENUM_EHITPROXYTYPE(op) \
	op(EHitProxyType::Undefined) \
	op(EHitProxyType::CustomIndex) \
	op(EHitProxyType::Actor) \
	op(EHitProxyType::ComponentVisualizer) \
	op(EHitProxyType::Invalid) 

enum class EHitProxyType : uint8;
template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EHitProxyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
