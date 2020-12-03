// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/EditorUserDefinedActions/EditorUserDefinedActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUserDefinedActions() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EActionCommandHockType();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserDefinedActions_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserDefinedActions();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorScriptingUtilityAssetInterface_NoRegister();
// End Cross Module References
	static UEnum* EActionCommandHockType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingTools_EActionCommandHockType, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("EActionCommandHockType"));
		}
		return Singleton;
	}
	template<> EDITORSCRIPTINGTOOLS_API UEnum* StaticEnum<EActionCommandHockType>()
	{
		return EActionCommandHockType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EActionCommandHockType(EActionCommandHockType_StaticEnum, TEXT("/Script/EditorScriptingTools"), TEXT("EActionCommandHockType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingTools_EActionCommandHockType_Hash() { return 4137525200U; }
	UEnum* Z_Construct_UEnum_EditorScriptingTools_EActionCommandHockType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EActionCommandHockType"), 0, Get_Z_Construct_UEnum_EditorScriptingTools_EActionCommandHockType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EActionCommandHockType::MainFrame", (int64)EActionCommandHockType::MainFrame },
				{ "EActionCommandHockType::LevelEditor", (int64)EActionCommandHockType::LevelEditor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LevelEditor.Name", "EActionCommandHockType::LevelEditor" },
				{ "MainFrame.Name", "EActionCommandHockType::MainFrame" },
				{ "ModuleRelativePath", "Private/EditorUserDefinedActions/EditorUserDefinedActions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools,
				nullptr,
				"EActionCommandHockType",
				"EActionCommandHockType",
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
class UScriptStruct* FUserDefinedEditorActionInputChords::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("UserDefinedEditorActionInputChords"), sizeof(FUserDefinedEditorActionInputChords), Get_Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<FUserDefinedEditorActionInputChords>()
{
	return FUserDefinedEditorActionInputChords::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserDefinedEditorActionInputChords(FUserDefinedEditorActionInputChords::StaticStruct, TEXT("/Script/EditorScriptingTools"), TEXT("UserDefinedEditorActionInputChords"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingTools_StaticRegisterNativesFUserDefinedEditorActionInputChords
{
	FScriptStruct_EditorScriptingTools_StaticRegisterNativesFUserDefinedEditorActionInputChords()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserDefinedEditorActionInputChords")),new UScriptStruct::TCppStructOps<FUserDefinedEditorActionInputChords>);
	}
} ScriptStruct_EditorScriptingTools_StaticRegisterNativesFUserDefinedEditorActionInputChords;
	struct Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryInputChord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryInputChord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryInputChord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryInputChord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedActions/EditorUserDefinedActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserDefinedEditorActionInputChords>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::NewProp_PrimaryInputChord_MetaData[] = {
		{ "Category", "InputChord" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedActions/EditorUserDefinedActions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::NewProp_PrimaryInputChord = { "PrimaryInputChord", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserDefinedEditorActionInputChords, PrimaryInputChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::NewProp_PrimaryInputChord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::NewProp_PrimaryInputChord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::NewProp_SecondaryInputChord_MetaData[] = {
		{ "Category", "InputChord" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedActions/EditorUserDefinedActions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::NewProp_SecondaryInputChord = { "SecondaryInputChord", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserDefinedEditorActionInputChords, SecondaryInputChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::NewProp_SecondaryInputChord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::NewProp_SecondaryInputChord_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::NewProp_PrimaryInputChord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::NewProp_SecondaryInputChord,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
		nullptr,
		&NewStructOps,
		"UserDefinedEditorActionInputChords",
		sizeof(FUserDefinedEditorActionInputChords),
		alignof(FUserDefinedEditorActionInputChords),
		Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserDefinedEditorActionInputChords"), sizeof(FUserDefinedEditorActionInputChords), Get_Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords_Hash() { return 3032893483U; }
	DEFINE_FUNCTION(UEditorUserDefinedActions::execGetActionInputChords)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ActionAsByte);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUserDefinedEditorActionInputChords*)Z_Param__Result=P_THIS->GetActionInputChords(Z_Param_ActionAsByte);
		P_NATIVE_END;
	}
	void UEditorUserDefinedActions::StaticRegisterNativesUEditorUserDefinedActions()
	{
		UClass* Class = UEditorUserDefinedActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActionInputChords", &UEditorUserDefinedActions::execGetActionInputChords },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorUserDefinedActions_GetActionInputChords_Statics
	{
		struct EditorUserDefinedActions_eventGetActionInputChords_Parms
		{
			uint8 ActionAsByte;
			FUserDefinedEditorActionInputChords ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionAsByte;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorUserDefinedActions_GetActionInputChords_Statics::NewProp_ActionAsByte = { "ActionAsByte", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUserDefinedActions_eventGetActionInputChords_Parms, ActionAsByte), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorUserDefinedActions_GetActionInputChords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUserDefinedActions_eventGetActionInputChords_Parms, ReturnValue), Z_Construct_UScriptStruct_FUserDefinedEditorActionInputChords, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUserDefinedActions_GetActionInputChords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedActions_GetActionInputChords_Statics::NewProp_ActionAsByte,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedActions_GetActionInputChords_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUserDefinedActions_GetActionInputChords_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor User Defined Actions" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedActions/EditorUserDefinedActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUserDefinedActions_GetActionInputChords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUserDefinedActions, nullptr, "GetActionInputChords", nullptr, nullptr, sizeof(EditorUserDefinedActions_eventGetActionInputChords_Parms), Z_Construct_UFunction_UEditorUserDefinedActions_GetActionInputChords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedActions_GetActionInputChords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUserDefinedActions_GetActionInputChords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedActions_GetActionInputChords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUserDefinedActions_GetActionInputChords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUserDefinedActions_GetActionInputChords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorUserDefinedActions_NoRegister()
	{
		return UEditorUserDefinedActions::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUserDefinedActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultChordList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultChordList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultChordList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlternateChordList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternateChordList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AlternateChordList;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RepeatStatesList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatStatesList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RepeatStatesList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUserDefinedActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserDefinedEnum,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorUserDefinedActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorUserDefinedActions_GetActionInputChords, "GetActionInputChords" }, // 1226441000
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUserDefinedActions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Description" },
		{ "IncludePath", "EditorUserDefinedActions/EditorUserDefinedActions.h" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedActions/EditorUserDefinedActions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_DefaultChordList_Inner = { "DefaultChordList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_DefaultChordList_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditorUserDefinedActions/EditorUserDefinedActions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_DefaultChordList = { "DefaultChordList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorUserDefinedActions, DefaultChordList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_DefaultChordList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_DefaultChordList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_AlternateChordList_Inner = { "AlternateChordList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_AlternateChordList_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditorUserDefinedActions/EditorUserDefinedActions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_AlternateChordList = { "AlternateChordList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorUserDefinedActions, AlternateChordList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_AlternateChordList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_AlternateChordList_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_RepeatStatesList_Inner = { "RepeatStatesList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_RepeatStatesList_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditorUserDefinedActions/EditorUserDefinedActions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_RepeatStatesList = { "RepeatStatesList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorUserDefinedActions, RepeatStatesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_RepeatStatesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_RepeatStatesList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorUserDefinedActions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_DefaultChordList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_DefaultChordList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_AlternateChordList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_AlternateChordList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_RepeatStatesList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUserDefinedActions_Statics::NewProp_RepeatStatesList,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEditorUserDefinedActions_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEditorScriptingUtilityAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UEditorUserDefinedActions, IEditorScriptingUtilityAssetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUserDefinedActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUserDefinedActions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorUserDefinedActions_Statics::ClassParams = {
		&UEditorUserDefinedActions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditorUserDefinedActions_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUserDefinedActions_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUserDefinedActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUserDefinedActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUserDefinedActions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorUserDefinedActions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorUserDefinedActions, 508275469);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UEditorUserDefinedActions>()
	{
		return UEditorUserDefinedActions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorUserDefinedActions(Z_Construct_UClass_UEditorUserDefinedActions, &UEditorUserDefinedActions::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UEditorUserDefinedActions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUserDefinedActions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
