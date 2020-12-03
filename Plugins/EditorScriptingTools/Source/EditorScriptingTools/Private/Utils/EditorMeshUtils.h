//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"

class UProceduralMeshComponent;
class UStaticMesh;

namespace EditorMeshUtils
{
	bool CreateStaticMeshAssetFromProceduralMesh(UProceduralMeshComponent* InProcMeshComp, UStaticMesh*& OutStaticMesh);
};