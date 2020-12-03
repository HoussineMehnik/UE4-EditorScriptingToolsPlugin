//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once


enum class ELevelEditingContextType : uint8;
struct FDrawPrimitivesContext;
struct FDrawHUDContext;


class ILevelEditingContext
{

public:
	virtual ELevelEditingContextType GetLevelEditingContext() = 0;
	virtual const FDrawPrimitivesContext& GetDrawPrimitivesContext() = 0;
	virtual const FDrawHUDContext& GetDrawHUDContext() = 0;
};