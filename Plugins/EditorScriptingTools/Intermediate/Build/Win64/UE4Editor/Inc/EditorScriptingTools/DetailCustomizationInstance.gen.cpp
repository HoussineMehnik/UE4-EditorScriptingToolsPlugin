// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/DetailCustomization/DetailCustomizationInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetailCustomizationInstance() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UDetailCustomizationInstance_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UDetailCustomizationInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EDetailCategoryPriority();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FEditablePropertyInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EDITORSCRIPTINGTOOLS_API UEnum* Z_Construct_UEnum_EditorScriptingTools_EDetailsViewPropertyChangeType();
// End Cross Module References
	DEFINE_FUNCTION(UDetailCustomizationInstance::execEditCategory)
	{
		P_GET_STRUCT_REF(FDetailCategoryBuilderHandle,Z_Param_Out_OutCategoryBuilderHandle);
		P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
		P_GET_PROPERTY(FTextProperty,Z_Param_InDisplayName);
		P_GET_ENUM(EDetailCategoryPriority,Z_Param_CategoryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EditCategory(Z_Param_Out_OutCategoryBuilderHandle,Z_Param_CategoryName,Z_Param_InDisplayName,EDetailCategoryPriority(Z_Param_CategoryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailCustomizationInstance::execGetAllEditablePropertyInfos)
	{
		P_GET_TARRAY_REF(FEditablePropertyInfo,Z_Param_Out_OutInfos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllEditablePropertyInfos(Z_Param_Out_OutInfos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailCustomizationInstance::execGetEditablePropertyInfosByClass)
	{
		P_GET_TARRAY_REF(FEditablePropertyInfo,Z_Param_Out_OutInfos);
		P_GET_OBJECT(UClass,Z_Param_PropertyOwnerClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEditablePropertyInfosByClass(Z_Param_Out_OutInfos,Z_Param_PropertyOwnerClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailCustomizationInstance::execHideProperty)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_HiddenPropertyName);
		P_GET_OBJECT(UClass,Z_Param_PropertyOwnerClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HideProperty(Z_Param_HiddenPropertyName,Z_Param_PropertyOwnerClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailCustomizationInstance::execGetCategoryNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutCategoryNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCategoryNames(Z_Param_Out_OutCategoryNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailCustomizationInstance::execHideCategory)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_HiddenCategoryName);
		P_GET_UBOOL(Z_Param_bCheckIfCategoryExists);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HideCategory(Z_Param_HiddenCategoryName,Z_Param_bCheckIfCategoryExists);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailCustomizationInstance::execRefreshDetails)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RefreshDetails();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailCustomizationInstance::execGetCustomizedActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomizedActors(Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailCustomizationInstance::execGetCustomizedObjects)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomizedObjects(Z_Param_Out_OutObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailCustomizationInstance::execGetCustomizedClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetCustomizedClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDetailCustomizationInstance::execSaveConfigProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveConfigProperties();
		P_NATIVE_END;
	}
	static FName NAME_UDetailCustomizationInstance_OnChangingPropertyFinished = FName(TEXT("OnChangingPropertyFinished"));
	void UDetailCustomizationInstance::OnChangingPropertyFinished(FName PropertyName, FName MemberPropertyName, EDetailsViewPropertyChangeType::Type ChangeType)
	{
		DetailCustomizationInstance_eventOnChangingPropertyFinished_Parms Parms;
		Parms.PropertyName=PropertyName;
		Parms.MemberPropertyName=MemberPropertyName;
		Parms.ChangeType=ChangeType;
		ProcessEvent(FindFunctionChecked(NAME_UDetailCustomizationInstance_OnChangingPropertyFinished),&Parms);
	}
	static FName NAME_UDetailCustomizationInstance_OnCustomizeDetails = FName(TEXT("OnCustomizeDetails"));
	void UDetailCustomizationInstance::OnCustomizeDetails(TArray<UObject*> const& CustomizedObjects)
	{
		DetailCustomizationInstance_eventOnCustomizeDetails_Parms Parms;
		Parms.CustomizedObjects=CustomizedObjects;
		ProcessEvent(FindFunctionChecked(NAME_UDetailCustomizationInstance_OnCustomizeDetails),&Parms);
	}
	static FName NAME_UDetailCustomizationInstance_OnCustomizeDetailsEnd = FName(TEXT("OnCustomizeDetailsEnd"));
	void UDetailCustomizationInstance::OnCustomizeDetailsEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDetailCustomizationInstance_OnCustomizeDetailsEnd),NULL);
	}
	void UDetailCustomizationInstance::StaticRegisterNativesUDetailCustomizationInstance()
	{
		UClass* Class = UDetailCustomizationInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditCategory", &UDetailCustomizationInstance::execEditCategory },
			{ "GetAllEditablePropertyInfos", &UDetailCustomizationInstance::execGetAllEditablePropertyInfos },
			{ "GetCategoryNames", &UDetailCustomizationInstance::execGetCategoryNames },
			{ "GetCustomizedActors", &UDetailCustomizationInstance::execGetCustomizedActors },
			{ "GetCustomizedClass", &UDetailCustomizationInstance::execGetCustomizedClass },
			{ "GetCustomizedObjects", &UDetailCustomizationInstance::execGetCustomizedObjects },
			{ "GetEditablePropertyInfosByClass", &UDetailCustomizationInstance::execGetEditablePropertyInfosByClass },
			{ "HideCategory", &UDetailCustomizationInstance::execHideCategory },
			{ "HideProperty", &UDetailCustomizationInstance::execHideProperty },
			{ "RefreshDetails", &UDetailCustomizationInstance::execRefreshDetails },
			{ "SaveConfigProperties", &UDetailCustomizationInstance::execSaveConfigProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics
	{
		struct DetailCustomizationInstance_eventEditCategory_Parms
		{
			FDetailCategoryBuilderHandle OutCategoryBuilderHandle;
			FName CategoryName;
			FText InDisplayName;
			EDetailCategoryPriority CategoryType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCategoryBuilderHandle;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InDisplayName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CategoryType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CategoryType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::NewProp_OutCategoryBuilderHandle = { "OutCategoryBuilderHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventEditCategory_Parms, OutCategoryBuilderHandle), Z_Construct_UScriptStruct_FDetailCategoryBuilderHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventEditCategory_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::NewProp_InDisplayName = { "InDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventEditCategory_Parms, InDisplayName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::NewProp_CategoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::NewProp_CategoryType = { "CategoryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventEditCategory_Parms, CategoryType), Z_Construct_UEnum_EditorScriptingTools_EDetailCategoryPriority, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DetailCustomizationInstance_eventEditCategory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetailCustomizationInstance_eventEditCategory_Parms), &Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::NewProp_OutCategoryBuilderHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::NewProp_InDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::NewProp_CategoryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::NewProp_CategoryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization" },
		{ "Comment", "/**\n\x09 * Edits an existing category or creates a new one\n\x09 *\n\x09 * @param CategoryName\x09\x09\x09\x09The name of the category\n\x09 * @param DisplayName\x09The new display name of the category (optional)\n\x09 * @param CategoryType\x09\x09\x09\x09""Category type to define sort order.  Category display order is sorted by this type (optional)\n\x09 */" },
		{ "CPP_Default_CategoryType", "Default" },
		{ "CPP_Default_InDisplayName", "" },
		{ "DisplayName", "Edit Category" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationInstance.h" },
		{ "ToolTip", "Edits an existing category or creates a new one\n\n@param CategoryName                          The name of the category\n@param DisplayName   The new display name of the category (optional)\n@param CategoryType                          Category type to define sort order.  Category display order is sorted by this type (optional)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCustomizationInstance, nullptr, "EditCategory", nullptr, nullptr, sizeof(DetailCustomizationInstance_eventEditCategory_Parms), Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos_Statics
	{
		struct DetailCustomizationInstance_eventGetAllEditablePropertyInfos_Parms
		{
			TArray<FEditablePropertyInfo> OutInfos;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutInfos_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutInfos;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos_Statics::NewProp_OutInfos_Inner = { "OutInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditablePropertyInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos_Statics::NewProp_OutInfos = { "OutInfos", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventGetAllEditablePropertyInfos_Parms, OutInfos), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DetailCustomizationInstance_eventGetAllEditablePropertyInfos_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetailCustomizationInstance_eventGetAllEditablePropertyInfos_Parms), &Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos_Statics::NewProp_OutInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos_Statics::NewProp_OutInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization" },
		{ "DisplayName", "Get All Editable Property Infos" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCustomizationInstance, nullptr, "GetAllEditablePropertyInfos", nullptr, nullptr, sizeof(DetailCustomizationInstance_eventGetAllEditablePropertyInfos_Parms), Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames_Statics
	{
		struct DetailCustomizationInstance_eventGetCategoryNames_Parms
		{
			TArray<FName> OutCategoryNames;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutCategoryNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutCategoryNames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames_Statics::NewProp_OutCategoryNames_Inner = { "OutCategoryNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames_Statics::NewProp_OutCategoryNames = { "OutCategoryNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventGetCategoryNames_Parms, OutCategoryNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DetailCustomizationInstance_eventGetCategoryNames_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetailCustomizationInstance_eventGetCategoryNames_Parms), &Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames_Statics::NewProp_OutCategoryNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames_Statics::NewProp_OutCategoryNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization" },
		{ "Comment", "/**\n\x09 * Gets the current set of existing category names. This includes both categories derived from properties and categories added via EditCategory.\n\x09 * @param\x09OutCategoryNames\x09 The array of category names\n\x09 */" },
		{ "DisplayName", "Get Category Names" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationInstance.h" },
		{ "ToolTip", "Gets the current set of existing category names. This includes both categories derived from properties and categories added via EditCategory.\n@param       OutCategoryNames         The array of category names" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCustomizationInstance, nullptr, "GetCategoryNames", nullptr, nullptr, sizeof(DetailCustomizationInstance_eventGetCategoryNames_Parms), Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors_Statics
	{
		struct DetailCustomizationInstance_eventGetCustomizedActors_Parms
		{
			TArray<AActor*> OutActors;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventGetCustomizedActors_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DetailCustomizationInstance_eventGetCustomizedActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetailCustomizationInstance_eventGetCustomizedActors_Parms), &Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors_Statics::NewProp_OutActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization" },
		{ "Comment", "/** Gets the current actor(s) being customized by this builder. */" },
		{ "DisplayName", "Get Customized Actors" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationInstance.h" },
		{ "ToolTip", "Gets the current actor(s) being customized by this builder." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCustomizationInstance, nullptr, "GetCustomizedActors", nullptr, nullptr, sizeof(DetailCustomizationInstance_eventGetCustomizedActors_Parms), Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedClass_Statics
	{
		struct DetailCustomizationInstance_eventGetCustomizedClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventGetCustomizedClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization" },
		{ "Comment", "/**\n\x09 * Gets the class being customized by this builder\n\x09 *\n\x09 */" },
		{ "DisplayName", "Get Customized Class" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationInstance.h" },
		{ "ToolTip", "Gets the class being customized by this builder" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCustomizationInstance, nullptr, "GetCustomizedClass", nullptr, nullptr, sizeof(DetailCustomizationInstance_eventGetCustomizedClass_Parms), Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects_Statics
	{
		struct DetailCustomizationInstance_eventGetCustomizedObjects_Parms
		{
			TArray<UObject*> OutObjects;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutObjects_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutObjects;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects_Statics::NewProp_OutObjects_Inner = { "OutObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects_Statics::NewProp_OutObjects = { "OutObjects", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventGetCustomizedObjects_Parms, OutObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DetailCustomizationInstance_eventGetCustomizedObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetailCustomizationInstance_eventGetCustomizedObjects_Parms), &Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects_Statics::NewProp_OutObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects_Statics::NewProp_OutObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization" },
		{ "Comment", "/**\n\x09 * Gets the current object(s) being customized by this builder\n\x09 *\n\x09 * If this is a sub-object customization it will return those sub objects.  Otherwise the root objects will be returned.\n\x09 */" },
		{ "DisplayName", "Get Customized Objects" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationInstance.h" },
		{ "ToolTip", "Gets the current object(s) being customized by this builder\n\nIf this is a sub-object customization it will return those sub objects.  Otherwise the root objects will be returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCustomizationInstance, nullptr, "GetCustomizedObjects", nullptr, nullptr, sizeof(DetailCustomizationInstance_eventGetCustomizedObjects_Parms), Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics
	{
		struct DetailCustomizationInstance_eventGetEditablePropertyInfosByClass_Parms
		{
			TArray<FEditablePropertyInfo> OutInfos;
			TSubclassOf<UObject>  PropertyOwnerClass;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutInfos_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutInfos;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PropertyOwnerClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::NewProp_OutInfos_Inner = { "OutInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditablePropertyInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::NewProp_OutInfos = { "OutInfos", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventGetEditablePropertyInfosByClass_Parms, OutInfos), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::NewProp_PropertyOwnerClass = { "PropertyOwnerClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventGetEditablePropertyInfosByClass_Parms, PropertyOwnerClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DetailCustomizationInstance_eventGetEditablePropertyInfosByClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetailCustomizationInstance_eventGetEditablePropertyInfosByClass_Parms), &Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::NewProp_OutInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::NewProp_OutInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::NewProp_PropertyOwnerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization" },
		{ "DisplayName", "Get Editable Property Infos By Class" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCustomizationInstance, nullptr, "GetEditablePropertyInfosByClass", nullptr, nullptr, sizeof(DetailCustomizationInstance_eventGetEditablePropertyInfosByClass_Parms), Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics
	{
		struct DetailCustomizationInstance_eventHideCategory_Parms
		{
			FName HiddenCategoryName;
			bool bCheckIfCategoryExists;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HiddenCategoryName;
		static void NewProp_bCheckIfCategoryExists_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckIfCategoryExists;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::NewProp_HiddenCategoryName = { "HiddenCategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventHideCategory_Parms, HiddenCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::NewProp_bCheckIfCategoryExists_SetBit(void* Obj)
	{
		((DetailCustomizationInstance_eventHideCategory_Parms*)Obj)->bCheckIfCategoryExists = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::NewProp_bCheckIfCategoryExists = { "bCheckIfCategoryExists", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetailCustomizationInstance_eventHideCategory_Parms), &Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::NewProp_bCheckIfCategoryExists_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DetailCustomizationInstance_eventHideCategory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetailCustomizationInstance_eventHideCategory_Parms), &Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::NewProp_HiddenCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::NewProp_bCheckIfCategoryExists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization" },
		{ "Comment", "/**\n\x09 * Hides an entire category\n\x09 *\n\x09 * @param CategoryName\x09The name of the category to hide\n\x09 */" },
		{ "CPP_Default_bCheckIfCategoryExists", "false" },
		{ "DisplayName", "Hide Category" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationInstance.h" },
		{ "ToolTip", "Hides an entire category\n\n@param CategoryName  The name of the category to hide" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCustomizationInstance, nullptr, "HideCategory", nullptr, nullptr, sizeof(DetailCustomizationInstance_eventHideCategory_Parms), Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty_Statics
	{
		struct DetailCustomizationInstance_eventHideProperty_Parms
		{
			FName HiddenPropertyName;
			TSubclassOf<UObject>  PropertyOwnerClass;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HiddenPropertyName;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PropertyOwnerClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty_Statics::NewProp_HiddenPropertyName = { "HiddenPropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventHideProperty_Parms, HiddenPropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty_Statics::NewProp_PropertyOwnerClass = { "PropertyOwnerClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventHideProperty_Parms, PropertyOwnerClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DetailCustomizationInstance_eventHideProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetailCustomizationInstance_eventHideProperty_Parms), &Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty_Statics::NewProp_HiddenPropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty_Statics::NewProp_PropertyOwnerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization" },
		{ "Comment", "/**\n\x09 * Marks this property has hidden by customization (will not show up in the default place)\n\x09 */" },
		{ "DisplayName", "Hide Property" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationInstance.h" },
		{ "ToolTip", "Marks this property has hidden by customization (will not show up in the default place)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCustomizationInstance, nullptr, "HideProperty", nullptr, nullptr, sizeof(DetailCustomizationInstance_eventHideProperty_Parms), Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCustomizationInstance_OnChangingPropertyFinished_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MemberPropertyName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChangeType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_OnChangingPropertyFinished_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventOnChangingPropertyFinished_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_OnChangingPropertyFinished_Statics::NewProp_MemberPropertyName = { "MemberPropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventOnChangingPropertyFinished_Parms, MemberPropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_OnChangingPropertyFinished_Statics::NewProp_ChangeType = { "ChangeType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventOnChangingPropertyFinished_Parms, ChangeType), Z_Construct_UEnum_EditorScriptingTools_EDetailsViewPropertyChangeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCustomizationInstance_OnChangingPropertyFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_OnChangingPropertyFinished_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_OnChangingPropertyFinished_Statics::NewProp_MemberPropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_OnChangingPropertyFinished_Statics::NewProp_ChangeType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCustomizationInstance_OnChangingPropertyFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization" },
		{ "Comment", "/**\n\x09 * Called after properties have been edited and PostEditChange has been called on all objects.\n\x09 * This can be used to safely make changes to data that the details panel is observing instead of during PostEditChange (which is\n\x09 * unsafe)\n\x09 */" },
		{ "DisplayName", "On Post Changing Property" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationInstance.h" },
		{ "ToolTip", "Called after properties have been edited and PostEditChange has been called on all objects.\nThis can be used to safely make changes to data that the details panel is observing instead of during PostEditChange (which is\nunsafe)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCustomizationInstance_OnChangingPropertyFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCustomizationInstance, nullptr, "OnChangingPropertyFinished", nullptr, nullptr, sizeof(DetailCustomizationInstance_eventOnChangingPropertyFinished_Parms), Z_Construct_UFunction_UDetailCustomizationInstance_OnChangingPropertyFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_OnChangingPropertyFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCustomizationInstance_OnChangingPropertyFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_OnChangingPropertyFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCustomizationInstance_OnChangingPropertyFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCustomizationInstance_OnChangingPropertyFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomizedObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomizedObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails_Statics::NewProp_CustomizedObjects_Inner = { "CustomizedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails_Statics::NewProp_CustomizedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails_Statics::NewProp_CustomizedObjects = { "CustomizedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetailCustomizationInstance_eventOnCustomizeDetails_Parms, CustomizedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails_Statics::NewProp_CustomizedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails_Statics::NewProp_CustomizedObjects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails_Statics::NewProp_CustomizedObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails_Statics::NewProp_CustomizedObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization" },
		{ "Comment", "/** Called when details should be customized */" },
		{ "DisplayName", "On Customize Details" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationInstance.h" },
		{ "ToolTip", "Called when details should be customized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCustomizationInstance, nullptr, "OnCustomizeDetails", nullptr, nullptr, sizeof(DetailCustomizationInstance_eventOnCustomizeDetails_Parms), Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetailsEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetailsEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization" },
		{ "Comment", "/** Called when no longer used and will be deleted */" },
		{ "DisplayName", "On Customize Details End" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationInstance.h" },
		{ "ToolTip", "Called when no longer used and will be deleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetailsEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCustomizationInstance, nullptr, "OnCustomizeDetailsEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetailsEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetailsEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetailsEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetailsEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCustomizationInstance_RefreshDetails_Statics
	{
		struct DetailCustomizationInstance_eventRefreshDetails_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDetailCustomizationInstance_RefreshDetails_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DetailCustomizationInstance_eventRefreshDetails_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetailCustomizationInstance_RefreshDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetailCustomizationInstance_eventRefreshDetails_Parms), &Z_Construct_UFunction_UDetailCustomizationInstance_RefreshDetails_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetailCustomizationInstance_RefreshDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetailCustomizationInstance_RefreshDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCustomizationInstance_RefreshDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization" },
		{ "Comment", "/**\n\x09 * Refreshes the details view and regenerates all the customized layouts\n\x09 * Use only when you need to remove or add complicated dynamic items\n\x09 */" },
		{ "DisplayName", "Refresh Details" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationInstance.h" },
		{ "ToolTip", "Refreshes the details view and regenerates all the customized layouts\nUse only when you need to remove or add complicated dynamic items" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCustomizationInstance_RefreshDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCustomizationInstance, nullptr, "RefreshDetails", nullptr, nullptr, sizeof(DetailCustomizationInstance_eventRefreshDetails_Parms), Z_Construct_UFunction_UDetailCustomizationInstance_RefreshDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_RefreshDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCustomizationInstance_RefreshDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_RefreshDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCustomizationInstance_RefreshDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCustomizationInstance_RefreshDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDetailCustomizationInstance_SaveConfigProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetailCustomizationInstance_SaveConfigProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Detail Customization" },
		{ "Comment", "/**\n\x09 * Save configuration properties out to ini files\n\x09 */" },
		{ "DisplayName", "Save Config Properties" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationInstance.h" },
		{ "ToolTip", "Save configuration properties out to ini files" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetailCustomizationInstance_SaveConfigProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetailCustomizationInstance, nullptr, "SaveConfigProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetailCustomizationInstance_SaveConfigProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetailCustomizationInstance_SaveConfigProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetailCustomizationInstance_SaveConfigProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetailCustomizationInstance_SaveConfigProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDetailCustomizationInstance_NoRegister()
	{
		return UDetailCustomizationInstance::StaticClass();
	}
	struct Z_Construct_UClass_UDetailCustomizationInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReferencedObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReferencedObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDetailCustomizationInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDetailCustomizationInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDetailCustomizationInstance_EditCategory, "EditCategory" }, // 965910600
		{ &Z_Construct_UFunction_UDetailCustomizationInstance_GetAllEditablePropertyInfos, "GetAllEditablePropertyInfos" }, // 2579721610
		{ &Z_Construct_UFunction_UDetailCustomizationInstance_GetCategoryNames, "GetCategoryNames" }, // 3983683541
		{ &Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedActors, "GetCustomizedActors" }, // 3214780092
		{ &Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedClass, "GetCustomizedClass" }, // 3682842143
		{ &Z_Construct_UFunction_UDetailCustomizationInstance_GetCustomizedObjects, "GetCustomizedObjects" }, // 467990851
		{ &Z_Construct_UFunction_UDetailCustomizationInstance_GetEditablePropertyInfosByClass, "GetEditablePropertyInfosByClass" }, // 2840083787
		{ &Z_Construct_UFunction_UDetailCustomizationInstance_HideCategory, "HideCategory" }, // 2120925310
		{ &Z_Construct_UFunction_UDetailCustomizationInstance_HideProperty, "HideProperty" }, // 3919017765
		{ &Z_Construct_UFunction_UDetailCustomizationInstance_OnChangingPropertyFinished, "OnChangingPropertyFinished" }, // 1369911072
		{ &Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetails, "OnCustomizeDetails" }, // 3563408154
		{ &Z_Construct_UFunction_UDetailCustomizationInstance_OnCustomizeDetailsEnd, "OnCustomizeDetailsEnd" }, // 498504294
		{ &Z_Construct_UFunction_UDetailCustomizationInstance_RefreshDetails, "RefreshDetails" }, // 1023155519
		{ &Z_Construct_UFunction_UDetailCustomizationInstance_SaveConfigProperties, "SaveConfigProperties" }, // 2231645608
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailCustomizationInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DetailCustomization/DetailCustomizationInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDetailCustomizationInstance_Statics::NewProp_ReferencedObjects_Inner = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailCustomizationInstance_Statics::NewProp_ReferencedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDetailCustomizationInstance_Statics::NewProp_ReferencedObjects = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDetailCustomizationInstance, ReferencedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDetailCustomizationInstance_Statics::NewProp_ReferencedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailCustomizationInstance_Statics::NewProp_ReferencedObjects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDetailCustomizationInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailCustomizationInstance_Statics::NewProp_ReferencedObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailCustomizationInstance_Statics::NewProp_ReferencedObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDetailCustomizationInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetailCustomizationInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDetailCustomizationInstance_Statics::ClassParams = {
		&UDetailCustomizationInstance::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDetailCustomizationInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDetailCustomizationInstance_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDetailCustomizationInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailCustomizationInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDetailCustomizationInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDetailCustomizationInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDetailCustomizationInstance, 163373889);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UDetailCustomizationInstance>()
	{
		return UDetailCustomizationInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDetailCustomizationInstance(Z_Construct_UClass_UDetailCustomizationInstance, &UDetailCustomizationInstance::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UDetailCustomizationInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDetailCustomizationInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
