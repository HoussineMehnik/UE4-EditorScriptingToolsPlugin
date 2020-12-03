//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "EditorUserDefinedActionsEditor.h"
#include "Editor.h"
#include "Widgets/Text/STextBlock.h"
#include "EditorStyleSet.h"
#include "PropertyEditorModule.h"
#include "PropertyHandle.h"
#include "IDetailChildrenBuilder.h"
#include "Modules/ModuleManager.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/SToolTip.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Images/SThrobber.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Layout/SBorder.h"
#include "STextPropertyEditableTextBox.h"
#include "EditorFontGlyphs.h"
#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "IDocumentation.h"
#include "PropertyCustomizationHelpers.h"
#include "ScopedTransaction.h"
#include "EditorUserDefinedActions.h"
#include "ChordEditor/SEditorAction_ChordEditBox.h"
#include "Framework/Commands/GenericCommands.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Framework/Commands/Commands.h"
#include "EditorUserDefinedActionsEditorCommands.h"
#include "IPropertyTypeCustomization.h"
#include "EditorUserDefinedActionsUtils.h"
#include "EditorScriptingToolsStyle.h"
#include "EditorUserDefinedCommands.h"
#include "IEditorScriptingToolsModule.h"

#define LOCTEXT_NAMESPACE "EditorActionsEditor"

const FName FEditorUserDefinedActionsEditor::ActionsTabId(TEXT("EditorUserDefinedActions_ActionsEditor"));
const FName FEditorUserDefinedActionsEditor::EditorUserDefinedActionsEditorAppIdentifier(TEXT("EditorUserDefinedActionsEditorApp"));

/** Allows STextPropertyEditableTextBox to edit a user defined action entry */
class FEditableTextUserDefinedEditorAction : public IEditableTextProperty
{
public:
	FEditableTextUserDefinedEditorAction(UUserDefinedEnum* InTargetEnum, const int32 InEnumeratorIndex)
		: TargetEnum(InTargetEnum)
		, EnumeratorIndex(InEnumeratorIndex)
		, bCausedChange(false)
	{
	}

	virtual bool IsMultiLineText() const override
	{
		return false;
	}

	virtual bool IsPassword() const override
	{
		return false;
	}

	virtual bool IsReadOnly() const override
	{
		return false;
	}

	virtual bool IsDefaultValue() const override
	{
		return false;
	}

	virtual FText GetToolTipText() const override
	{
		return FText::GetEmpty();
	}

	virtual int32 GetNumTexts() const override
	{
		return 1;
	}

	virtual FText GetText(const int32 InIndex) const override
	{
		check(InIndex == 0);
		return TargetEnum->GetDisplayNameTextByIndex(EnumeratorIndex);
	}

	virtual void SetText(const int32 InIndex, const FText& InText) override
	{
		check(InIndex == 0);
		TGuardValue<bool> CausingChange(bCausedChange, true);
		FEnumEditorUtils::SetEnumeratorDisplayName(TargetEnum, EnumeratorIndex, InText);
	}

	virtual bool IsValidText(const FText& InText, FText& OutErrorMsg) const override
	{
		bool bValidName = true;

		bool bUnchangedName = (InText.ToString() == TargetEnum->GetDisplayNameTextByIndex(EnumeratorIndex).ToString());
		if (InText.IsEmpty())
		{
			OutErrorMsg = LOCTEXT("NameMissingError", "You must provide a name.");
			bValidName = false;
		}
		else if (!FEnumEditorUtils::IsEnumeratorDisplayNameValid(TargetEnum, EnumeratorIndex, InText))
		{
			OutErrorMsg = FText::Format(LOCTEXT("NameInUseError", "'{0}' is already in use."), InText);
			bValidName = false;
		}

		return bValidName && !bUnchangedName;
	}

#if USE_STABLE_LOCALIZATION_KEYS
	virtual void GetStableTextId(const int32 InIndex, const ETextPropertyEditAction InEditAction, const FString& InTextSource, const FString& InProposedNamespace, const FString& InProposedKey, FString& OutStableNamespace, FString& OutStableKey) const override
	{
		check(InIndex == 0);
		return StaticStableTextId(TargetEnum, InEditAction, InTextSource, InProposedNamespace, InProposedKey, OutStableNamespace, OutStableKey);
	}
#endif // USE_STABLE_LOCALIZATION_KEYS

	virtual void RequestRefresh() override
	{
	}

	bool CausedChange() const
	{
		return bCausedChange;
	}

private:
	/** The user defined enum being edited */
	UUserDefinedEnum* TargetEnum;

	/** Index of enumerator entry */
	int32 EnumeratorIndex;

