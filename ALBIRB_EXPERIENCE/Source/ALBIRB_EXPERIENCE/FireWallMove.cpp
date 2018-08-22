// Fill out your copyright notice in the Description page of Project Settings.

#include "FireWallMove.h"
#include "Engine/World.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UFireWallMove::UFireWallMove()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	Timer = 5.0f;
	// ...
}


// Called when the game starts
void UFireWallMove::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UFireWallMove::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	Timer += DeltaTime;
	GetOwner()->SetActorLocation(GetOwner()->GetActorLocation() + FVector(FMath::Clamp(-3.5f + Timer/100.0f, 0.0f, 10.0f), 0.0f, 0.0f));
	// ...
}

