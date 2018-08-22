// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ALBIRB_EXPERIENCEGameMode.h"
#include "ALBIRB_EXPERIENCEPawn.h"


FVector AALBIRB_EXPERIENCEGameMode::GeneratePoint(FVector _ForwardVect, FRotator _Rotation, FVector _CurrentPos) {
	/*x = Math.cos(angle)*radius;
	y = Math.sin(angle)*radius;*/

	float YRatio = FMath::RandRange(-1.0f, 1.0f);

	FVector CenterPoint = (_ForwardVect * 20000.0f) + _CurrentPos;

	float y = YRatio * 10000.0f + CenterPoint.Y;
	float x = CenterPoint.X + FMath::RandRange(-2000.0f, 2000.0f);
	return FVector(x, y, 0.0f);
}

AALBIRB_EXPERIENCEGameMode::AALBIRB_EXPERIENCEGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AALBIRB_EXPERIENCEPawn::StaticClass();
}