	/** Set while we are invoking a change to the user defined enum */
	bool bCausedChange;
};



/** Allows STextPropertyEditableTextBox to edit the tooltip metadata for a user defined enum entry */
class FEditableTextUserDefinedEditorActionTooltip : public IEditableTextProperty
{
public:
	FEditableTextUserDefinedEditorActionTooltip(UUserDefinedEnum* InTargetEnum, const int32 InEnumeratorIndex)
		: TargetEnum(InTargetEnum)
		, EnumeratorIndex(InEnumeratorIndex)
		, bCausedChange(false)
	{
	}

	virtual bool IsMultiLineText() const override
	{
		return true;
	}

	virtual bool IsPassword() const override
	{
		return false;
	}

	virtual bool IsReadOnly() const override
	{
		return false;
	}

	virtual bool IsDefaultValue() const override
	{
		return false;
	}

	virtual FText GetToolTipText() const override
	{
		return FText::GetEmpty();
	}

	virtual int32 GetNumTexts() const override
	{
		return 1;
	}

	virtual FText GetText(const int32 InIndex) const override
	{
		check(InIndex == 0);
		return TargetEnum->GetToolTipTextByIndex(EnumeratorIndex);
	}

	virtual void SetText(const int32 InIndex, const FText& InText) override
	{
		check(InIndex == 0);
		TGuardValue<bool> CausingChange(bCausedChange, true);
		//@TODO: Metadata is not transactional right now, so we cannot transact a tooltip edit
		// const FScopedTransaction Transaction(NSLOCTEXT("EnumEditor", "SetEnumeratorTooltip", "Set Description"));
		TargetEnum->Modify();
		TargetEnum->SetMetaData(TEXT("ToolTip"), *InText.ToString(), EnumeratorIndex);
	}

	virtual bool IsValidText(const FText& InText, FText& OutErrorMsg) const override
	{
		return true;
	}

#if USE_STABLE_LOCALIZATION_KEYS
	virtual void GetStableTextId(const int32 InIndex, const ETextPropertyEditAction InEditAction, const FString& InTextSource, const FString& InProposedNamespace, const FString& InProposedKey, FString& OutStableNamespace, FString& OutStableKey) const override
	{
		check(InIndex == 0);
		return StaticStableTextId(TargetEnum, InEditAction, InTextSource, InProposedNamespace, InProposedKey, OutStableNamespace, OutStableKey);
	}
#endif // USE_STABLE_LOCALIZATION_KEYS

	virtual void RequestRefresh() override
	{
	}

	bool CausedChange() const
	{
		return bCausedChange;
	}

private:
	/** The user defined enum being edited */
	UUserDefinedEnum* TargetEnum;

	/** Index of enumerator entry */
	int32 EnumeratorIndex;

	/** Set while we are invoking a change to the user defined enum */
	bool bCausedChange;
};






void FEditorUserDefinedActionsEditor::RegisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager)
{
	WorkspaceMenuCategory = InTabManager->AddLocalWorkspaceMenuCategory(LOCTEXT("WorkspaceMenu_EditorActionsEditor", "Editor Actions Editor"));

	FAssetEditorToolkit::RegisterTabSpawners(InTabManager);

	InTabManager->RegisterTabSpawner(ActionsTabId, FOnSpawnTab::CreateSP(this, &FEditorUserDefinedActionsEditor::SpawnActionsTab))
		.SetDisplayName(LOCTEXT("ActionsEditor", "Actions"))
		.SetGroup(WorkspaceMenuCategory.ToSharedRef())
		.SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "GraphEditor.Enum_16x"));
}

void FEditorUserDefinedActionsEditor::UnregisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager)
{
	FAssetEditorToolkit::UnregisterTabSpawners(InTabManager);

	InTabManager->UnregisterTabSpawner(ActionsTabId);
}



void FEditorUserDefinedActionsEditor::BindCommands()
{
	const FEditorUserDefinedActionsEditorCommands& Commands = FEditorUserDefinedActionsEditorCommands::Get();

	ToolkitCommands->MapAction(
		Commands.MapActions,
		FExecuteAction::CreateSP(this, &FEditorUserDefinedActionsEditor::OnRegisterActions , true),
		FCanExecuteAction(),
		FIsActionChecked(),
		FIsActionButtonVisible::CreateSP(this, &FEditorUserDefinedActionsEditor::IsRegisterButtonVisible, true));

	ToolkitCommands->MapAction(
		Commands.UnmapActions,
		FExecuteAction::CreateSP(this, &FEditorUserDefinedActionsEditor::OnRegisterActions, false),
		FCanExecuteAction(),
		FIsActionChecked(),
		FIsActionButtonVisible::CreateSP(this, &FEditorUserDefinedActionsEditor::IsRegisterButtonVisible, false));
}

