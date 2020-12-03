// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/DetailCustomization/DetailCustomizationTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetailCustomizationTypes() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FEditablePropertyInfo();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FEditablePropertyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FEditablePropertyInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditablePropertyInfo, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("EditablePropertyInfo"), sizeof(FEditablePropertyInfo), Get_Z_Construct_UScriptStruct_FEditablePropertyInfo_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<FEditablePropertyInfo>()
{
	return FEditablePropertyInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditablePropertyInfo(FEditablePropertyInfo::StaticStruct, TEXT("/Script/EditorScriptingTools"), TEXT("EditablePropertyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingTools_StaticRegisterNativesFEditablePropertyInfo
{
	FScriptStruct_EditorScriptingTools_StaticRegisterNativesFEditablePropertyInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditablePropertyInfo")),new UScriptStruct::TCppStructOps<FEditablePropertyInfo>);
	}
} ScriptStruct_EditorScriptingTools_StaticRegisterNativesFEditablePropertyInfo;
	struct Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyOwnerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PropertyOwnerClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditablePropertyInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "Editable Property Info" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditablePropertyInfo, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::NewProp_PropertyPath_MetaData[] = {
		{ "Category", "Editable Property Info" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditablePropertyInfo, PropertyPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::NewProp_PropertyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::NewProp_PropertyPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::NewProp_PropertyOwnerClass_MetaData[] = {
		{ "Category", "Editable Property Info" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::NewProp_PropertyOwnerClass = { "PropertyOwnerClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditablePropertyInfo, PropertyOwnerClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::NewProp_PropertyOwnerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::NewProp_PropertyOwnerClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::NewProp_PropertyPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::NewProp_PropertyOwnerClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
		nullptr,
		&NewStructOps,
		"EditablePropertyInfo",
		sizeof(FEditablePropertyInfo),
		alignof(FEditablePropertyInfo),
		Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditablePropertyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditablePropertyInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditablePropertyInfo"), sizeof(FEditablePropertyInfo), Get_Z_Construct_UScriptStruct_FEditablePropertyInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditablePropertyInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditablePropertyInfo_Hash() { return 1659764515U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
