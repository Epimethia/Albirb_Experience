// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ALBIRB_EXPERIENCEGameMode.h"
#include "ALBIRB_EXPERIENCEPawn.h"


FVector AALBIRB_EXPERIENCEGameMode::GeneratePoint(FVector _ForwardVect, FRotator _Rotation, FVector _CurrentPos) {
	/*x = Math.cos(angle)*radius;
	y = Math.sin(angle)*radius;*/

	float Radius = FMath::FRandRange(1600.0f, 2000.0f);
	float Angle = FMath::FRandRange(-90.0f, 90.0f) + _Rotation.Yaw;

	FVector CenterPoint = (_ForwardVect * 2000.0f) + _CurrentPos;

	float x = FMath::Cos(Angle) * (Radius * 2.0f);
	float y = FMath::Sin(Angle) * (Radius * 2.0f);

	return FVector(x, y, 0.0f) + CenterPoint;
}

AALBIRB_EXPERIENCEGameMode::AALBIRB_EXPERIENCEGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AALBIRB_EXPERIENCEPawn::StaticClass();
}