void FEditorUserDefinedActionsEditor::OnRegisterActions(bool bRegister)
{
	if (bRegister)
	{
		FEditorUserDefinedCommands::RegisterActions(TargetActionsAsset.Get());
	}
	else
	{
		FEditorUserDefinedCommands::UnregisterActions(true);
	}
}


bool FEditorUserDefinedActionsEditor::IsRegisterButtonVisible(bool bRegister) const
{
	IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
	if (UEditorUserDefinedActions* EditedAsset = TargetActionsAsset.Get())
	{
		if (bRegister)
		{
			return ScriptingToolsModule->CanRegisterEditorScriptingUtility(EditedAsset);
		}
		else
		{
			return ScriptingToolsModule->IsEditorScriptingUtilityRegistered(EditedAsset);
		}
	}
	return false;
}


EVisibility FEditorUserDefinedActionsEditor::GetFeedbackVisibility() const
{
	IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
	if (TargetActionsAsset.IsValid() && ScriptingToolsModule->IsEditorScriptingUtilityRegistered(TargetActionsAsset.Get()))
	{
		return EVisibility::Visible;
	}
	return EVisibility::Collapsed;
}

bool FEditorUserDefinedActionsEditor::IsEditable() const
{
	if (TargetActionsAsset.IsValid())
	{
		IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
		return !ScriptingToolsModule->IsEditorScriptingUtilityRegistered(TargetActionsAsset.Get());
	}
	return false;
}

void FEditorUserDefinedActionsEditor::ExtendToolbar()
{
	struct Local
	{
		static void FillToolbar(FToolBarBuilder& ToolbarBuilder)
		{
			ToolbarBuilder.BeginSection("Actions");
			{
				ToolbarBuilder.AddToolBarButton(FEditorUserDefinedActionsEditorCommands::Get().MapActions, NAME_None, FText::GetEmpty(), LOCTEXT("MapActionsToolTip", "Map Actions"));
				ToolbarBuilder.AddToolBarButton(FEditorUserDefinedActionsEditorCommands::Get().UnmapActions, NAME_None, FText::GetEmpty(), LOCTEXT("UnmapActionsToolTip", "Unmap registered commands and unload current actions asset"));
			}
			ToolbarBuilder.EndSection();
		}
	};

	TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);


	ToolbarExtender->AddToolBarExtension(
		"Asset",
		EExtensionHook::After,
		ToolkitCommands,
		FToolBarExtensionDelegate::CreateStatic(&Local::FillToolbar)
		);


	AddToolbarExtender(ToolbarExtender);
}

void FEditorUserDefinedActionsEditor::InitEditor(const EToolkitMode::Type Mode, const TSharedPtr< class IToolkitHost >& InitToolkitHost, UEditorUserDefinedActions* ActionsAssetToEdit)
{
	TargetActionsAsset = ActionsAssetToEdit;

	FEditorUserDefinedActionsEditorCommands::Register();

	const TSharedRef<FTabManager::FLayout> StandaloneDefaultLayout = FTabManager::NewLayout("Standalone_EditorActionsEditor_Layout_v1")
		->AddArea
		(
			FTabManager::NewPrimaryArea()->SetOrientation(Orient_Vertical)
			->Split
			(
				FTabManager::NewStack()
				->SetSizeCoefficient(0.1f)
				->SetHideTabWell(true)
				->AddTab(GetToolbarTabId(), ETabState::OpenedTab)
			)
			->Split
			(
				FTabManager::NewSplitter()
				->Split
				(
					FTabManager::NewStack()
					->AddTab(ActionsTabId, ETabState::OpenedTab)
				)
			)
		);

	BindCommands();

	const bool bCreateDefaultStandaloneMenu = true;
	const bool bCreateDefaultToolbar = true;
	FAssetEditorToolkit::InitAssetEditor(Mode, InitToolkitHost, EditorUserDefinedActionsEditorAppIdentifier, StandaloneDefaultLayout, bCreateDefaultStandaloneMenu, bCreateDefaultToolbar, ActionsAssetToEdit);

	ExtendToolbar();
	RegenerateMenusAndToolbars();

	// @todo toolkit world centric editing
	/*if (IsWorldCentricAssetEditor())
	{
		SpawnToolkitTab(GetToolbarTabId(), FString(), EToolkitTabSpot::ToolBar);
		const FString TabInitializationPayload(TEXT(""));
		SpawnToolkitTab( EnumeratorsTabId, TabInitializationPayload, EToolkitTabSpot::Details );
	}*/

	//
}

