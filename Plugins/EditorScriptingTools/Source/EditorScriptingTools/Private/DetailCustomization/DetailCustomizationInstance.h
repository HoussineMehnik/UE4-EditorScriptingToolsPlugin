//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "UObject/ScriptMacros.h"
#include "DetailCustomizationTypes.h"
#include "EditorTypesWrapperTypes.h"
#include "DetailCategoryBuilderHandle.h"
#include "DetailCustomizationInstance.generated.h"


class IDetailLayoutBuilder;
class UObject;
class AActor;
class UEditorModeToolInstance;
class UEditorUserWidget;
class FNativeDetailCustomizationInstance;
class SWidget;


UCLASS(Abstract, Blueprintable, config = Editor)
class   UDetailCustomizationInstance : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY()
		TArray<UObject*> ReferencedObjects;

	/** Called when details should be customized */
	UFUNCTION(BlueprintImplementableEvent, Category = "Detail Customization", meta = (DisplayName = "On Customize Details"))
		void OnCustomizeDetails(const TArray<UObject*>& CustomizedObjects);

	/** Called when no longer used and will be deleted */
	UFUNCTION(BlueprintImplementableEvent, Category = "Detail Customization", meta = (DisplayName = "On Customize Details End"))
		void OnCustomizeDetailsEnd();

	/**
	 * Called after properties have been edited and PostEditChange has been called on all objects.
	 * This can be used to safely make changes to data that the details panel is observing instead of during PostEditChange (which is
	 * unsafe)
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "Detail Customization", meta = (DisplayName = "On Post Changing Property"))
		void OnChangingPropertyFinished(FName PropertyName, FName MemberPropertyName, EDetailsViewPropertyChangeType::Type ChangeType);

	/**
	 * Save configuration properties out to ini files
	 */
	UFUNCTION(BlueprintCallable, Category = "Detail Customization", meta = (DisplayName = "Save Config Properties"))
		void SaveConfigProperties();

	/**
	 * Gets the class being customized by this builder
	 *
	 */
	UFUNCTION(BlueprintPure, Category = "Detail Customization", meta = (DisplayName = "Get Customized Class"))
		UClass* GetCustomizedClass();

	/**
	 * Gets the current object(s) being customized by this builder
	 *
	 * If this is a sub-object customization it will return those sub objects.  Otherwise the root objects will be returned.
	 */
	UFUNCTION(BlueprintCallable, Category = "Detail Customization", meta = (DisplayName = "Get Customized Objects"))
		bool GetCustomizedObjects(TArray<UObject*>& OutObjects);

	/** Gets the current actor(s) being customized by this builder. */
	UFUNCTION(BlueprintCallable, Category = "Detail Customization", meta = (DisplayName = "Get Customized Actors"))
		bool GetCustomizedActors(TArray<AActor*>& OutActors);

	/**
	 * Refreshes the details view and regenerates all the customized layouts
	 * Use only when you need to remove or add complicated dynamic items
	 */
	UFUNCTION(BlueprintCallable, Category = "Detail Customization", meta = (DisplayName = "Refresh Details"))
		bool RefreshDetails();

	/**
	 * Hides an entire category
	 *
	 * @param CategoryName	The name of the category to hide
	 */
	UFUNCTION(BlueprintCallable, Category = "Detail Customization", meta = (DisplayName = "Hide Category"))
		bool HideCategory(FName HiddenCategoryName, bool bCheckIfCategoryExists = false);

	/**
	 * Gets the current set of existing category names. This includes both categories derived from properties and categories added via EditCategory.
	 * @param	OutCategoryNames	 The array of category names
	 */
	UFUNCTION(BlueprintCallable, Category = "Detail Customization", meta = (DisplayName = "Get Category Names"))
		bool GetCategoryNames(TArray<FName>& OutCategoryNames);

	/**
	 * Marks this property has hidden by customization (will not show up in the default place)
	 */
	UFUNCTION(BlueprintCallable, Category = "Detail Customization", meta = (DisplayName = "Hide Property"))
		bool HideProperty(FName HiddenPropertyName, TSubclassOf<UObject> PropertyOwnerClass);

	UFUNCTION(BlueprintCallable, Category = "Detail Customization", meta = (DisplayName = "Get Editable Property Infos By Class"))
		bool GetEditablePropertyInfosByClass(TArray<FEditablePropertyInfo>& OutInfos, TSubclassOf<UObject> PropertyOwnerClass);

	UFUNCTION(BlueprintCallable, Category = "Detail Customization", meta = (DisplayName = "Get All Editable Property Infos"))
		bool GetAllEditablePropertyInfos(TArray<FEditablePropertyInfo>& OutInfos);


	/**
	 * Edits an existing category or creates a new one
	 *
	 * @param CategoryName				The name of the category
	 * @param DisplayName	The new display name of the category (optional)
	 * @param CategoryType				Category type to define sort order.  Category display order is sorted by this type (optional)
	 */
	UFUNCTION(BlueprintCallable, Category = "Detail Customization", meta = (DisplayName = "Edit Category"))
		bool EditCategory(FDetailCategoryBuilderHandle& OutCategoryBuilderHandle ,FName CategoryName, FText InDisplayName = FText::GetEmpty(), EDetailCategoryPriority CategoryType = EDetailCategoryPriority::Default);

public:
	TSharedRef<SWidget> CreatePropertyNameWidget(FName PropertyName, TSubclassOf<UObject> PropertyOwnerClass, FText NameOverride = FText::GetEmpty(), FText ToolTipOverride = FText::GetEmpty(), bool bDisplayResetToDefault = false, bool bDisplayText = true, bool bDisplayThumbnail = true);
	TSharedRef<SWidget> CreatePropertyValueWidget(FName PropertyName, TSubclassOf<UObject> PropertyOwnerClass, bool bDisplayDefaultPropertyButtons = true);
	void SetCustomizationsWrapper(const TSharedPtr<FNativeDetailCustomizationInstance>& CustomizationsWrapper);
	void ClearCustomizationsWrapper();

private:
	TWeakPtr<FNativeDetailCustomizationInstance> NativeDetailCustomizationWeakPtr;

public:

	//~ Begin UObject interface
	virtual class UWorld* GetWorld() const final;
	//~ End UObject interface
};