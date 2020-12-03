// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/EditorScriptingToolsCommon/EditorScriptingToolsTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorScriptingToolsTypes() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EEditorState();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FEventDummyReturn();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FDummyStruct();
// End Cross Module References
	static UEnum* EEditorState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_EEditorState, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("EEditorState"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EEditorState>()
	{
		return EEditorState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEditorState(EEditorState_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("EEditorState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_EEditorState_Hash() { return 533254770U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_EEditorState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEditorState"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_EEditorState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEditorState::Editor", (int64)EEditorState::Editor },
				{ "EEditorState::SimulatingInEditor", (int64)EEditorState::SimulatingInEditor },
				{ "EEditorState::PlayingInEditor", (int64)EEditorState::PlayingInEditor },
				{ "EEditorState::Unknown", (int64)EEditorState::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Editor.Name", "EEditorState::Editor" },
				{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorScriptingToolsTypes.h" },
				{ "PlayingInEditor.Name", "EEditorState::PlayingInEditor" },
				{ "SimulatingInEditor.Name", "EEditorState::SimulatingInEditor" },
				{ "Unknown.Name", "EEditorState::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"EEditorState",
				"EEditorState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEventDummyReturn::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FEventDummyReturn_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventDummyReturn, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("EventDummyReturn"), sizeof(FEventDummyReturn), Get_Z_Construct_UScriptStruct_FEventDummyReturn_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<FEventDummyReturn>()
{
	return FEventDummyReturn::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventDummyReturn(FEventDummyReturn::StaticStruct, TEXT("/Script/EditorScriptingTools"), TEXT("EventDummyReturn"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingTools_StaticRegisterNativesFEventDummyReturn
{
	FScriptStruct_EditorScriptingTools_StaticRegisterNativesFEventDummyReturn()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventDummyReturn")),new UScriptStruct::TCppStructOps<FEventDummyReturn>);
	}
} ScriptStruct_EditorScriptingTools_StaticRegisterNativesFEventDummyReturn;
	struct Z_Construct_UScriptStruct_FEventDummyReturn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventDummyReturn_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorScriptingToolsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventDummyReturn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventDummyReturn>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventDummyReturn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
		nullptr,
		&NewStructOps,
		"EventDummyReturn",
		sizeof(FEventDummyReturn),
		alignof(FEventDummyReturn),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventDummyReturn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventDummyReturn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventDummyReturn()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventDummyReturn_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventDummyReturn"), sizeof(FEventDummyReturn), Get_Z_Construct_UScriptStruct_FEventDummyReturn_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventDummyReturn_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventDummyReturn_Hash() { return 1333851686U; }
class UScriptStruct* FDummyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FDummyStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDummyStruct, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("DummyStruct"), sizeof(FDummyStruct), Get_Z_Construct_UScriptStruct_FDummyStruct_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<FDummyStruct>()
{
	return FDummyStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDummyStruct(FDummyStruct::StaticStruct, TEXT("/Script/EditorScriptingTools"), TEXT("DummyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingTools_StaticRegisterNativesFDummyStruct
{
	FScriptStruct_EditorScriptingTools_StaticRegisterNativesFDummyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DummyStruct")),new UScriptStruct::TCppStructOps<FDummyStruct>);
	}
} ScriptStruct_EditorScriptingTools_StaticRegisterNativesFDummyStruct;
	struct Z_Construct_UScriptStruct_FDummyStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDummyStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/EditorScriptingToolsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDummyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDummyStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDummyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
		nullptr,
		&NewStructOps,
		"DummyStruct",
		sizeof(FDummyStruct),
		alignof(FDummyStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDummyStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDummyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDummyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDummyStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DummyStruct"), sizeof(FDummyStruct), Get_Z_Construct_UScriptStruct_FDummyStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDummyStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDummyStruct_Hash() { return 958386845U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