TSharedRef<SDockTab> FEditorUserDefinedActionsEditor::SpawnActionsTab(const FSpawnTabArgs& Args)
{
	check(Args.GetTabId() == ActionsTabId);

	UUserDefinedEnum* EditedEnum = NULL;
	const TArray<UObject*>& EditingObjs = GetEditingObjects();
	if (EditingObjs.Num())
	{
		EditedEnum = Cast<UUserDefinedEnum>(EditingObjs[0]);
	}

	// Create a property view
	FPropertyEditorModule& EditModule = FModuleManager::Get().GetModuleChecked<FPropertyEditorModule>("PropertyEditor");

	FDetailsViewArgs DetailsViewArgs( /*bUpdateFromSelection=*/ false, /*bLockable=*/ false, /*bAllowSearch=*/ false, FDetailsViewArgs::HideNameArea, /*bHideSelectionTip=*/ true);
	DetailsViewArgs.bShowOptions = false;

	PropertyView = EditModule.CreateDetailView(DetailsViewArgs);

	FOnGetDetailCustomizationInstance LayoutEnumDetails = FOnGetDetailCustomizationInstance::CreateStatic(&FEditorUserDefinedActionsDetails::MakeInstance);
	PropertyView->RegisterInstancedCustomPropertyLayout(UUserDefinedEnum::StaticClass(), LayoutEnumDetails);

	PropertyView->SetObject(EditedEnum);

	TAttribute<bool> IsEnabledAttribute = TAttribute<bool>(this, &FEditorUserDefinedActionsEditor::IsEditable);
	PropertyView->SetEnabled(IsEnabledAttribute);

	return SNew(SDockTab)
		.Icon(FEditorStyle::GetBrush("GenericEditor.Tabs.Properties"))
		.Label(LOCTEXT("ActionsEditor", "Actions"))
		[
			SNew(SVerticalBox)
			+SVerticalBox::Slot()
			.HAlign(HAlign_Left)
			.AutoHeight()
			[
				SNew(SCircularThrobber)
				.Period(1.5f)
				.Radius(32.f)
				.Visibility(this, &FEditorUserDefinedActionsEditor::GetFeedbackVisibility)
			]
			+SVerticalBox::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				PropertyView.ToSharedRef()
			]
		];
}

FEditorUserDefinedActionsEditor::~FEditorUserDefinedActionsEditor()
{
}

FName FEditorUserDefinedActionsEditor::GetToolkitFName() const
{
	return FName("EditorActionsEditor");
}

FText FEditorUserDefinedActionsEditor::GetBaseToolkitName() const
{
	return LOCTEXT("AppLabel", "Editor Actions Editor");
}

FText FEditorUserDefinedActionsEditor::GetToolkitName() const
{
	if (1 == GetEditingObjects().Num())
	{
		return FAssetEditorToolkit::GetToolkitName();
	}
	return GetBaseToolkitName();
}

FText FEditorUserDefinedActionsEditor::GetToolkitToolTipText() const
{
	if (1 == GetEditingObjects().Num())
	{
		return FAssetEditorToolkit::GetToolkitToolTipText();
	}
	return GetBaseToolkitName();
}

FString FEditorUserDefinedActionsEditor::GetWorldCentricTabPrefix() const
{
	return LOCTEXT("UDActionsWorldCentricTabPrefix", "Actions ").ToString();
}

FLinearColor FEditorUserDefinedActionsEditor::GetWorldCentricTabColorScale() const
{
	return FLinearColor(0.5f, 0.0f, 0.0f, 0.5f);
}

