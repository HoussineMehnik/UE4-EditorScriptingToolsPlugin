//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#pragma once

#include "CoreMinimal.h"
#include "Input/Reply.h"
#include "Toolkits/IToolkitHost.h"
#include "BlueprintEditorModule.h"
#include "IDetailCustomization.h"
#include "IDetailCustomNodeBuilder.h"
#include "IDetailsView.h"
#include "EditorUndoClient.h"

#include "Editor/UnrealEd/Public/Kismet2/EnumEditorUtils.h"

class FDetailWidgetRow;
class FEditorUserDefinedActionsIndexLayout;
class FEditorUserDefinedActionsLayout;
class IDetailChildrenBuilder;
class IDetailLayoutBuilder;
class SEditableTextBox;
class FEditableTextUserDefinedEditorAction;
class FEditableTextUserDefinedEditorActionTooltip;
class UEditorUserDefinedActions;

class  FEditorUserDefinedActionsEditor : public IUserDefinedEnumEditor
{
	/** App Identifier.*/
	static const FName EditorUserDefinedActionsEditorAppIdentifier;

	/**	The tab ids for all the tabs used */
	static const FName ActionsTabId;

	/** Property viewing widget */
	TSharedPtr<class IDetailsView> PropertyView;

public:

	/**
	 * Edits the specified actions asset
	 *
	 * @param	Mode					Asset editing mode for this editor (standalone or world-centric)
	 * @param	InitToolkitHost			When Mode is WorldCentric, this is the level editor instance to spawn this editor within
	 * @param	ActionsAssetToEdit		The user defined actions asset to edit
	 */
	void InitEditor(const EToolkitMode::Type Mode, const TSharedPtr< class IToolkitHost >& InitToolkitHost, UEditorUserDefinedActions* ActionsAssetToEdit);

	/** Destructor */
	virtual ~FEditorUserDefinedActionsEditor();

	/** IToolkit interface */
	virtual FName GetToolkitFName() const override;
	virtual FText GetBaseToolkitName() const override;
	virtual FText GetToolkitName() const override;
	virtual FText GetToolkitToolTipText() const override;
	virtual FString GetWorldCentricTabPrefix() const override;
	virtual FLinearColor GetWorldCentricTabColorScale() const override;

	virtual void RegisterTabSpawners(const TSharedRef<class FTabManager>& TabManager) override;
	virtual void UnregisterTabSpawners(const TSharedRef<class FTabManager>& TabManager) override;


private:

	void OnRegisterActions(bool bRegister);
	bool IsRegisterButtonVisible(bool bRegister) const;
	EVisibility GetFeedbackVisibility() const;

	bool IsEditable() const;
	void BindCommands();
	void ExtendToolbar();


protected:
	TSharedRef<SDockTab> SpawnActionsTab(const FSpawnTabArgs& Args);


private:
	TWeakObjectPtr<UEditorUserDefinedActions> TargetActionsAsset;
};

/** Details customization for functions and graphs selected in the MyBlueprint panel */
class FEditorUserDefinedActionsDetails : public IDetailCustomization, FEnumEditorUtils::INotifyOnEnumChanged, FEditorUndoClient
{
public:
	/** Makes a new instance of this detail layout class for a specific detail view requesting it */
	static TSharedRef<class IDetailCustomization> MakeInstance()
	{
		return MakeShareable(new FEditorUserDefinedActionsDetails);
	}

	FEditorUserDefinedActionsDetails();
	~FEditorUserDefinedActionsDetails();

	/** IDetailCustomization interface */
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailLayout) override;

	/** Forces a refresh on the details customization */
	void OnForceRefresh();

	/** FEnumEditorUtils::INotifyOnEnumChanged */
	virtual void PreChange(const class UUserDefinedEnum* Enum, FEnumEditorUtils::EEnumEditorChangeInfo Info) override;
	virtual void PostChange(const class UUserDefinedEnum* Enum, FEnumEditorUtils::EEnumEditorChangeInfo Info) override;

	/** FEditorUndoClient Interface */
	virtual void PostUndo(bool bSuccess) override;
	virtual void PostRedo(bool bSuccess) override { PostUndo(bSuccess); }

