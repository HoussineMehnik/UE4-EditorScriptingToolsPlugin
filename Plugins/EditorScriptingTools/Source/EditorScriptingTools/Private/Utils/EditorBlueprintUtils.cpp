//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorBlueprintUtils.h"


#include "EngineUtils.h"
#include "Editor.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "BlueprintCompilationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Framework/Notifications/NotificationManager.h"

#define LOCTEXT_NAMESPACE "EditorBlueprintUtils"

namespace EditorBlueprintUtils
{

	int32 CopyPropertiesToCDO(UObject* InInstance, const FObjectPropertiesCopyOptions& Options /*= FCopyOptions(ECopyOptions::Default) */, bool bAutoCompile /*= true*/)
	{
		check(InInstance != nullptr);


		UObject* SourceInstance = InInstance;
		UClass* InstanceClass = SourceInstance->GetClass();
		UObject* DefaultObject = CastChecked<UObject>(InstanceClass->GetDefaultObject());
		UBlueprint* Blueprint = CastChecked<UBlueprint>(InstanceClass->ClassGeneratedBy);

		const bool bIsPreviewing = (Options.Flags & EObjectPropertiesCopyOptions::PreviewOnly) != 0;

		int32 CopiedPropertyCount = 0;

		// Copy properties from the instance to the CDO
		TSet<UObject*> ModifiedObjects;
		for (FProperty* Property = InstanceClass->PropertyLink; Property != nullptr; Property = Property->PropertyLinkNext)
		{
			const bool bIsTransient = !!(Property->PropertyFlags & CPF_Transient);
			const bool bIsBlueprintReadonly = !!(Options.Flags & EObjectPropertiesCopyOptions::FilterBlueprintReadOnly) && !!(Property->PropertyFlags & CPF_BlueprintReadOnly);
			const bool bIsIdentical = Property->Identical_InContainer(SourceInstance, DefaultObject);
			const bool bIsComponentContainer = !!(Property->PropertyFlags & CPF_ContainsInstancedReference);
			const bool bIsComponentProp = !!(Property->PropertyFlags & (CPF_InstancedReference | CPF_ContainsInstancedReference));


			if (!bIsTransient && !bIsIdentical && !bIsBlueprintReadonly && !bIsComponentContainer && !bIsComponentProp)
			{
				const bool bIsSafeToCopy = !(Options.Flags & EObjectPropertiesCopyOptions::OnlyCopyEditOrInterpProperties) || (Property->HasAnyPropertyFlags(CPF_Edit | CPF_Interp));
				if (bIsSafeToCopy)
				{
					if (!Options.CanCopyProperty(*Property, *SourceInstance))
					{
						continue;
					}

					if (!bIsPreviewing)
					{
						if (!ModifiedObjects.Contains(DefaultObject))
						{
							// Start modifying the target object
							DefaultObject->Modify();
							ModifiedObjects.Add(DefaultObject);
						}

						if (Options.Flags & EObjectPropertiesCopyOptions::CallPostEditChangeProperty)
						{
							DefaultObject->PreEditChange(Property);
						}

						EditorUtilities::CopySingleProperty(SourceInstance, DefaultObject, Property);

						if (Options.Flags & EObjectPropertiesCopyOptions::CallPostEditChangeProperty)
						{
							FPropertyChangedEvent PropertyChangedEvent(Property);
							DefaultObject->PostEditChangeProperty(PropertyChangedEvent);
						}
					}

					++CopiedPropertyCount;
				}
			}
		}

		if (!bIsPreviewing && CopiedPropertyCount > 0 && InstanceClass->HasAllClassFlags(CLASS_CompiledFromBlueprint))
		{
			FBlueprintEditorUtils::MarkBlueprintAsModified(CastChecked<UBlueprint>(InstanceClass->ClassGeneratedBy));

			if (bAutoCompile)
			{
				FKismetEditorUtilities::CompileBlueprint(Blueprint);
			}

			const FString InstanceLabel = SourceInstance->GetFName().ToString();

			// Set up a notification record to indicate success/failure
			FNotificationInfo NotificationInfo(FText::GetEmpty());
			NotificationInfo.FadeInDuration = 1.0f;
			NotificationInfo.FadeOutDuration = 2.0f;
			NotificationInfo.bUseLargeFont = false;
			SNotificationItem::ECompletionState CompletionState;
			if (CopiedPropertyCount > 0)
			{
				if (CopiedPropertyCount > 1)
				{
					FFormatNamedArguments Args;
					Args.Add(TEXT("BlueprintName"), FText::FromName(Blueprint->GetFName()));
					Args.Add(TEXT("CopiedPropertyCount"), CopiedPropertyCount);
					Args.Add(TEXT("InstanceName"), FText::FromString(InstanceLabel));
					NotificationInfo.Text = FText::Format(LOCTEXT("PushToBlueprintDefaults_ApplySuccess", "Updated Blueprint {BlueprintName} ({CopiedPropertyCount} property changes applied from Instance {InstanceName})."), Args);
				}
				else
				{
					FFormatNamedArguments Args;
					Args.Add(TEXT("BlueprintName"), FText::FromName(Blueprint->GetFName()));
					Args.Add(TEXT("InstanceName"), FText::FromString(InstanceLabel));
					NotificationInfo.Text = FText::Format(LOCTEXT("PushOneToBlueprintDefaults_ApplySuccess", "Updated Blueprint {BlueprintName} (1 property change applied from Instance {InstanceName})."), Args);
				}
				CompletionState = SNotificationItem::CS_Success;
			}
			else
			{
				NotificationInfo.Text = LOCTEXT("PushToBlueprintDefaults_ApplyFailed", "No properties were copied");
				CompletionState = SNotificationItem::CS_Fail;
			}

			// Add the notification to the queue
			const TSharedPtr<SNotificationItem> Notification = FSlateNotificationManager::Get().AddNotification(NotificationInfo);
			Notification->SetCompletionState(CompletionState);
		}

		return CopiedPropertyCount;
	}


	bool CompileBlueprint(UObject* InObject)
	{
		if (InObject != nullptr)
		{
			if (UClass* Class = InObject->GetClass())
			{
				if (UBlueprint* Blueprint = Cast<UBlueprint>(Class->ClassGeneratedBy))
				{
					FKismetEditorUtilities::CompileBlueprint(Blueprint);
					return true;
				}
			}
		}
		return false;
	}

	bool IsBlueprintDirty(UObject* InObject)
	{
		if (InObject != nullptr)
		{
			if (UClass* Class = InObject->GetClass())
			{
				if (UBlueprint* Blueprint = Cast<UBlueprint>(Class->ClassGeneratedBy))
				{
					return Blueprint->IsPossiblyDirty();
				}
			}
		}
		return false;
	}
}

#undef LOCTEXT_NAMESPACE 