void FEditorUserDefinedActionsDetails::CustomizeDetails(IDetailLayoutBuilder& DetailLayout)
{
	const TArray<TWeakObjectPtr<UObject>>& Objects = DetailLayout.GetSelectedObjects();
	check(Objects.Num() > 0);

	if (Objects.Num() == 1)
	{
		TargetActionsAsset = CastChecked<UEditorUserDefinedActions>(Objects[0].Get());
		TSharedRef<IPropertyHandle> PropertyHandle = DetailLayout.GetProperty(FName("Names"), UEnum::StaticClass());

		//IDetailCategoryBuilder& SettingsCategory = DetailLayout.EditCategory("Settings", LOCTEXT("ActionsSettings", "Settings"), ECategoryPriority::Important);
		IDetailCategoryBuilder& ActionsCategory = DetailLayout.EditCategory("Actions", LOCTEXT("ActionsDetails", "Actions"));

		ActionsCategory.InitiallyCollapsed(false);
	
		ActionsCategory.AddCustomRow(LOCTEXT("FunctionNewInputArg", "New"))
			[
				SNew(SBox)
				.HAlign(HAlign_Right)
				.VAlign(VAlign_Top)
				[
					SNew(SHorizontalBox)
					+SHorizontalBox::Slot()
					.Padding(2)
					.AutoWidth()
					[
						SNew(SButton)
						.ButtonStyle(FEditorStyle::Get(), "FlatButton.Success")
						.ContentPadding(2)
						.OnClicked(this, &FEditorUserDefinedActionsDetails::OnAddNewAction)
						[
	
							SNew(SHorizontalBox)
							.Clipping(EWidgetClipping::ClipToBounds)
							+ SHorizontalBox::Slot()
							.VAlign(VAlign_Center)
							.Padding(2.f)
							.AutoWidth()
							[
								SNew(STextBlock)
								.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
								.Font( FEditorStyle::Get().GetFontStyle( "FontAwesome.8" ) )
								.Text( FEditorFontGlyphs::Plus )
							]

							+ SHorizontalBox::Slot()
							.VAlign(VAlign_Center)
							.Padding(2.f)
							.AutoWidth()
							[
								SNew(STextBlock)
								.Text(LOCTEXT("AddNewActionLabel", "New Action"))
								.ToolTipText(LOCTEXT("AddNewAction_ToolTip", "Add New Action"))
								.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
							]
						]
					]
					+ SHorizontalBox::Slot()
					.Padding(2)
					.AutoWidth()
					[
						SNew(SButton)
						.ButtonStyle(FEditorStyle::Get(), "FlatButton.Danger")
						.ContentPadding(2)
						.OnClicked(this, &FEditorUserDefinedActionsDetails::OnClearAll)
						[
							SNew(SHorizontalBox)
							.Clipping(EWidgetClipping::ClipToBounds)
							+ SHorizontalBox::Slot()
							.VAlign(VAlign_Center)
							.Padding(2.f)
							.AutoWidth()
							[
								SNew(STextBlock)
								.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
								.Font( FEditorStyle::Get().GetFontStyle( "FontAwesome.8" ) )
								.Text( FEditorFontGlyphs::Plus )
							]

							+ SHorizontalBox::Slot()
							.VAlign(VAlign_Center)
							.Padding(2.f)
							.AutoWidth()
							[
								SNew(STextBlock)
								.Text(LOCTEXT("ClearAllLabel", "Clear All"))
								.ToolTipText(LOCTEXT("ClearAllActions_ToolTip", "Clear All Actions"))
								.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
							]
						]
					]
				]		
			];

		Layout = MakeShareable(new FEditorUserDefinedActionsLayout(TargetActionsAsset.Get()));
		ActionsCategory.AddCustomBuilder(Layout.ToSharedRef());

	}
}

FEditorUserDefinedActionsDetails::FEditorUserDefinedActionsDetails()
	: TargetActionsAsset(nullptr)
{
	GEditor->RegisterForUndo(this);
}

FEditorUserDefinedActionsDetails::~FEditorUserDefinedActionsDetails()
{
	GEditor->UnregisterForUndo(this);
}

void FEditorUserDefinedActionsDetails::OnForceRefresh()
{
	if (Layout.IsValid())
	{
		Layout->Refresh();
	}
}

void FEditorUserDefinedActionsDetails::PostUndo(bool bSuccess)
{
	OnForceRefresh();
}

void FEditorUserDefinedActionsDetails::PreChange(const class UUserDefinedEnum* Enum, FEnumEditorUtils::EEnumEditorChangeInfo Info)
{
}

void FEditorUserDefinedActionsDetails::PostChange(const class UUserDefinedEnum* Enum, FEnumEditorUtils::EEnumEditorChangeInfo Info)
{
	if (Enum && (TargetActionsAsset.Get() == Enum))
	{
		OnForceRefresh();
	}
}

FReply FEditorUserDefinedActionsDetails::OnAddNewAction()
{
	FEditorUserDefinedActionsUtils::AddNewActionEnumerator(TargetActionsAsset.Get());
	return FReply::Handled();
}

FReply FEditorUserDefinedActionsDetails::OnClearAll()
{
	FEditorUserDefinedActionsUtils::ClearActionEnumerators(TargetActionsAsset.Get());
	return FReply::Handled();
}

bool FEditorUserDefinedActionsLayout::CausedChange() const
{
	for (const TWeakPtr<class FEditorUserDefinedActionsIndexLayout>& Child : Children)
	{
		if (Child.IsValid() && Child.Pin()->CausedChange())
		{
			return true;
		}
	}
	return false;
}

