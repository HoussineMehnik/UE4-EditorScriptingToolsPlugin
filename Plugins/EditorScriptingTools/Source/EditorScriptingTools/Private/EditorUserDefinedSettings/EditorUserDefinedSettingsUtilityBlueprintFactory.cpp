//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorUserDefinedSettingsUtilityBlueprintFactory.h"

#include "EditorUserDefinedSettingsUtilityBlueprint.h"
#include "EditorUserDefinedSettings.h"

#include "Engine/Blueprint.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Misc/MessageDialog.h"

#define LOCTEXT_NAMESPACE "EditorUserDefinedSettingsUtilityBlueprintFactory"

UEditorUserDefinedSettingsUtilityBlueprintFactory::UEditorUserDefinedSettingsUtilityBlueprintFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UEditorUserDefinedSettingsUtilityBlueprint::StaticClass();
	ParentClass = UEditorUserDefinedSettings::StaticClass();
}

bool UEditorUserDefinedSettingsUtilityBlueprintFactory::ConfigureProperties()
{
	return true;
}

UObject* UEditorUserDefinedSettingsUtilityBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	// Make sure we are trying to factory a blueprint, then create and init one
	check(Class->IsChildOf(UEditorUserDefinedSettingsUtilityBlueprint::StaticClass()));

	if ((ParentClass == NULL) || !FKismetEditorUtilities::CanCreateBlueprintOfClass(ParentClass))
	{
		FFormatNamedArguments Args;
		Args.Add( TEXT("ClassName"), (ParentClass != NULL) ? FText::FromString( ParentClass->GetName() ) : LOCTEXT("Null", "(null)") );
		FMessageDialog::Open( EAppMsgType::Ok, FText::Format(LOCTEXT("CannotCreateBlueprintFromClass", "Cannot create a blueprint based on the class '{0}'."), Args ) );
		return NULL;
	}
	else
	{
		return FKismetEditorUtilities::CreateBlueprint(ParentClass, InParent, Name, BPTYPE_Normal, UEditorUserDefinedSettingsUtilityBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass());
	}
}

#undef LOCTEXT_NAMESPACE //"EditorUserDefinedSettingsUtilityBlueprintFactory"
