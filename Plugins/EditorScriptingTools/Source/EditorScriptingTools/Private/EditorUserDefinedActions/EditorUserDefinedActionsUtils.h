//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"


class UEditorUserDefinedActions;

class FEditorUserDefinedActionsUtils
{

private:
	static void CopyEnumeratorsWithoutMax(const UEditorUserDefinedActions* Enum, TArray<TPair<FName, int64>>& OutEnumNames);
	static void BroadcastChanges(const UEditorUserDefinedActions* Enum, const TArray<TPair<FName, int64>>& OldNames, bool bResolveData = true);
	static void PrepareForChange(UEditorUserDefinedActions* Enum);
	static FString GenerateNewActionEnumeratorName(UEditorUserDefinedActions* Enum);
	static const TCHAR* DisplayName() { return TEXT("DisplayName"); }
	static const TCHAR* InvalidName() { return TEXT("(INVALID)"); }

public:
	static void AddNewActionEnumerator(UEditorUserDefinedActions* Enum);
	static void RemoveActionEnumerator(UEditorUserDefinedActions* Enum, int32 EnumeratorIndex);
	static void ClearActionEnumerators(UEditorUserDefinedActions* Enum);
	static void MoveActionEnumerator(UEditorUserDefinedActions* Enum, int32 EnumeratorIndex, bool bDirectionUp);

};