void FEditorUserDefinedActionsLayout::GenerateChildContent(IDetailChildrenBuilder& ChildrenBuilder)
{


	ChildrenBuilder.AddCustomRow(FText::GetEmpty())
		[
			SNew(SBorder)
			.BorderImage(&FCoreStyle::Get().GetWidgetStyle<FHeaderRowStyle>("TableView.Header").BackgroundBrush)
		[
		SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.Padding(0, 0, 2, 0)
			.VAlign(VAlign_Fill)
			.FillWidth(0.44f)
			[
				SNew(SBox)
				.Padding(FMargin(4, 1))
				[
					SNew(SHorizontalBox)
					.Clipping(EWidgetClipping::ClipToBounds)
					+ SHorizontalBox::Slot()
					.VAlign(VAlign_Center)
					.Padding(2.f)
					.AutoWidth()
					[
						SNew(STextBlock)
						.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
						.Font( FEditorStyle::Get().GetFontStyle( "FontAwesome.12" ) )
						.Text( FEditorFontGlyphs::Star )
					]

					+ SHorizontalBox::Slot()
					.VAlign(VAlign_Center)
					.Padding(2.f)
					.AutoWidth()
					[
						SNew(STextBlock)
						.Text(LOCTEXT("ActionIDLabel", "Action"))
						.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
					]
				]
			]

			+ SHorizontalBox::Slot()
			.VAlign(VAlign_Fill)
			.Padding(0, 0, 2, 0)
			.FillWidth(0.15f)
			[
				SNew(SBox)
				.Padding(4)
				[
					SNew(SHorizontalBox)
					.Clipping(EWidgetClipping::ClipToBounds)
					+ SHorizontalBox::Slot()
					.VAlign(VAlign_Center)
					.Padding(2.f)
					.AutoWidth()
					[
						SNew(STextBlock)
						.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
						.Font( FEditorStyle::Get().GetFontStyle( "FontAwesome.12" ) )
						.Text( FEditorFontGlyphs::Repeat )
					]

					+ SHorizontalBox::Slot()
					.VAlign(VAlign_Center)
					.Padding(2.f)
					.AutoWidth()
					[
						SNew(STextBlock)
						.Text(LOCTEXT("RepeatMode", "Repeat Mode"))
						.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
					]
				]
			]

			+ SHorizontalBox::Slot()
			.VAlign(VAlign_Fill)
			.AutoWidth()
			.FillWidth(0.2f)
			.Padding(0, 0, 2, 0)
			[
				SNew(SBox)
				.Padding(4)
				[
					SNew(SHorizontalBox)
					.Clipping(EWidgetClipping::ClipToBounds)
					+ SHorizontalBox::Slot()
					.VAlign(VAlign_Center)
					.Padding(2.f)
					.AutoWidth()
					[
						SNew(STextBlock)
						.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
						.Font( FEditorStyle::Get().GetFontStyle( "FontAwesome.12" ) )
						.Text( FEditorFontGlyphs::Keyboard_O)
					]

					+ SHorizontalBox::Slot()
					.VAlign(VAlign_Center)
					.Padding(2.f)
					.AutoWidth()
					[
						SNew(STextBlock)
						.Text(LOCTEXT("Primary", "Primary"))
						.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
					]				
			 	]
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Fill)
			.FillWidth(0.2f)
			.Padding(0, 0, 2, 0)
			[
				SNew(SBox)
				.Padding(4)
				[
					SNew(SHorizontalBox)
					.Clipping(EWidgetClipping::ClipToBounds)
					+ SHorizontalBox::Slot()
					.VAlign(VAlign_Center)
					.Padding(2.f)
					.AutoWidth()
					[
						SNew(STextBlock)
						.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
						.Font( FEditorStyle::Get().GetFontStyle( "FontAwesome.12" ) )
						.Text( FEditorFontGlyphs::Keyboard_O)
					]

					+ SHorizontalBox::Slot()
					.VAlign(VAlign_Center)
					.Padding(2.f)
					.AutoWidth()
					[
						SNew(STextBlock)
						.Text(LOCTEXT("Secondary", "Secondary"))
						.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
					]
				]
			]

			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(2, 0)
			.VAlign(VAlign_Fill)
			[
				SNew(SButton)
				.ButtonColorAndOpacity(FLinearColor::Transparent)
				.ContentPadding(0)
				.IsEnabled(false)
				[
					SNew(SImage)
					.Image(FEditorStyle::GetBrush("MediaAsset.AssetActions.Stop.Small"))
					.ColorAndOpacity(FLinearColor::Transparent)
				]
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(2, 0)
			.VAlign(VAlign_Fill)
			[
				SNew(SButton)
				.ButtonColorAndOpacity(FLinearColor::Transparent)
				.ContentPadding(0)
				.IsEnabled(false)
				[
					SNew(SImage)
					.Image(FEditorStyle::GetBrush("MediaAsset.AssetActions.Stop.Small"))
					.ColorAndOpacity(FLinearColor::Transparent)
				]
			]

			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(2, 0)
			.VAlign(VAlign_Fill)
			[
				SNew(SButton)
				.ButtonColorAndOpacity(FLinearColor::Transparent)
				.ContentPadding(0)
				.IsEnabled(false)
				[
					SNew(SImage)
					.Image(FEditorStyle::GetBrush("MediaAsset.AssetActions.Stop.Small"))
					.ColorAndOpacity(FLinearColor::Transparent)
				]
			]
		]
	];

	const int32 EnumToShowNum = FMath::Max<int32>(0, TargetActionsAsset->NumEnums() - 1);
	Children.Reset(EnumToShowNum);
	for (int32 EnumIdx = 0; EnumIdx < EnumToShowNum; ++EnumIdx)
	{
		TSharedRef<class FEditorUserDefinedActionsIndexLayout> EnumIndexLayout = MakeShareable(new FEditorUserDefinedActionsIndexLayout(TargetActionsAsset.Get(), EnumIdx));
		ChildrenBuilder.AddCustomBuilder(EnumIndexLayout);
		Children.Add(EnumIndexLayout);
	}
}


bool FEditorUserDefinedActionsIndexLayout::CausedChange() const
{
	return (DisplayNameEditor.IsValid() && DisplayNameEditor->CausedChange()) || (TooltipEditor.IsValid() && TooltipEditor->CausedChange());
}





void FEditorUserDefinedActionsIndexLayout::GenerateHeaderRowContent(FDetailWidgetRow& NodeRow)
{
	DisplayNameEditor = MakeShared<FEditableTextUserDefinedEditorAction>(TargetActionsAsset, ActionIndex);

	TooltipEditor = MakeShared<FEditableTextUserDefinedEditorActionTooltip>(TargetActionsAsset, ActionIndex);

	TSharedPtr< bool > OptionA(new bool(true));
	TSharedPtr< bool > OptionB(new bool(false));

	ParameterTypeNames.Add(OptionA);
	ParameterTypeNames.Add(OptionB);

	const bool bIsEditable = !DisplayNameEditor->IsReadOnly();
	const bool bIsMoveUpEnabled = (TargetActionsAsset->NumEnums() != 1) && (ActionIndex != 0) && bIsEditable;
	const bool bIsMoveDownEnabled = (TargetActionsAsset->NumEnums() != 1) && (ActionIndex < TargetActionsAsset->NumEnums() - 2) && bIsEditable;
	const bool& bRepeatAction = TargetActionsAsset->RepeatStatesList[ActionIndex];


	NodeRow
	.WholeRowWidget
	[
		SNew(SBorder)
		.BorderImage(&FCoreStyle::Get().GetWidgetStyle<FHeaderRowStyle>("TableView.Header").BackgroundBrush)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.Padding(4.0f)
			.VAlign(VAlign_Center)
			.FillWidth(0.45f)
			[
				SNew(STextPropertyEditableTextBox, DisplayNameEditor.ToSharedRef())
			]

			+ SHorizontalBox::Slot()
			.Padding(4.0f)
			.VAlign(VAlign_Center)
			.Padding(1.0f, 0.0f, 9.0f, 0.0f)
			.FillWidth(0.15f)
			[
				SNew(SComboBox<TSharedPtr<bool>>)
				.OptionsSource(&ParameterTypeNames)
				.OnGenerateWidget(this, &FEditorUserDefinedActionsIndexLayout::OnGenerateComboWidget)
				.OnSelectionChanged(this, &FEditorUserDefinedActionsIndexLayout::OnComboSelectionChanged)
				.InitiallySelectedItem(ParameterTypeNames[bRepeatAction ? 0 : 1])
				[
					SNew(STextBlock)
					.Text(this, &FEditorUserDefinedActionsIndexLayout::GetParameterTypeName)
					.Font(IPropertyTypeCustomizationUtils::GetRegularFont())
				]
			]

			+ SHorizontalBox::Slot()
			.Padding(4.0f)
			.VAlign(VAlign_Center)
			.AutoWidth()
			.FillWidth(0.2f)
			.Padding(1.0f, 0.0f, 9.0f, 0.0f)
			[
				SNew(SEditorAction_ChordEditBox, Cast<UEditorUserDefinedActions>(TargetActionsAsset), ActionIndex, EMultipleKeyBindingIndex::Primary)
			]
			+ SHorizontalBox::Slot()
			.Padding(4.0f)
			.AutoWidth()
			.FillWidth(0.2f)
			[
				SNew(SEditorAction_ChordEditBox, Cast<UEditorUserDefinedActions>(TargetActionsAsset), ActionIndex, EMultipleKeyBindingIndex::Secondary)
			]

			+ SHorizontalBox::Slot()
			.Padding(2.0f)
			.AutoWidth()
			.Padding(2, 0)
			.VAlign(VAlign_Center)
			[
				SNew(SButton)
				.ContentPadding(0)
				.ButtonStyle(FEditorStyle::Get(), "FlatButton.Primary")
				.OnClicked(this, &FEditorUserDefinedActionsIndexLayout::OnMoveActionUp)
				.IsEnabled(bIsMoveUpEnabled)
			[
				SNew(SImage)
				.Image(FEditorScriptingToolsStyle::Get()->GetBrush("EditorUserDefinedActionsEditor.ArrowUp"))
			]
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(2, 0)
			.VAlign(VAlign_Center)
			[
				SNew(SButton)
				.ContentPadding(0)
				.OnClicked(this, &FEditorUserDefinedActionsIndexLayout::OnMoveActionDown)
				.ButtonStyle(FEditorStyle::Get(), "FlatButton.Primary")
				.IsEnabled(bIsMoveDownEnabled)
				[
					SNew(SImage)
					.Image(FEditorScriptingToolsStyle::Get()->GetBrush("EditorUserDefinedActionsEditor.ArrowDown"))
				]
			]

			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(2, 0)
			.VAlign(VAlign_Center)
			[
				SNew(SButton)
				.ContentPadding(0)
				.OnClicked(this, &FEditorUserDefinedActionsIndexLayout::OnActionRemove)
				.ButtonStyle(FEditorStyle::Get(), "FlatButton.Danger")
				.IsEnabled(bIsEditable)
				[
					SNew(SImage)
					.Image(FEditorScriptingToolsStyle::Get()->GetBrush("EditorUserDefinedActionsEditor.Clear"))
				]
			]
		]
	];
}

FReply FEditorUserDefinedActionsIndexLayout::OnActionRemove()
{
	FEditorUserDefinedActionsUtils::RemoveActionEnumerator(TargetActionsAsset, ActionIndex);
	return FReply::Handled();
}

FReply FEditorUserDefinedActionsIndexLayout::OnMoveActionUp()
{
	FEditorUserDefinedActionsUtils::MoveActionEnumerator(TargetActionsAsset, ActionIndex, true);
	
	return FReply::Handled();
}

FReply FEditorUserDefinedActionsIndexLayout::OnMoveActionDown()
{
	FEditorUserDefinedActionsUtils::MoveActionEnumerator(TargetActionsAsset, ActionIndex, false);
	return FReply::Handled();
}


FText FEditorUserDefinedActionsIndexLayout::GetParameterTypeName() const
{
	if (TargetActionsAsset)
	{
		const bool& bRepeatAction = TargetActionsAsset->RepeatStatesList[ActionIndex];
		return bRepeatAction ? LOCTEXT("RepeatEnabled_Name", "Repeat Enabled") : LOCTEXT("RepeatDisabled_Name", "Repeat Disabled");
	}

	return LOCTEXT("InValid_Name", "InValid Enum");
}

TSharedRef<SWidget> FEditorUserDefinedActionsIndexLayout::OnGenerateComboWidget(TSharedPtr<bool> InComboString)
{

	const FText Txt = *InComboString ? LOCTEXT("RepeatEnabled_Name", "Repeat Enabled") : LOCTEXT("RepeatDisabled_Name", "Repeat Disabled");

	return
		SNew(SBox)
		[
			SNew(STextBlock)
			.Text(Txt)
			.Font(IPropertyTypeCustomizationUtils::GetRegularFont())
		];
}


void FEditorUserDefinedActionsIndexLayout::OnComboSelectionChanged(TSharedPtr<bool> InSelectedItem, ESelectInfo::Type SelectInfo)
{
	if (TargetActionsAsset)
	{
		const FScopedTransaction Transaction(NSLOCTEXT("ActionsEditor", "SetRepeatOptionTooltip", "Repeat Option"));
		TargetActionsAsset->Modify();
		TargetActionsAsset->RepeatStatesList[ActionIndex] = *InSelectedItem;
	}
}

#undef LOCTEXT_NAMESPACE
