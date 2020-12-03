// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/EditorScriptingToolsCommon/HitProxiesTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitProxiesTypes() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EHitProxyType();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FHitProxyHandle();
// End Cross Module References
	static UEnum* EHitProxyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_EHitProxyType, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("EHitProxyType"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EHitProxyType>()
	{
		return EHitProxyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHitProxyType(EHitProxyType_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("EHitProxyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_EHitProxyType_Hash() { return 3224351262U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_EHitProxyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHitProxyType"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_EHitProxyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHitProxyType::Undefined", (int64)EHitProxyType::Undefined },
				{ "EHitProxyType::CustomIndex", (int64)EHitProxyType::CustomIndex },
				{ "EHitProxyType::Actor", (int64)EHitProxyType::Actor },
				{ "EHitProxyType::ComponentVisualizer", (int64)EHitProxyType::ComponentVisualizer },
				{ "EHitProxyType::Invalid", (int64)EHitProxyType::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Actor.Comment", "//\n//\n" },
				{ "Actor.Name", "EHitProxyType::Actor" },
				{ "BlueprintType", "true" },
				{ "ComponentVisualizer.Comment", "//\n//\n" },
				{ "ComponentVisualizer.Name", "EHitProxyType::ComponentVisualizer" },
				{ "CustomIndex.Comment", "//\n//\n" },
				{ "CustomIndex.Name", "EHitProxyType::CustomIndex" },
				{ "Invalid.Comment", "//\n//\n//\n" },
				{ "Invalid.Name", "EHitProxyType::Invalid" },
				{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/HitProxiesTypes.h" },
				{ "Undefined.Comment", "//\n" },
				{ "Undefined.Name", "EHitProxyType::Undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"EHitProxyType",
				"EHitProxyType",
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
class UScriptStruct* FHitProxyHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FHitProxyHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitProxyHandle, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("HitProxyHandle"), sizeof(FHitProxyHandle), Get_Z_Construct_UScriptStruct_FHitProxyHandle_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<FHitProxyHandle>()
{
	return FHitProxyHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHitProxyHandle(FHitProxyHandle::StaticStruct, TEXT("/Script/EditorScriptingTools"), TEXT("HitProxyHandle"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingTools_StaticRegisterNativesFHitProxyHandle
{
	FScriptStruct_EditorScriptingTools_StaticRegisterNativesFHitProxyHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HitProxyHandle")),new UScriptStruct::TCppStructOps<FHitProxyHandle>);
	}
} ScriptStruct_EditorScriptingTools_StaticRegisterNativesFHitProxyHandle;
	struct Z_Construct_UScriptStruct_FHitProxyHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitProxyHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/HitProxiesTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitProxyHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitProxyHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitProxyHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
		nullptr,
		&NewStructOps,
		"HitProxyHandle",
		sizeof(FHitProxyHandle),
		alignof(FHitProxyHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitProxyHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitProxyHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitProxyHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHitProxyHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HitProxyHandle"), sizeof(FHitProxyHandle), Get_Z_Construct_UScriptStruct_FHitProxyHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHitProxyHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHitProxyHandle_Hash() { return 1877831768U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
