//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "ComponentVisualizerUtilityBlueprintFactory.h"
#include "Misc/MessageDialog.h"
#include "Modules/ModuleManager.h"
#include "Widgets/SWindow.h"
#include "Engine/Blueprint.h"
#include "Settings/EditorExperimentalSettings.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "ComponentVisualizerUtilityBlueprint.h"
#include "ClassViewerModule.h"
#include "ClassViewerFilter.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Kismet2/SClassPickerDialog.h"
#include "ComponentVisualizerInstance.h"


UComponentVisualizerUtilityBlueprintFactory::UComponentVisualizerUtilityBlueprintFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UComponentVisualizerUtilityBlueprint::StaticClass();
	ParentClass = UComponentVisualizerInstance::StaticClass();
}

bool UComponentVisualizerUtilityBlueprintFactory::ConfigureProperties()
{
	// TODO Make config dialog like the anim blueprints.
	return true;
}

UObject* UComponentVisualizerUtilityBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	// Make sure we are trying to factory a blueprint, then create and init one
	check(Class->IsChildOf(UComponentVisualizerUtilityBlueprint::StaticClass()));

	if ((ParentClass == NULL) || !FKismetEditorUtilities::CanCreateBlueprintOfClass(ParentClass))
	{
		FFormatNamedArguments Args;
		Args.Add( TEXT("ClassName"), (ParentClass != NULL) ? FText::FromString( ParentClass->GetName() ) : NSLOCTEXT("UnrealEd", "Null", "(null)") );
		FMessageDialog::Open( EAppMsgType::Ok, FText::Format( NSLOCTEXT("UnrealEd", "CannotCreateBlueprintFromClass", "Cannot create a blueprint based on the class '{0}'."), Args ) );
		return NULL;
	}
	else
	{
		return FKismetEditorUtilities::CreateBlueprint(ParentClass, InParent, Name, BPTYPE_Normal, UComponentVisualizerUtilityBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass());
	}
}

bool UComponentVisualizerUtilityBlueprintFactory::CanCreateNew() const
{
	return true;
}

