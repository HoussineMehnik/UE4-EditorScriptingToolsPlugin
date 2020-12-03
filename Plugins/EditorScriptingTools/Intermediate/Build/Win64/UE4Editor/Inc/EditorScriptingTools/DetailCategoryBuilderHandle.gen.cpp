// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/DetailCustomization/DetailCategoryBuilderHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetailCategoryBuilderHandle() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserWidget_NoRegister();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EDetailPropertyLocation();
// End Cross Module References
class UScriptStruct* FDetailCategoryBuilderHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle, Z_Construct_UPackage__Script_EditorScriptingTools(), TEXT("DetailCategoryBuilderHandle"), sizeof(FDetailCategoryBuilderHandle), Get_Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGTOOLS_API UScriptStruct* StaticStruct<FDetailCategoryBuilderHandle>()
{
	return FDetailCategoryBuilderHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDetailCategoryBuilderHandle(FDetailCategoryBuilderHandle::StaticStruct, TEXT("/Script/EditorScriptingTools"), TEXT("DetailCategoryBuilderHandle"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingTools_StaticRegisterNativesFDetailCategoryBuilderHandle
{
	FScriptStruct_EditorScriptingTools_StaticRegisterNativesFDetailCategoryBuilderHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DetailCategoryBuilderHandle")),new UScriptStruct::TCppStructOps<FDetailCategoryBuilderHandle>);
	}
} ScriptStruct_EditorScriptingTools_StaticRegisterNativesFDetailCategoryBuilderHandle;
	struct Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCategoryBuilderHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDetailCategoryBuilderHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
		nullptr,
		&NewStructOps,
		"DetailCategoryBuilderHandle",
		sizeof(FDetailCategoryBuilderHandle),
		alignof(FDetailCategoryBuilderHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DetailCategoryBuilderHandle"), sizeof(FDetailCategoryBuilderHandle), Get_Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle_Hash() { return 2591474869U; }
	DEFINE_FUNCTION(UDetailCategoryBuilderBlueprintLibrary::execGetDisplayName)
	{
		P_GET_STRUCT_REF(FDetailCategoryBuilderHandle,Z_Param_Out_CategoryBuilderHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UDetailCategoryBuilderBlueprintLibrary::GetDisplayName(Z_Param_Out_CategoryBuilderHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailCategoryBuilderBlueprintLibrary::execAddProperty)
	{
		P_GET_STRUCT_REF(FDetailCategoryBuilderHandle,Z_Param_Out_CategoryBuilderHandle);
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyPath);
		P_GET_ENUM(EDetailPropertyLocation,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDetailCategoryBuilderBlueprintLibrary::AddProperty(Z_Param_Out_CategoryBuilderHandle,Z_Param_PropertyPath,EDetailPropertyLocation(Z_Param_Location));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailCategoryBuilderBlueprintLibrary::execAddHeaderContent)
	{
		P_GET_STRUCT_REF(FDetailCategoryBuilderHandle,Z_Param_Out_CategoryBuilderHandle);
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEditorUserWidget**)Z_Param__Result=UDetailCategoryBuilderBlueprintLibrary::AddHeaderContent(Z_Param_Out_CategoryBuilderHandle,Z_Param_WidgetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailCategoryBuilderBlueprintLibrary::execAddCustomRowWidgets)
	{
		P_GET_STRUCT_REF(FDetailCategoryBuilderHandle,Z_Param_Out_CategoryBuilderHandle);
		P_GET_OBJECT_REF(UEditorUserWidget,Z_Param_Out_OutNameColumnWidget);
		P_GET_OBJECT_REF(UEditorUserWidget,Z_Param_Out_OutValueColumnWidget);
		P_GET_OBJECT(UClass,Z_Param_NameColumnWidgetClass);
		P_GET_OBJECT(UClass,Z_Param_ValueColumnWidgetClass);
		P_GET_PROPERTY(FTextProperty,Z_Param_FilterString);
		P_GET_UBOOL(Z_Param_bIsAdvanced);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDetailCategoryBuilderBlueprintLibrary::AddCustomRowWidgets(Z_Param_Out_CategoryBuilderHandle,Z_Param_Out_OutNameColumnWidget,Z_Param_Out_OutValueColumnWidget,Z_Param_NameColumnWidgetClass,Z_Param_ValueColumnWidgetClass,Z_Param_FilterString,Z_Param_bIsAdvanced);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailCategoryBuilderBlueprintLibrary::execAddCustomRowWidget)
	{
		P_GET_STRUCT_REF(FDetailCategoryBuilderHandle,Z_Param_Out_CategoryBuilderHandle);
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_GET_PROPERTY(FTextProperty,Z_Param_FilterString);
		P_GET_UBOOL(Z_Param_bIsAdvanced);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEditorUserWidget**)Z_Param__Result=UDetailCategoryBuilderBlueprintLibrary::AddCustomRowWidget(Z_Param_Out_CategoryBuilderHandle,Z_Param_WidgetClass,Z_Param_FilterString,Z_Param_bIsAdvanced);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailCategoryBuilderBlueprintLibrary::execSetInitiallyCollapsed)
	{
		P_GET_STRUCT_REF(FDetailCategoryBuilderHandle,Z_Param_Out_CategoryBuilderHandle);
		P_GET_UBOOL(Z_Param_bShouldBeInitiallyCollapsed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDetailCategoryBuilderBlueprintLibrary::SetInitiallyCollapsed(Z_Param_Out_CategoryBuilderHandle,Z_Param_bShouldBeInitiallyCollapsed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailCategoryBuilderBlueprintLibrary::execIsValid)
	{
		P_GET_STRUCT_REF(FDetailCategoryBuilderHandle,Z_Param_Out_CategoryBuilderHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDetailCategoryBuilderBlueprintLibrary::IsValid(Z_Param_Out_CategoryBuilderHandle);
		P_NATIVE_END;
	}
	void UDetailCategoryBuilderBlueprintLibrary::StaticRegisterNativesUDetailCategoryBuilderBlueprintLibrary()
	{
		UClass* Class = UDetailCategoryBuilderBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCustomRowWidget", &UDetailCategoryBuilderBlueprintLibrary::execAddCustomRowWidget },
			{ "AddCustomRowWidgets", &UDetailCategoryBuilderBlueprintLibrary::execAddCustomRowWidgets },
			{ "AddHeaderContent", &UDetailCategoryBuilderBlueprintLibrary::execAddHeaderContent },
			{ "AddProperty", &UDetailCategoryBuilderBlueprintLibrary::execAddProperty },
			{ "GetDisplayName", &UDetailCategoryBuilderBlueprintLibrary::execGetDisplayName },
			{ "IsValid", &UDetailCategoryBuilderBlueprintLibrary::execIsValid },
			{ "SetInitiallyCollapsed", &UDetailCategoryBuilderBlueprintLibrary::execSetInitiallyCollapsed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics
	{
		struct DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidget_Parms
		{
			FDetailCategoryBuilderHandle CategoryBuilderHandle;
			TSubclassOf<UEditorUserWidget>  WidgetClass;
			FText FilterString;
			bool bIsAdvanced;
			UEditorUserWidget* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryBuilderHandle;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FilterString;
		static void NewProp_bIsAdvanced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAdvanced;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::NewProp_CategoryBuilderHandle = { "CategoryBuilderHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidget_Parms, CategoryBuilderHandle), Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidget_Parms, WidgetClass), Z_Construct_UClass_UEditorUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::NewProp_FilterString = { "FilterString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidget_Parms, FilterString), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::NewProp_bIsAdvanced_SetBit(void* Obj)
	{
		((DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidget_Parms*)Obj)->bIsAdvanced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::NewProp_bIsAdvanced = { "bIsAdvanced", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidget_Parms), &Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::NewProp_bIsAdvanced_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidget_Parms, ReturnValue), Z_Construct_UClass_UEditorUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::NewProp_CategoryBuilderHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::NewProp_FilterString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::NewProp_bIsAdvanced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization | Category Builder" },
		{ "Comment", "/**\n\x09 * Adds a custom widget row to the edited category ( Whole row widget )\n\x09 *\n\x09 * @param WidgetClass\x09\x09 UMG widget class\n\x09 * @param FilterString\x09\x09 A string which is used to filter this custom row when a user types into the details panel search box\n\x09 * @param bForAdvanced\x09\x09 Whether the widget should appear in the advanced section\n\x09 */" },
		{ "CPP_Default_bIsAdvanced", "false" },
		{ "DeterminesOutputType", "WidgetClass" },
		{ "DisplayName", "Add Category Row Widget" },
		{ "Keywords", "add create category row widget" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCategoryBuilderHandle.h" },
		{ "ToolTip", "Adds a custom widget row to the edited category ( Whole row widget )\n\n@param WidgetClass            UMG widget class\n@param FilterString           A string which is used to filter this custom row when a user types into the details panel search box\n@param bForAdvanced           Whether the widget should appear in the advanced section" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary, nullptr, "AddCustomRowWidget", nullptr, nullptr, sizeof(DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidget_Parms), Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics
	{
		struct DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidgets_Parms
		{
			FDetailCategoryBuilderHandle CategoryBuilderHandle;
			UEditorUserWidget* OutNameColumnWidget;
			UEditorUserWidget* OutValueColumnWidget;
			TSubclassOf<UEditorUserWidget>  NameColumnWidgetClass;
			TSubclassOf<UEditorUserWidget>  ValueColumnWidgetClass;
			FText FilterString;
			bool bIsAdvanced;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryBuilderHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutNameColumnWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutNameColumnWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutValueColumnWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutValueColumnWidget;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NameColumnWidgetClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ValueColumnWidgetClass;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FilterString;
		static void NewProp_bIsAdvanced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAdvanced;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_CategoryBuilderHandle = { "CategoryBuilderHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidgets_Parms, CategoryBuilderHandle), Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_OutNameColumnWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_OutNameColumnWidget = { "OutNameColumnWidget", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidgets_Parms, OutNameColumnWidget), Z_Construct_UClass_UEditorUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_OutNameColumnWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_OutNameColumnWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_OutValueColumnWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_OutValueColumnWidget = { "OutValueColumnWidget", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidgets_Parms, OutValueColumnWidget), Z_Construct_UClass_UEditorUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_OutValueColumnWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_OutValueColumnWidget_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_NameColumnWidgetClass = { "NameColumnWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidgets_Parms, NameColumnWidgetClass), Z_Construct_UClass_UEditorUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_ValueColumnWidgetClass = { "ValueColumnWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidgets_Parms, ValueColumnWidgetClass), Z_Construct_UClass_UEditorUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_FilterString = { "FilterString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidgets_Parms, FilterString), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_bIsAdvanced_SetBit(void* Obj)
	{
		((DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidgets_Parms*)Obj)->bIsAdvanced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_bIsAdvanced = { "bIsAdvanced", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidgets_Parms), &Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_bIsAdvanced_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_CategoryBuilderHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_OutNameColumnWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_OutValueColumnWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_NameColumnWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_ValueColumnWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_FilterString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::NewProp_bIsAdvanced,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization | Category Builder" },
		{ "Comment", "/**\n\x09 * Adds a custom widgets row to the edited category ( Name and Value columns widgets )\n\x09 *\n\x09 * @param OutNameColumnWidget\x09 Created name column widget\n\x09 * @param OutValueColumnWidget   Created value column widget\n\x09 * @param NameColumnWidget\x09\x09 Name column UMG widget class ( null value will generate an empty widget )\n\x09 * @param ValueColumnWidget\x09\x09 Value column UMG widget class ( null value will generate an empty widget )\n\x09 * @param FilterString\x09\x09\x09 A string which is used to filter this custom row when a user types into the details panel search box\n\x09 * @param bForAdvanced\x09\x09\x09 Whether the widget should appear in the advanced section\n\x09 */" },
		{ "CPP_Default_bIsAdvanced", "false" },
		{ "DisplayName", "Add Category Row Name And Value Widgets" },
		{ "Keywords", "add create category name value content column widget" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCategoryBuilderHandle.h" },
		{ "ToolTip", "Adds a custom widgets row to the edited category ( Name and Value columns widgets )\n\n@param OutNameColumnWidget    Created name column widget\n@param OutValueColumnWidget   Created value column widget\n@param NameColumnWidget               Name column UMG widget class ( null value will generate an empty widget )\n@param ValueColumnWidget              Value column UMG widget class ( null value will generate an empty widget )\n@param FilterString                   A string which is used to filter this custom row when a user types into the details panel search box\n@param bForAdvanced                   Whether the widget should appear in the advanced section" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary, nullptr, "AddCustomRowWidgets", nullptr, nullptr, sizeof(DetailCategoryBuilderBlueprintLibrary_eventAddCustomRowWidgets_Parms), Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics
	{
		struct DetailCategoryBuilderBlueprintLibrary_eventAddHeaderContent_Parms
		{
			FDetailCategoryBuilderHandle CategoryBuilderHandle;
			TSubclassOf<UEditorUserWidget>  WidgetClass;
			UEditorUserWidget* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryBuilderHandle;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics::NewProp_CategoryBuilderHandle = { "CategoryBuilderHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventAddHeaderContent_Parms, CategoryBuilderHandle), Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventAddHeaderContent_Parms, WidgetClass), Z_Construct_UClass_UEditorUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventAddHeaderContent_Parms, ReturnValue), Z_Construct_UClass_UEditorUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics::NewProp_CategoryBuilderHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization | Category Builder" },
		{ "Comment", "/**\n\x09 * Adds header content to the category\n\x09 *\n\x09 * @param WidgetClass\x09The header content widget class\n\x09 */" },
		{ "DeterminesOutputType", "WidgetClass" },
		{ "DisplayName", "Add Header Content Widget" },
		{ "Keywords", "add create category header widget" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCategoryBuilderHandle.h" },
		{ "ToolTip", "Adds header content to the category\n\n@param WidgetClass   The header content widget class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary, nullptr, "AddHeaderContent", nullptr, nullptr, sizeof(DetailCategoryBuilderBlueprintLibrary_eventAddHeaderContent_Parms), Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty_Statics
	{
		struct DetailCategoryBuilderBlueprintLibrary_eventAddProperty_Parms
		{
			FDetailCategoryBuilderHandle CategoryBuilderHandle;
			FName PropertyPath;
			EDetailPropertyLocation Location;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryBuilderHandle;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyPath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Location_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty_Statics::NewProp_CategoryBuilderHandle = { "CategoryBuilderHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventAddProperty_Parms, CategoryBuilderHandle), Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventAddProperty_Parms, PropertyPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty_Statics::NewProp_Location_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventAddProperty_Parms, Location), Z_Construct_UEnum_EditorScriptingTools_EDetailPropertyLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty_Statics::NewProp_CategoryBuilderHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty_Statics::NewProp_PropertyPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty_Statics::NewProp_Location_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization | Category Builder" },
		{ "Comment", "/**\n\x09 * Adds a property, shown in the default way to the category\n\x09 *\n\x09 * @param PropertyHandle\x09\x09The handle to the property to add\n\x09 * @param Location\x09\x09\x09\x09The location within the category where the property is shown\n\x09 */" },
		{ "CPP_Default_Location", "Default" },
		{ "DisplayName", "Add Property" },
		{ "Keywords", "add property" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCategoryBuilderHandle.h" },
		{ "ToolTip", "Adds a property, shown in the default way to the category\n\n@param PropertyHandle                The handle to the property to add\n@param Location                              The location within the category where the property is shown" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary, nullptr, "AddProperty", nullptr, nullptr, sizeof(DetailCategoryBuilderBlueprintLibrary_eventAddProperty_Parms), Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_GetDisplayName_Statics
	{
		struct DetailCategoryBuilderBlueprintLibrary_eventGetDisplayName_Parms
		{
			FDetailCategoryBuilderHandle CategoryBuilderHandle;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryBuilderHandle;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_GetDisplayName_Statics::NewProp_CategoryBuilderHandle = { "CategoryBuilderHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventGetDisplayName_Parms, CategoryBuilderHandle), Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_GetDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_GetDisplayName_Statics::NewProp_CategoryBuilderHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization | Category Builder" },
		{ "Comment", "/**\n\x09 * @return The localized display name of the category\n\x09 */" },
		{ "DisplayName", "Get Display Name" },
		{ "Keywords", "get name string display category" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCategoryBuilderHandle.h" },
		{ "ToolTip", "@return The localized display name of the category" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(DetailCategoryBuilderBlueprintLibrary_eventGetDisplayName_Parms), Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_IsValid_Statics
	{
		struct DetailCategoryBuilderBlueprintLibrary_eventIsValid_Parms
		{
			FDetailCategoryBuilderHandle CategoryBuilderHandle;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryBuilderHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_IsValid_Statics::NewProp_CategoryBuilderHandle = { "CategoryBuilderHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventIsValid_Parms, CategoryBuilderHandle), Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DetailCategoryBuilderBlueprintLibrary_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetailCategoryBuilderBlueprintLibrary_eventIsValid_Parms), &Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_IsValid_Statics::NewProp_CategoryBuilderHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization | Category Builder" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCategoryBuilderHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary, nullptr, "IsValid", nullptr, nullptr, sizeof(DetailCategoryBuilderBlueprintLibrary_eventIsValid_Parms), Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_SetInitiallyCollapsed_Statics
	{
		struct DetailCategoryBuilderBlueprintLibrary_eventSetInitiallyCollapsed_Parms
		{
			FDetailCategoryBuilderHandle CategoryBuilderHandle;
			bool bShouldBeInitiallyCollapsed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryBuilderHandle;
		static void NewProp_bShouldBeInitiallyCollapsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeInitiallyCollapsed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_SetInitiallyCollapsed_Statics::NewProp_CategoryBuilderHandle = { "CategoryBuilderHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCategoryBuilderBlueprintLibrary_eventSetInitiallyCollapsed_Parms, CategoryBuilderHandle), Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_SetInitiallyCollapsed_Statics::NewProp_bShouldBeInitiallyCollapsed_SetBit(void* Obj)
	{
		((DetailCategoryBuilderBlueprintLibrary_eventSetInitiallyCollapsed_Parms*)Obj)->bShouldBeInitiallyCollapsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_SetInitiallyCollapsed_Statics::NewProp_bShouldBeInitiallyCollapsed = { "bShouldBeInitiallyCollapsed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetailCategoryBuilderBlueprintLibrary_eventSetInitiallyCollapsed_Parms), &Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_SetInitiallyCollapsed_Statics::NewProp_bShouldBeInitiallyCollapsed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_SetInitiallyCollapsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_SetInitiallyCollapsed_Statics::NewProp_CategoryBuilderHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_SetInitiallyCollapsed_Statics::NewProp_bShouldBeInitiallyCollapsed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_SetInitiallyCollapsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization | Category Builder" },
		{ "Comment", "/**\n\x09 * Whether or not the category should be initially collapsed\n\x09 */" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCategoryBuilderHandle.h" },
		{ "ToolTip", "Whether or not the category should be initially collapsed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_SetInitiallyCollapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary, nullptr, "SetInitiallyCollapsed", nullptr, nullptr, sizeof(DetailCategoryBuilderBlueprintLibrary_eventSetInitiallyCollapsed_Parms), Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_SetInitiallyCollapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_SetInitiallyCollapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_SetInitiallyCollapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_SetInitiallyCollapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_SetInitiallyCollapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_SetInitiallyCollapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary_NoRegister()
	{
		return UDetailCategoryBuilderBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidget, "AddCustomRowWidget" }, // 4288936417
		{ &Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddCustomRowWidgets, "AddCustomRowWidgets" }, // 1727548535
		{ &Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddHeaderContent, "AddHeaderContent" }, // 4275322325
		{ &Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_AddProperty, "AddProperty" }, // 930276475
		{ &Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_GetDisplayName, "GetDisplayName" }, // 1689048633
		{ &Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_IsValid, "IsValid" }, // 2822013539
		{ &Z_Construct_UFunction_UDetailCategoryBuilderBlueprintLibrary_SetInitiallyCollapsed, "SetInitiallyCollapsed" }, // 104396021
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DetailCustomization/DetailCategoryBuilderHandle.h" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCategoryBuilderHandle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetailCategoryBuilderBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary_Statics::ClassParams = {
		&UDetailCategoryBuilderBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDetailCategoryBuilderBlueprintLibrary, 2324081010);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UDetailCategoryBuilderBlueprintLibrary>()
	{
		return UDetailCategoryBuilderBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDetailCategoryBuilderBlueprintLibrary(Z_Construct_UClass_UDetailCategoryBuilderBlueprintLibrary, &UDetailCategoryBuilderBlueprintLibrary::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UDetailCategoryBuilderBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDetailCategoryBuilderBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
