// Fill out your copyright notice in the Description page of Project Settings.

#include "PerchingComponent.h"
#include "Engine/World.h"
#include "Math/UnrealMathUtility.h"
#include "ALBIRB_EXPERIENCEPawn.h"


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

	// Initialize Member Variables
	PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	OwnerActor = GetOwner();
	LerpDelta = 0.0f;	
	PlayerPerchStatus = false;
}


// Called every frame
void UPerchingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);		
	
	float Distance = OwnerActor->GetDistanceTo(PlayerPawn);	

	// If the player is within 1000 units of the perch, check for trigger overlap
	if (Distance < 2500.0f)
	{		
		UE_LOG(LogTemp, Warning, TEXT("Distance = %f"), Distance);
		// Check if the player is trying to perch
		if (GetWorld()->GetFirstPlayerController()->IsInputKeyDown(EKeys::E))
		{
			// Increment by DeltaTime
			LerpDelta += DeltaTime; 
			UE_LOG(LogTemp, Warning, TEXT("OVERLAPPING - %f"), LerpDelta);

			// Clamp/Limit LerpDelta
			LerpDelta = FMath::Clamp(LerpDelta, 0.0f, 1.0f);			

			// Lerp towards perch 
			FVector lerpPosition = FMath::Lerp<FVector>(
				PlayerPawn->GetActorLocation(), // Player Position
				OwnerActor->GetActorLocation() + PerchOffset, // Perch Position
				LerpDelta // t 
			);

			// Apply lerp 
			PlayerPawn->SetActorLocation(lerpPosition);
		}	
		else
		{
			// Reset LerpDelta
			LerpDelta = 0.0f;
		}
	}	
}

