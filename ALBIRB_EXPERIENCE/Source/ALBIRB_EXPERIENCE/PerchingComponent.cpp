// Fill out your copyright notice in the Description page of Project Settings.

#include "PerchingComponent.h"
#include "Engine/World.h"


// Sets default values for this component's properties
UPerchingComponent::UPerchingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPerchingComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	// Initialize Member Variables
	PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	OwnerActor = GetOwner();
}


// Called every frame
void UPerchingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
		
	
	// ...	
	float Distance = OwnerActor->GetDistanceTo(PlayerPawn);
	//UE_LOG(LogTemp, Warning, TEXT("Distance = %f"), Distance);

	// If the player is within 1000 units of the perch, check for trigger overlap
	if (Distance < 1000.0f)
	{
		// Check trigger overlap
		if (PerchTrigger->IsOverlappingActor(PlayerPawn))
		{
			UE_LOG(LogTemp, Warning, TEXT("OVERLAPPING"));
			PlayerPawn->
			PlayerPawn->SetActorLocation(OwnerActor->GetActorLocation() + FVector(0.0f, 0.0f, 700.0f));
		}
	}
	
}

