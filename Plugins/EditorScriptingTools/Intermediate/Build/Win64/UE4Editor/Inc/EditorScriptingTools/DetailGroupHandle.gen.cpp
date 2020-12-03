// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/DetailCustomization/DetailGroupHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetailGroupHandle() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FDetailGroupHandle();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UDetailGroupBlueprintLibrary_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UDetailGroupBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserWidget_NoRegister();
// End Cross Module References
class UScriptStruct* FDetailGroupHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FDetailGroupHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDetailGroupHandle, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("DetailGroupHandle"), sizeof(FDetailGroupHandle), Get_Z_Construct_UScriptStruct_FDetailGroupHandle_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<FDetailGroupHandle>()
{
	return FDetailGroupHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDetailGroupHandle(FDetailGroupHandle::StaticStruct, TEXT("/Script/EditorScriptingTools"), TEXT("DetailGroupHandle"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingTools_StaticRegisterNativesFDetailGroupHandle
{
	FScriptStruct_EditorScriptingTools_StaticRegisterNativesFDetailGroupHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DetailGroupHandle")),new UScriptStruct::TCppStructOps<FDetailGroupHandle>);
	}
} ScriptStruct_EditorScriptingTools_StaticRegisterNativesFDetailGroupHandle;
	struct Z_Construct_UScriptStruct_FDetailGroupHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailGroupHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailGroupHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDetailGroupHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDetailGroupHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDetailGroupHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
		nullptr,
		&NewStructOps,
		"DetailGroupHandle",
		sizeof(FDetailGroupHandle),
		alignof(FDetailGroupHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailGroupHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailGroupHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDetailGroupHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDetailGroupHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DetailGroupHandle"), sizeof(FDetailGroupHandle), Get_Z_Construct_UScriptStruct_FDetailGroupHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDetailGroupHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDetailGroupHandle_Hash() { return 2944290533U; }
	DEFINE_FUNCTION(UDetailGroupBlueprintLibrary::execAddWidgetRow)
	{
		P_GET_STRUCT_REF(FDetailGroupHandle,Z_Param_Out_DetailGroupHandle);
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEditorUserWidget**)Z_Param__Result=UDetailGroupBlueprintLibrary::AddWidgetRow(Z_Param_Out_DetailGroupHandle,Z_Param_WidgetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailGroupBlueprintLibrary::execHeaderRow)
	{
		P_GET_STRUCT_REF(FDetailGroupHandle,Z_Param_Out_DetailGroupHandle);
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEditorUserWidget**)Z_Param__Result=UDetailGroupBlueprintLibrary::HeaderRow(Z_Param_Out_DetailGroupHandle,Z_Param_WidgetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailGroupBlueprintLibrary::execAddGroup)
	{
		P_GET_STRUCT_REF(FDetailCategoryBuilderHandle,Z_Param_Out_CategoryBuilderHandle);
		P_GET_STRUCT_REF(FDetailGroupHandle,Z_Param_Out_OutDetailGroupHandle);
		P_GET_PROPERTY(FNameProperty,Z_Param_InGroupName);
		P_GET_PROPERTY(FTextProperty,Z_Param_InDisplayName);
		P_GET_UBOOL(Z_Param_bIsAdvanced);
		P_GET_UBOOL(Z_Param_bStartExpanded);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDetailGroupBlueprintLibrary::AddGroup(Z_Param_Out_CategoryBuilderHandle,Z_Param_Out_OutDetailGroupHandle,Z_Param_InGroupName,Z_Param_InDisplayName,Z_Param_bIsAdvanced,Z_Param_bStartExpanded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailGroupBlueprintLibrary::execIsValid)
	{
		P_GET_STRUCT_REF(FDetailGroupHandle,Z_Param_Out_DetailGroupHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDetailGroupBlueprintLibrary::IsValid(Z_Param_Out_DetailGroupHandle);
		P_NATIVE_END;
	}
	void UDetailGroupBlueprintLibrary::StaticRegisterNativesUDetailGroupBlueprintLibrary()
	{
		UClass* Class = UDetailGroupBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGroup", &UDetailGroupBlueprintLibrary::execAddGroup },
			{ "AddWidgetRow", &UDetailGroupBlueprintLibrary::execAddWidgetRow },
			{ "HeaderRow", &UDetailGroupBlueprintLibrary::execHeaderRow },
			{ "IsValid", &UDetailGroupBlueprintLibrary::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics
	{
		struct DetailGroupBlueprintLibrary_eventAddGroup_Parms
		{
			FDetailCategoryBuilderHandle CategoryBuilderHandle;
			FDetailGroupHandle OutDetailGroupHandle;
			FName InGroupName;
			FText InDisplayName;
			bool bIsAdvanced;
			bool bStartExpanded;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryBuilderHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDetailGroupHandle;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InGroupName;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InDisplayName;
		static void NewProp_bIsAdvanced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAdvanced;
		static void NewProp_bStartExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartExpanded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::NewProp_CategoryBuilderHandle = { "CategoryBuilderHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailGroupBlueprintLibrary_eventAddGroup_Parms, CategoryBuilderHandle), Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::NewProp_OutDetailGroupHandle = { "OutDetailGroupHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailGroupBlueprintLibrary_eventAddGroup_Parms, OutDetailGroupHandle), Z_Construct_UScriptStruct_FDetailGroupHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::NewProp_InGroupName = { "InGroupName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailGroupBlueprintLibrary_eventAddGroup_Parms, InGroupName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::NewProp_InDisplayName = { "InDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailGroupBlueprintLibrary_eventAddGroup_Parms, InDisplayName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::NewProp_bIsAdvanced_SetBit(void* Obj)
	{
		((DetailGroupBlueprintLibrary_eventAddGroup_Parms*)Obj)->bIsAdvanced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::NewProp_bIsAdvanced = { "bIsAdvanced", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetailGroupBlueprintLibrary_eventAddGroup_Parms), &Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::NewProp_bIsAdvanced_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::NewProp_bStartExpanded_SetBit(void* Obj)
	{
		((DetailGroupBlueprintLibrary_eventAddGroup_Parms*)Obj)->bStartExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::NewProp_bStartExpanded = { "bStartExpanded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetailGroupBlueprintLibrary_eventAddGroup_Parms), &Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::NewProp_bStartExpanded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::NewProp_CategoryBuilderHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::NewProp_OutDetailGroupHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::NewProp_InGroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::NewProp_InDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::NewProp_bIsAdvanced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::NewProp_bStartExpanded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization | Category Builder" },
		{ "Comment", "/**\n\x09 * Adds a group to the category\n\x09 *\n\x09 * @param OutDetailGroupHandle\x09The name of the group\n\x09 * @param GroupName\x09The name of the group\n\x09 * @param DisplayName The display name of the group\n\x09 * @param bIsAdvanced true if the group should appear in the advanced section of the category\n\x09 * @param bStartExpanded true if the group should start expanded\n\x09 */" },
		{ "CPP_Default_bIsAdvanced", "false" },
		{ "CPP_Default_bStartExpanded", "false" },
		{ "DisplayName", "Add Group" },
		{ "Keywords", "add new detail group category" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailGroupHandle.h" },
		{ "ToolTip", "Adds a group to the category\n\n@param OutDetailGroupHandle  The name of the group\n@param GroupName     The name of the group\n@param DisplayName The display name of the group\n@param bIsAdvanced true if the group should appear in the advanced section of the category\n@param bStartExpanded true if the group should start expanded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailGroupBlueprintLibrary, nullptr, "AddGroup", nullptr, nullptr, sizeof(DetailGroupBlueprintLibrary_eventAddGroup_Parms), Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics
	{
		struct DetailGroupBlueprintLibrary_eventAddWidgetRow_Parms
		{
			FDetailGroupHandle DetailGroupHandle;
			TSubclassOf<UEditorUserWidget>  WidgetClass;
			UEditorUserWidget* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DetailGroupHandle;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics::NewProp_DetailGroupHandle = { "DetailGroupHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailGroupBlueprintLibrary_eventAddWidgetRow_Parms, DetailGroupHandle), Z_Construct_UScriptStruct_FDetailGroupHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailGroupBlueprintLibrary_eventAddWidgetRow_Parms, WidgetClass), Z_Construct_UClass_UEditorUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailGroupBlueprintLibrary_eventAddWidgetRow_Parms, ReturnValue), Z_Construct_UClass_UEditorUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics::NewProp_DetailGroupHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization | Detail Group" },
		{ "Comment", "/**\n\x09 * Adds a new row for custom widgets *\n\x09 *\n\x09 * @return a new row for adding widgets\n\x09 */" },
		{ "DeterminesOutputType", "WidgetClass" },
		{ "DisplayName", "Add Group Row Widget" },
		{ "Keywords", "add create category group row widget" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailGroupHandle.h" },
		{ "ToolTip", "Adds a new row for custom widgets *\n\n@return a new row for adding widgets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailGroupBlueprintLibrary, nullptr, "AddWidgetRow", nullptr, nullptr, sizeof(DetailGroupBlueprintLibrary_eventAddWidgetRow_Parms), Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics
	{
		struct DetailGroupBlueprintLibrary_eventHeaderRow_Parms
		{
			FDetailGroupHandle DetailGroupHandle;
			TSubclassOf<UEditorUserWidget>  WidgetClass;
			UEditorUserWidget* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DetailGroupHandle;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics::NewProp_DetailGroupHandle = { "DetailGroupHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailGroupBlueprintLibrary_eventHeaderRow_Parms, DetailGroupHandle), Z_Construct_UScriptStruct_FDetailGroupHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailGroupBlueprintLibrary_eventHeaderRow_Parms, WidgetClass), Z_Construct_UClass_UEditorUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailGroupBlueprintLibrary_eventHeaderRow_Parms, ReturnValue), Z_Construct_UClass_UEditorUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics::NewProp_DetailGroupHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization | Detail Group" },
		{ "Comment", "/**\n\x09 * Makes a custom row for the groups header\n\x09 *\n\x09 * @return a new row for customizing the header\n\x09 */" },
		{ "DeterminesOutputType", "WidgetClass" },
		{ "DisplayName", "Add Header Row Widget" },
		{ "Keywords", "add create header row widget" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailGroupHandle.h" },
		{ "ToolTip", "Makes a custom row for the groups header\n\n@return a new row for customizing the header" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailGroupBlueprintLibrary, nullptr, "HeaderRow", nullptr, nullptr, sizeof(DetailGroupBlueprintLibrary_eventHeaderRow_Parms), Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailGroupBlueprintLibrary_IsValid_Statics
	{
		struct DetailGroupBlueprintLibrary_eventIsValid_Parms
		{
			FDetailGroupHandle DetailGroupHandle;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DetailGroupHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_IsValid_Statics::NewProp_DetailGroupHandle = { "DetailGroupHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailGroupBlueprintLibrary_eventIsValid_Parms, DetailGroupHandle), Z_Construct_UScriptStruct_FDetailGroupHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDetailGroupBlueprintLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DetailGroupBlueprintLibrary_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetailGroupBlueprintLibrary_eventIsValid_Parms), &Z_Construct_UFunction_UDetailGroupBlueprintLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailGroupBlueprintLibrary_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailGroupBlueprintLibrary_IsValid_Statics::NewProp_DetailGroupHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailGroupBlueprintLibrary_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailGroupBlueprintLibrary_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization | Detail Group" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailGroupHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailGroupBlueprintLibrary_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailGroupBlueprintLibrary, nullptr, "IsValid", nullptr, nullptr, sizeof(DetailGroupBlueprintLibrary_eventIsValid_Parms), Z_Construct_UFunction_UDetailGroupBlueprintLibrary_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailGroupBlueprintLibrary_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailGroupBlueprintLibrary_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailGroupBlueprintLibrary_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailGroupBlueprintLibrary_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailGroupBlueprintLibrary_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDetailGroupBlueprintLibrary_NoRegister()
	{
		return UDetailGroupBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDetailGroupBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDetailGroupBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDetailGroupBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddGroup, "AddGroup" }, // 1800176659
		{ &Z_Construct_UFunction_UDetailGroupBlueprintLibrary_AddWidgetRow, "AddWidgetRow" }, // 1935324316
		{ &Z_Construct_UFunction_UDetailGroupBlueprintLibrary_HeaderRow, "HeaderRow" }, // 1437356560
		{ &Z_Construct_UFunction_UDetailGroupBlueprintLibrary_IsValid, "IsValid" }, // 4135785393
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailGroupBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DetailCustomization/DetailGroupHandle.h" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailGroupHandle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDetailGroupBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetailGroupBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDetailGroupBlueprintLibrary_Statics::ClassParams = {
		&UDetailGroupBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDetailGroupBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailGroupBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDetailGroupBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDetailGroupBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDetailGroupBlueprintLibrary, 4120459106);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UDetailGroupBlueprintLibrary>()
	{
		return UDetailGroupBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDetailGroupBlueprintLibrary(Z_Construct_UClass_UDetailGroupBlueprintLibrary, &UDetailGroupBlueprintLibrary::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UDetailGroupBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDetailGroupBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
