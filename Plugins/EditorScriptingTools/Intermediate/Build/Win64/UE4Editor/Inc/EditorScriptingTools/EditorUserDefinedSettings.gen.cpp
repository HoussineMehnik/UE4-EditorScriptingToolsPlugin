// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/EditorUserDefinedSettings/EditorUserDefinedSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUserDefinedSettings() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserDefinedSettings_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserDefinedSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprint_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEditorUserDefinedSettings::execSaveSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUserDefinedSettings::execGetEditorUserDefinedSettingsObject)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UEditorUserDefinedSettingsUtilityBlueprint>,Z_Param_SettingsBlueprint);
		P_GET_UBOOL_REF(Z_Param_Out_bIsRegistered);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEditorUserDefinedSettings**)Z_Param__Result=UEditorUserDefinedSettings::GetEditorUserDefinedSettingsObject(Z_Param_SettingsBlueprint,Z_Param_Out_bIsRegistered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUserDefinedSettings::execOnStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->OnStatus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUserDefinedSettings::execOnSaveDefaults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSaveDefaults_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUserDefinedSettings::execOnSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSave_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUserDefinedSettings::execOnResetDefaults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnResetDefaults_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUserDefinedSettings::execOnModified)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnModified_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUserDefinedSettings::execOnImport)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnImport_Implementation(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUserDefinedSettings::execOnExport)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnExport_Implementation(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUserDefinedSettings::execOnCanEdit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnCanEdit_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UEditorUserDefinedSettings_OnCanEdit = FName(TEXT("OnCanEdit"));
	bool UEditorUserDefinedSettings::OnCanEdit()
	{
		EditorUserDefinedSettings_eventOnCanEdit_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorUserDefinedSettings_OnCanEdit),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorUserDefinedSettings_OnExport = FName(TEXT("OnExport"));
	bool UEditorUserDefinedSettings::OnExport(const FString& Path)
	{
		EditorUserDefinedSettings_eventOnExport_Parms Parms;
		Parms.Path=Path;
		ProcessEvent(FindFunctionChecked(NAME_UEditorUserDefinedSettings_OnExport),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorUserDefinedSettings_OnImport = FName(TEXT("OnImport"));
	bool UEditorUserDefinedSettings::OnImport(const FString& Path)
	{
		EditorUserDefinedSettings_eventOnImport_Parms Parms;
		Parms.Path=Path;
		ProcessEvent(FindFunctionChecked(NAME_UEditorUserDefinedSettings_OnImport),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorUserDefinedSettings_OnModified = FName(TEXT("OnModified"));
	bool UEditorUserDefinedSettings::OnModified()
	{
		EditorUserDefinedSettings_eventOnModified_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorUserDefinedSettings_OnModified),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorUserDefinedSettings_OnResetDefaults = FName(TEXT("OnResetDefaults"));
	bool UEditorUserDefinedSettings::OnResetDefaults()
	{
		EditorUserDefinedSettings_eventOnResetDefaults_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorUserDefinedSettings_OnResetDefaults),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorUserDefinedSettings_OnSave = FName(TEXT("OnSave"));
	bool UEditorUserDefinedSettings::OnSave()
	{
		EditorUserDefinedSettings_eventOnSave_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorUserDefinedSettings_OnSave),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorUserDefinedSettings_OnSaveDefaults = FName(TEXT("OnSaveDefaults"));
	bool UEditorUserDefinedSettings::OnSaveDefaults()
	{
		EditorUserDefinedSettings_eventOnSaveDefaults_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorUserDefinedSettings_OnSaveDefaults),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEditorUserDefinedSettings_OnSelect = FName(TEXT("OnSelect"));
	void UEditorUserDefinedSettings::OnSelect()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorUserDefinedSettings_OnSelect),NULL);
	}
	static FName NAME_UEditorUserDefinedSettings_OnStatus = FName(TEXT("OnStatus"));
	FText UEditorUserDefinedSettings::OnStatus()
	{
		EditorUserDefinedSettings_eventOnStatus_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEditorUserDefinedSettings_OnStatus),&Parms);
		return Parms.ReturnValue;
	}
	void UEditorUserDefinedSettings::StaticRegisterNativesUEditorUserDefinedSettings()
	{
		UClass* Class = UEditorUserDefinedSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEditorUserDefinedSettingsObject", &UEditorUserDefinedSettings::execGetEditorUserDefinedSettingsObject },
			{ "OnCanEdit", &UEditorUserDefinedSettings::execOnCanEdit },
			{ "OnExport", &UEditorUserDefinedSettings::execOnExport },
			{ "OnImport", &UEditorUserDefinedSettings::execOnImport },
			{ "OnModified", &UEditorUserDefinedSettings::execOnModified },
			{ "OnResetDefaults", &UEditorUserDefinedSettings::execOnResetDefaults },
			{ "OnSave", &UEditorUserDefinedSettings::execOnSave },
			{ "OnSaveDefaults", &UEditorUserDefinedSettings::execOnSaveDefaults },
			{ "OnStatus", &UEditorUserDefinedSettings::execOnStatus },
			{ "SaveSettings", &UEditorUserDefinedSettings::execSaveSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject_Statics
	{
		struct EditorUserDefinedSettings_eventGetEditorUserDefinedSettingsObject_Parms
		{
			TSoftObjectPtr<UEditorUserDefinedSettingsUtilityBlueprint> SettingsBlueprint;
			bool bIsRegistered;
			UEditorUserDefinedSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SettingsBlueprint;
		static void NewProp_bIsRegistered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRegistered;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject_Statics::NewProp_SettingsBlueprint = { "SettingsBlueprint", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUserDefinedSettings_eventGetEditorUserDefinedSettingsObject_Parms, SettingsBlueprint), Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject_Statics::NewProp_bIsRegistered_SetBit(void* Obj)
	{
		((EditorUserDefinedSettings_eventGetEditorUserDefinedSettingsObject_Parms*)Obj)->bIsRegistered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject_Statics::NewProp_bIsRegistered = { "bIsRegistered", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorUserDefinedSettings_eventGetEditorUserDefinedSettingsObject_Parms), &Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject_Statics::NewProp_bIsRegistered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUserDefinedSettings_eventGetEditorUserDefinedSettingsObject_Parms, ReturnValue), Z_Construct_UClass_UEditorUserDefinedSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject_Statics::NewProp_SettingsBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject_Statics::NewProp_bIsRegistered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor User Defined Settings" },
		{ "DeterminesOutputType", "SettingsClass" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedSettings/EditorUserDefinedSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUserDefinedSettings, nullptr, "GetEditorUserDefinedSettingsObject", nullptr, nullptr, sizeof(EditorUserDefinedSettings_eventGetEditorUserDefinedSettingsObject_Parms), Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUserDefinedSettings_OnCanEdit_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorUserDefinedSettings_OnCanEdit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUserDefinedSettings_eventOnCanEdit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnCanEdit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorUserDefinedSettings_eventOnCanEdit_Parms), &Z_Construct_UFunction_UEditorUserDefinedSettings_OnCanEdit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUserDefinedSettings_OnCanEdit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedSettings_OnCanEdit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUserDefinedSettings_OnCanEdit_Statics::Function_MetaDataParams[] = {
		{ "Category", "EditorUserDefinedSettings" },
		{ "Comment", "/**\n\x09 * A delegate that is executed to check whether a settings section can be edited.\n\x09 *\n\x09 * The return value indicates whether the section can be edited.\n\x09 */" },
		{ "DisplayName", "HandleSettingsEdit" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedSettings/EditorUserDefinedSettings.h" },
		{ "ToolTip", "A delegate that is executed to check whether a settings section can be edited.\n\nThe return value indicates whether the section can be edited." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnCanEdit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUserDefinedSettings, nullptr, "OnCanEdit", nullptr, nullptr, sizeof(EditorUserDefinedSettings_eventOnCanEdit_Parms), Z_Construct_UFunction_UEditorUserDefinedSettings_OnCanEdit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnCanEdit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUserDefinedSettings_OnCanEdit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnCanEdit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUserDefinedSettings_OnCanEdit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUserDefinedSettings_OnCanEdit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUserDefinedSettings_eventOnExport_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics::NewProp_Path_MetaData)) };
	void Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUserDefinedSettings_eventOnExport_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorUserDefinedSettings_eventOnExport_Parms), &Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics::Function_MetaDataParams[] = {
		{ "Category", "EditorUserDefinedSettings" },
		{ "Comment", "/**\n\x09 * A delegate that is executed when a settings section should export its values to a file.\n\x09 *\n\x09 * The first parameter is the path to the file to export to.\n\x09 * The return value indicates whether exporting succeeded.\n\x09 */" },
		{ "DisplayName", "HandleSettingsExport" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedSettings/EditorUserDefinedSettings.h" },
		{ "ToolTip", "A delegate that is executed when a settings section should export its values to a file.\n\nThe first parameter is the path to the file to export to.\nThe return value indicates whether exporting succeeded." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUserDefinedSettings, nullptr, "OnExport", nullptr, nullptr, sizeof(EditorUserDefinedSettings_eventOnExport_Parms), Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUserDefinedSettings_eventOnImport_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics::NewProp_Path_MetaData)) };
	void Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUserDefinedSettings_eventOnImport_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorUserDefinedSettings_eventOnImport_Parms), &Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics::Function_MetaDataParams[] = {
		{ "Category", "EditorUserDefinedSettings" },
		{ "Comment", "/**\n\x09 * A delegate that is executed when a settings section should import its values from a file.\n\x09 *\n\x09 * The first parameter is the path to the file to import from.\n\x09 * The return value indicates whether importing succeeded.\n\x09 */" },
		{ "DisplayName", "HandleSettingsImport" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedSettings/EditorUserDefinedSettings.h" },
		{ "ToolTip", "A delegate that is executed when a settings section should import its values from a file.\n\nThe first parameter is the path to the file to import from.\nThe return value indicates whether importing succeeded." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUserDefinedSettings, nullptr, "OnImport", nullptr, nullptr, sizeof(EditorUserDefinedSettings_eventOnImport_Parms), Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUserDefinedSettings_OnModified_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorUserDefinedSettings_OnModified_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUserDefinedSettings_eventOnModified_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnModified_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorUserDefinedSettings_eventOnModified_Parms), &Z_Construct_UFunction_UEditorUserDefinedSettings_OnModified_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUserDefinedSettings_OnModified_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedSettings_OnModified_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUserDefinedSettings_OnModified_Statics::Function_MetaDataParams[] = {
		{ "Category", "EditorUserDefinedSettings" },
		{ "Comment", "/**\n\x09 * A delegate that is executed when a settings section has been modified.\n\x09 *\n\x09 * The return value indicates whether the modifications should be saved.\n\x09 */" },
		{ "DisplayName", "HandleSettingsSaved" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedSettings/EditorUserDefinedSettings.h" },
		{ "ToolTip", "A delegate that is executed when a settings section has been modified.\n\nThe return value indicates whether the modifications should be saved." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUserDefinedSettings, nullptr, "OnModified", nullptr, nullptr, sizeof(EditorUserDefinedSettings_eventOnModified_Parms), Z_Construct_UFunction_UEditorUserDefinedSettings_OnModified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnModified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUserDefinedSettings_OnModified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnModified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUserDefinedSettings_OnModified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUserDefinedSettings_OnModified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUserDefinedSettings_OnResetDefaults_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorUserDefinedSettings_OnResetDefaults_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUserDefinedSettings_eventOnResetDefaults_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnResetDefaults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorUserDefinedSettings_eventOnResetDefaults_Parms), &Z_Construct_UFunction_UEditorUserDefinedSettings_OnResetDefaults_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUserDefinedSettings_OnResetDefaults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedSettings_OnResetDefaults_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUserDefinedSettings_OnResetDefaults_Statics::Function_MetaDataParams[] = {
		{ "Category", "EditorUserDefinedSettings" },
		{ "Comment", "/**\n\x09 * A delegate that is executed when a settings section should have its values reset to default.\n\x09 *\n\x09 * The return value indicates whether resetting to defaults succeeded.\n\x09 */" },
		{ "DisplayName", "Handle" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedSettings/EditorUserDefinedSettings.h" },
		{ "ToolTip", "A delegate that is executed when a settings section should have its values reset to default.\n\nThe return value indicates whether resetting to defaults succeeded." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnResetDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUserDefinedSettings, nullptr, "OnResetDefaults", nullptr, nullptr, sizeof(EditorUserDefinedSettings_eventOnResetDefaults_Parms), Z_Construct_UFunction_UEditorUserDefinedSettings_OnResetDefaults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnResetDefaults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUserDefinedSettings_OnResetDefaults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnResetDefaults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUserDefinedSettings_OnResetDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUserDefinedSettings_OnResetDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUserDefinedSettings_OnSave_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorUserDefinedSettings_OnSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUserDefinedSettings_eventOnSave_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorUserDefinedSettings_eventOnSave_Parms), &Z_Construct_UFunction_UEditorUserDefinedSettings_OnSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUserDefinedSettings_OnSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedSettings_OnSave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUserDefinedSettings_OnSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "EditorUserDefinedSettings" },
		{ "Comment", "/**\n\x09 * A delegate that is executed when a settings section should have its values saved.\n\x09 *\n\x09 * The return value indicates whether saving succeeded.\n\x09 */" },
		{ "DisplayName", "Handle" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedSettings/EditorUserDefinedSettings.h" },
		{ "ToolTip", "A delegate that is executed when a settings section should have its values saved.\n\nThe return value indicates whether saving succeeded." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUserDefinedSettings, nullptr, "OnSave", nullptr, nullptr, sizeof(EditorUserDefinedSettings_eventOnSave_Parms), Z_Construct_UFunction_UEditorUserDefinedSettings_OnSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUserDefinedSettings_OnSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUserDefinedSettings_OnSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUserDefinedSettings_OnSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUserDefinedSettings_OnSaveDefaults_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorUserDefinedSettings_OnSaveDefaults_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUserDefinedSettings_eventOnSaveDefaults_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnSaveDefaults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorUserDefinedSettings_eventOnSaveDefaults_Parms), &Z_Construct_UFunction_UEditorUserDefinedSettings_OnSaveDefaults_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUserDefinedSettings_OnSaveDefaults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedSettings_OnSaveDefaults_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUserDefinedSettings_OnSaveDefaults_Statics::Function_MetaDataParams[] = {
		{ "Category", "EditorUserDefinedSettings" },
		{ "Comment", "/**\n\x09 * A delegate that is executed when a settings section should have its values saved as default.\n\x09 *\n\x09 * The return value indicates whether saving as default succeeded.\n\x09 */" },
		{ "DisplayName", "HandleSaveDefaults" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedSettings/EditorUserDefinedSettings.h" },
		{ "ToolTip", "A delegate that is executed when a settings section should have its values saved as default.\n\nThe return value indicates whether saving as default succeeded." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnSaveDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUserDefinedSettings, nullptr, "OnSaveDefaults", nullptr, nullptr, sizeof(EditorUserDefinedSettings_eventOnSaveDefaults_Parms), Z_Construct_UFunction_UEditorUserDefinedSettings_OnSaveDefaults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnSaveDefaults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUserDefinedSettings_OnSaveDefaults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnSaveDefaults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUserDefinedSettings_OnSaveDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUserDefinedSettings_OnSaveDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUserDefinedSettings_OnSelect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUserDefinedSettings_OnSelect_Statics::Function_MetaDataParams[] = {
		{ "Category", "EditorUserDefinedSettings" },
		{ "Comment", "/**\n\x09* A delegate that is executed to check whether a settings section can be edited.\n\x09*\n\x09*/" },
		{ "DisplayName", "OnSectionSelected" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedSettings/EditorUserDefinedSettings.h" },
		{ "ToolTip", "A delegate that is executed to check whether a settings section can be edited." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUserDefinedSettings, nullptr, "OnSelect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUserDefinedSettings_OnSelect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnSelect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUserDefinedSettings_OnSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUserDefinedSettings_OnSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUserDefinedSettings_OnStatus_Statics
	{
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUserDefinedSettings_eventOnStatus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUserDefinedSettings_OnStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedSettings_OnStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUserDefinedSettings_OnStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "EditorUserDefinedSettings" },
		{ "Comment", "/**\n\x09 * A delegate that is executed to retrieve a status message for a settings section.\n\x09 *\n\x09 * The return value is status message.\n\x09 */" },
		{ "DisplayName", "GetSatutsMessage" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedSettings/EditorUserDefinedSettings.h" },
		{ "ToolTip", "A delegate that is executed to retrieve a status message for a settings section.\n\nThe return value is status message." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUserDefinedSettings_OnStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUserDefinedSettings, nullptr, "OnStatus", nullptr, nullptr, sizeof(EditorUserDefinedSettings_eventOnStatus_Parms), Z_Construct_UFunction_UEditorUserDefinedSettings_OnStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUserDefinedSettings_OnStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_OnStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUserDefinedSettings_OnStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUserDefinedSettings_OnStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUserDefinedSettings_SaveSettings_Statics
	{
		struct EditorUserDefinedSettings_eventSaveSettings_Parms
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
	void Z_Construct_UFunction_UEditorUserDefinedSettings_SaveSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUserDefinedSettings_eventSaveSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUserDefinedSettings_SaveSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorUserDefinedSettings_eventSaveSettings_Parms), &Z_Construct_UFunction_UEditorUserDefinedSettings_SaveSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUserDefinedSettings_SaveSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedSettings_SaveSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUserDefinedSettings_SaveSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor User Defined Settings" },
		{ "DisplayName", "Save Settings" },
		{ "Keywords", "save config settings" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedSettings/EditorUserDefinedSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUserDefinedSettings_SaveSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUserDefinedSettings, nullptr, "SaveSettings", nullptr, nullptr, sizeof(EditorUserDefinedSettings_eventSaveSettings_Parms), Z_Construct_UFunction_UEditorUserDefinedSettings_SaveSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_SaveSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUserDefinedSettings_SaveSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedSettings_SaveSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUserDefinedSettings_SaveSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUserDefinedSettings_SaveSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorUserDefinedSettings_NoRegister()
	{
		return UEditorUserDefinedSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUserDefinedSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUserDefinedSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorUserDefinedSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorUserDefinedSettings_GetEditorUserDefinedSettingsObject, "GetEditorUserDefinedSettingsObject" }, // 1796098872
		{ &Z_Construct_UFunction_UEditorUserDefinedSettings_OnCanEdit, "OnCanEdit" }, // 2563244897
		{ &Z_Construct_UFunction_UEditorUserDefinedSettings_OnExport, "OnExport" }, // 1828354493
		{ &Z_Construct_UFunction_UEditorUserDefinedSettings_OnImport, "OnImport" }, // 2902940787
		{ &Z_Construct_UFunction_UEditorUserDefinedSettings_OnModified, "OnModified" }, // 3252059175
		{ &Z_Construct_UFunction_UEditorUserDefinedSettings_OnResetDefaults, "OnResetDefaults" }, // 395364546
		{ &Z_Construct_UFunction_UEditorUserDefinedSettings_OnSave, "OnSave" }, // 2454328415
		{ &Z_Construct_UFunction_UEditorUserDefinedSettings_OnSaveDefaults, "OnSaveDefaults" }, // 353346828
		{ &Z_Construct_UFunction_UEditorUserDefinedSettings_OnSelect, "OnSelect" }, // 3015339085
		{ &Z_Construct_UFunction_UEditorUserDefinedSettings_OnStatus, "OnStatus" }, // 2510704162
		{ &Z_Construct_UFunction_UEditorUserDefinedSettings_SaveSettings, "SaveSettings" }, // 2205756457
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUserDefinedSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EditorUserDefinedSettings/EditorUserDefinedSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedSettings/EditorUserDefinedSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUserDefinedSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUserDefinedSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorUserDefinedSettings_Statics::ClassParams = {
		&UEditorUserDefinedSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A3u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUserDefinedSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUserDefinedSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUserDefinedSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorUserDefinedSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorUserDefinedSettings, 2714292695);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UEditorUserDefinedSettings>()
	{
		return UEditorUserDefinedSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorUserDefinedSettings(Z_Construct_UClass_UEditorUserDefinedSettings, &UEditorUserDefinedSettings::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UEditorUserDefinedSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUserDefinedSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
