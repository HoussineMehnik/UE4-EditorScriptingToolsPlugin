//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "DetailCustomizationUtilityBlueprintFactory.h"
#include "DetailCustomizationUtilityBlueprint.h"
#include "DetailCustomizationInstance.h"
#include "Engine/Blueprint.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Misc/MessageDialog.h"


#define LOCTEXT_NAMESPACE "UDetailCustomizationUtilityBlueprintFactory"

UDetailCustomizationUtilityBlueprintFactory::UDetailCustomizationUtilityBlueprintFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UDetailCustomizationUtilityBlueprint::StaticClass();
	ParentClass = UDetailCustomizationInstance::StaticClass();
}

bool UDetailCustomizationUtilityBlueprintFactory::ConfigureProperties()
{
	return true;
}

UObject* UDetailCustomizationUtilityBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	check(Class->IsChildOf(UDetailCustomizationUtilityBlueprint::StaticClass()));

	if ((ParentClass == NULL) || !FKismetEditorUtilities::CanCreateBlueprintOfClass(ParentClass))
	{
		FFormatNamedArguments Args;
		Args.Add(TEXT("ClassName"), (ParentClass != NULL) ? FText::FromString(ParentClass->GetName()) : LOCTEXT("Null", "(null)"));
		FMessageDialog::Open(EAppMsgType::Ok, FText::Format(LOCTEXT("CannotCreateBlueprintFromClass", "Cannot create a blueprint based on the class '{0}'."), Args));
		return NULL;
	}
	else
	{
		return FKismetEditorUtilities::CreateBlueprint(ParentClass, InParent, Name, BPTYPE_Normal, UDetailCustomizationUtilityBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass());
	}
}

bool UDetailCustomizationUtilityBlueprintFactory::CanCreateNew() const
{
	return true;
}

#undef LOCTEXT_NAMESPACE