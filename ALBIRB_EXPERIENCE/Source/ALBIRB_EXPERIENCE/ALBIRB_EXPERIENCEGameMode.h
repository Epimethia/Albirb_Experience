// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/World.h"
#include "ConstructorHelpers.h"


#include "GameFramework/GameModeBase.h"
#include "ALBIRB_EXPERIENCEGameMode.generated.h"

UCLASS(MinimalAPI)
class AALBIRB_EXPERIENCEGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AALBIRB_EXPERIENCEGameMode();

	//Override function for starting the level
	//virtual void BeginPlay() override;

protected:

	////Pointer to the current world
	//UWorld* m_pWorld;
	//APlayerController* m_pPlayer;

	UFUNCTION(BlueprintCallable, Category = "Generators")
		FVector GeneratePoint(FVector _ForwardVect, FRotator _Rotation, FVector _CurrentPos);

	////Environmental object BP
	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Environmental Asset BP")
	//TSubclassOf<class UObject> EnvironmentalObject;

};



