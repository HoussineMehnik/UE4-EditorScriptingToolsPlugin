// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/EditorUserDefinedPlacementCategories/UserDefinedPlacementCategoriesTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserDefinedPlacementCategoriesTypes() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FUserDefinedPlacementCategoryInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("UserDefinedPlacementCategoryInfo"), sizeof(FUserDefinedPlacementCategoryInfo), Get_Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<FUserDefinedPlacementCategoryInfo>()
{
	return FUserDefinedPlacementCategoryInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserDefinedPlacementCategoryInfo(FUserDefinedPlacementCategoryInfo::StaticStruct, TEXT("/Script/EditorScriptingTools"), TEXT("UserDefinedPlacementCategoryInfo"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingTools_StaticRegisterNativesFUserDefinedPlacementCategoryInfo
{
	FScriptStruct_EditorScriptingTools_StaticRegisterNativesFUserDefinedPlacementCategoryInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserDefinedPlacementCategoryInfo")),new UScriptStruct::TCppStructOps<FUserDefinedPlacementCategoryInfo>);
	}
} ScriptStruct_EditorScriptingTools_StaticRegisterNativesFUserDefinedPlacementCategoryInfo;
	struct Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SortOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSortable_MetaData[];
#endif
		static void NewProp_bSortable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSortable;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClasses_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ActorClasses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedPlacementCategories/UserDefinedPlacementCategoriesTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserDefinedPlacementCategoryInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "PlacementCategory" },
		{ "Comment", "/** A unique name used to register this category. */" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedPlacementCategories/UserDefinedPlacementCategoriesTypes.h" },
		{ "ToolTip", "A unique name used to register this category." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserDefinedPlacementCategoryInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_SortOrder_MetaData[] = {
		{ "Category", "PlacementCategory" },
		{ "Comment", "/** Sort order for the category tab (lowest first). */" },
		{ "EditCondition", "bSortable" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedPlacementCategories/UserDefinedPlacementCategoriesTypes.h" },
		{ "ToolTip", "Sort order for the category tab (lowest first)." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserDefinedPlacementCategoryInfo, SortOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_SortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_SortOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_bSortable_MetaData[] = {
		{ "Category", "PlacementCategory" },
		{ "Comment", "/** Whether the items in this category are automatically sortable by name. False if the items are already sorted. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedPlacementCategories/UserDefinedPlacementCategoriesTypes.h" },
		{ "ToolTip", "Whether the items in this category are automatically sortable by name. False if the items are already sorted." },
	};
#endif
	void Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_bSortable_SetBit(void* Obj)
	{
		((FUserDefinedPlacementCategoryInfo*)Obj)->bSortable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_bSortable = { "bSortable", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUserDefinedPlacementCategoryInfo), &Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_bSortable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_bSortable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_bSortable_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_ActorClasses_ElementProp = { "ActorClasses", nullptr, (EPropertyFlags)0x0004000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_ActorClasses_MetaData[] = {
		{ "Category", "PlacementCategory" },
		{ "Comment", "/** The placeable items to register. */" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedPlacementCategories/UserDefinedPlacementCategoriesTypes.h" },
		{ "ToolTip", "The placeable items to register." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_ActorClasses = { "ActorClasses", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserDefinedPlacementCategoryInfo, ActorClasses), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_ActorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_ActorClasses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_SortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_bSortable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_ActorClasses_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::NewProp_ActorClasses,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
		nullptr,
		&NewStructOps,
		"UserDefinedPlacementCategoryInfo",
		sizeof(FUserDefinedPlacementCategoryInfo),
		alignof(FUserDefinedPlacementCategoryInfo),
		Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserDefinedPlacementCategoryInfo"), sizeof(FUserDefinedPlacementCategoryInfo), Get_Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo_Hash() { return 1365628448U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