private:
	/** Handles new action element request */
	FReply OnAddNewAction();
	FReply OnClearAll();
private:
	TSharedPtr<class FEditorUserDefinedActionsLayout> Layout;
	/** The target node that this argument is on */
	TWeakObjectPtr<UEditorUserDefinedActions> TargetActionsAsset;
};

/** Custom struct for each group of arguments in the function editing details */
class FEditorUserDefinedActionsLayout : public IDetailCustomNodeBuilder, public TSharedFromThis<FEditorUserDefinedActionsLayout>
{
public:
	FEditorUserDefinedActionsLayout(UEditorUserDefinedActions* InTargetActionsAsset)
		: TargetActionsAsset(InTargetActionsAsset)
	{}

	void Refresh()
	{
		OnRebuildChildren.ExecuteIfBound();
	}

	bool CausedChange() const;

private:
	/** IDetailCustomNodeBuilder Interface*/
	virtual void SetOnRebuildChildren(FSimpleDelegate InOnRegenerateChildren) override { OnRebuildChildren = InOnRegenerateChildren; }
	virtual void GenerateHeaderRowContent(FDetailWidgetRow& NodeRow) override {}
	virtual void GenerateChildContent(IDetailChildrenBuilder& ChildrenBuilder) override;
	virtual void Tick(float DeltaTime) override {}
	virtual bool RequiresTick() const override { return false; }
	virtual FName GetName() const override { return NAME_None; }
	virtual bool InitiallyCollapsed() const override { return false; }

private:
	FSimpleDelegate OnRebuildChildren;
	/** The target node that this argument is on */
	TWeakObjectPtr<UEditorUserDefinedActions> TargetActionsAsset;

	TArray<TWeakPtr<class FEditorUserDefinedActionsIndexLayout>> Children;
};

/** Custom struct for each group of arguments in the function editing details */
class FEditorUserDefinedActionsIndexLayout : public IDetailCustomNodeBuilder, public TSharedFromThis<FEditorUserDefinedActionsIndexLayout>
{
public:
	FEditorUserDefinedActionsIndexLayout(UEditorUserDefinedActions* InTargetActionsAsset, int32 InActionIndex)
		: TargetActionsAsset(InTargetActionsAsset)
		, ActionIndex(InActionIndex)
	{}

	bool CausedChange() const;


private:
	/** IDetailCustomNodeBuilder Interface*/
	virtual void SetOnRebuildChildren(FSimpleDelegate InOnRegenerateChildren) override {};
	virtual void GenerateHeaderRowContent(FDetailWidgetRow& NodeRow) override;
	virtual void GenerateChildContent(IDetailChildrenBuilder& ChildrenBuilder) override {};
	virtual void Tick(float DeltaTime) override {}
	virtual bool RequiresTick() const override { return false; }
	virtual FName GetName() const override { return NAME_None; }
	virtual bool InitiallyCollapsed() const override { return false; }




private:
	/** Moves the action up in the list */
	FReply OnMoveActionUp();

	/** Moves the action down in the list */
	FReply OnMoveActionDown();

	/** Deletes the action */
	FReply OnActionRemove();

	FText GetParameterTypeName() const;
	TSharedRef<SWidget> OnGenerateComboWidget(TSharedPtr<bool> InComboString);
	void OnComboSelectionChanged(TSharedPtr<bool> InSelectedItem, ESelectInfo::Type SelectInfo);

private:
	/** The target node that this argument is on */
	UEditorUserDefinedActions* TargetActionsAsset;

	/** Index of action */
	int32 ActionIndex;

	/** The editable text interface for the display name data */
	TSharedPtr<FEditableTextUserDefinedEditorAction> DisplayNameEditor;

	/** The editable text interface for the tooltip data */
	TSharedPtr<FEditableTextUserDefinedEditorActionTooltip> TooltipEditor;

	TArray<TSharedPtr<bool>> ParameterTypeNames;
};
