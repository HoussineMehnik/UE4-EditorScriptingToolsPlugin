//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

#define EDITOR_SCRIPTING_TOOLS_MODULE_NAME "EditorScriptingTools"

class UClass;
class IEditorScriptingUtilityAssetInterface;

/**
 * Editor scripting tools module interface
 */

class IEditorScriptingToolsModule : public IModuleInterface
{

public:

	/**
	 * Singleton-like access to this module's interface.  This is just for convenience!
	 * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	static inline IEditorScriptingToolsModule& Get()
	{
		return FModuleManager::LoadModuleChecked< IEditorScriptingToolsModule >(EDITOR_SCRIPTING_TOOLS_MODULE_NAME);
	}

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded(EDITOR_SCRIPTING_TOOLS_MODULE_NAME);
	}

	/**
	* Gets module pointer.
	*
	* @return The interface to the module, or nullptr if the module was not found.
	*/
	static IEditorScriptingToolsModule* GetPtr();

	/**
	* Returns scripting tools settings viewer tab name.
	*/
	virtual FName GetEditorScriptingToolsTabName() const = 0;

	/**
	* Returns editor scripting assets category bit.
	*/
	virtual uint32 GetEditorScriptingAssetCategory() const = 0;


	virtual bool IsPlacementBrowserTabActive() const = 0;


	virtual void RequestRefreshPlacementBrowserTab() = 0;

	virtual void RequestClosePlacementBrowserTab() = 0;

	/**
	* Registers/loads an editor scripting utility
	*/
	virtual void RegisterEditorScriptingUtility(IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) = 0;

	/**
	 * Re register (refresh)  an editor scripting utility
	 */
	virtual void RefreshEditorScriptingUtility(IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) = 0;

	/**
	* Unregister/unloads an editor scripting utility
	*/
	virtual void UnregisterEditorScriptingUtility(IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) = 0;

	/**
	 * Checks we can register an editor scripting utility.
	 */
	virtual bool CanRegisterEditorScriptingUtility(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const = 0;

	/**
	 * Checks to see if a user defined settings class is registered.
	 */
	virtual bool IsEditorScriptingUtilityRegistered(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const = 0;

	virtual FText GetRegisterScriptingUtilityText(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const = 0;
	virtual FText GetUnregisterScriptingUtilityText(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const = 0;
	virtual FText GetRegisterScriptingUtilityToolTipText(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const = 0;
	virtual FText GetRefreshScriptingUtilityToolTipText(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const = 0;
	virtual FText GetUnregisterScriptingUtilityToolTipText(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const = 0;
	virtual FColor GetScriptingUtilityAssetColor(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const = 0;
};