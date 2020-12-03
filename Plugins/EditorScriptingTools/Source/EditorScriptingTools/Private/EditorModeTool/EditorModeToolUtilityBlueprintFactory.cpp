//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorModeToolUtilityBlueprintFactory.h"
#include "Misc/MessageDialog.h"
#include "Modules/ModuleManager.h"
#include "Widgets/SWindow.h"
#include "Engine/Blueprint.h"
#include "Settings/EditorExperimentalSettings.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "EditorModeToolUtilityBlueprint.h"
#include "ClassViewerModule.h"
#include "ClassViewerFilter.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Kismet2/SClassPickerDialog.h"
#include "EditorModeToolInstance.h"


/////////////////////////////////////////////////////
// UEditorModeToolUtilityBlueprintFactory

UEditorModeToolUtilityBlueprintFactory::UEditorModeToolUtilityBlueprintFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UEditorModeToolUtilityBlueprint::StaticClass();
	ParentClass = UEditorModeToolInstance::StaticClass();
}

bool UEditorModeToolUtilityBlueprintFactory::ConfigureProperties()
{
	// TODO Make config dialog like the anim blueprints.
	return true;
}

UObject* UEditorModeToolUtilityBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	// Make sure we are trying to factory a blueprint, then create and init one
	check(Class->IsChildOf(UEditorModeToolUtilityBlueprint::StaticClass()));

	if ((ParentClass == NULL) || !FKismetEditorUtilities::CanCreateBlueprintOfClass(ParentClass))
	{
		FFormatNamedArguments Args;
		Args.Add( TEXT("ClassName"), (ParentClass != NULL) ? FText::FromString( ParentClass->GetName() ) : NSLOCTEXT("UnrealEd", "Null", "(null)") );
		FMessageDialog::Open( EAppMsgType::Ok, FText::Format( NSLOCTEXT("UnrealEd", "CannotCreateBlueprintFromClass", "Cannot create a blueprint based on the class '{0}'."), Args ) );
		return NULL;
	}
	else
	{
		return FKismetEditorUtilities::CreateBlueprint(ParentClass, InParent, Name, BPTYPE_Normal, UEditorModeToolUtilityBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass());
	}
}

bool UEditorModeToolUtilityBlueprintFactory::CanCreateNew() const
{
	return true;
}

