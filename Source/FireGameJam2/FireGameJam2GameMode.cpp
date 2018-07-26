// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FireGameJam2GameMode.h"
#include "FireGameJam2Pawn.h"

AFireGameJam2GameMode::AFireGameJam2GameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AFireGameJam2Pawn::StaticClass();
}
