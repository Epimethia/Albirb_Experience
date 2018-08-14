// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ALBIRB_EXPERIENCEGameMode.h"
#include "ALBIRB_EXPERIENCEPawn.h"

AALBIRB_EXPERIENCEGameMode::AALBIRB_EXPERIENCEGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AALBIRB_EXPERIENCEPawn::StaticClass();
}
