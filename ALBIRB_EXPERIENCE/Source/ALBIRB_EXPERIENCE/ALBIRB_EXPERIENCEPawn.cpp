// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ALBIRB_EXPERIENCEPawn.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/TriggerVolume.h"
#include "Engine/World.h"
#include <vector>
#include "EngineUtils.h"
#include "Engine/StaticMesh.h"
#include <assert.h>
#include <math.h>

AALBIRB_EXPERIENCEPawn::AALBIRB_EXPERIENCEPawn()
{
	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<USkeletalMesh> PlaneMesh;
		FConstructorStatics()
			: PlaneMesh(TEXT("SkeletalMesh'/Game/Player/Flying/Bird/SaddleBack_FlightCycle_1.SaddleBack_FlightCycle_1'"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	// Create static mesh component
	PlaneMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PlaneMesh0"));
	//PlaneMesh->SetSkeletalMesh(ConstructorStatics.PlaneMesh.Get());	// Set static mesh
	RootComponent = PlaneMesh;

	// Create a spring arm component
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm0"));
	SpringArm->SetupAttachment(RootComponent);	// Attach SpringArm to RootComponent
	SpringArm->TargetArmLength = 600.0f; // The camera follows at this distance behind the character	
	SpringArm->SocketOffset = FVector(0.f,0.f,200.f);
	SpringArm->bEnableCameraLag = false;	// Do not allow camera to lag
	SpringArm->CameraLagSpeed = 15.f;

	// Create camera component 
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera0"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);	// Attach the camera
	Camera->bUsePawnControlRotation = false; // Don't rotate camera with controller
	Camera->SetRelativeRotation(FRotator(45.0f, 0.0f, 0.0f));

	// Set handling parameters
	Gravity = -900.0f;
	Acceleration = 500.f;
	TurnSpeed = 20.f;
	MaxSpeed = 4000.f;
	MinSpeed = 500.f;
	CurrentForwardSpeed = 500.f;
	Stamina = 100.0f;
	CurrentUpwardSpeed = Gravity;
	CurrentUpwardSpeedAccel = 1000.0f;
	CurrentForwardSpeed = 750.f;
	StaminaRechargeRate = 0.1f;
	StaminaDepletionRate = 0.02f;
	Owner = this;
	World = GetWorld();
}

void AALBIRB_EXPERIENCEPawn::Tick(float DeltaSeconds)
{
	UE_LOG(LogTemp, Warning, TEXT("Staminaaa = %f"), Stamina);

	const FVector LocalMove = FVector(CurrentForwardSpeed * DeltaSeconds, 0.0f, CurrentUpwardSpeed * DeltaSeconds);

	// Decrement Stamina
	Stamina -= StaminaDepletionRate / 1.5f; 
	Stamina = FMath::Clamp(Stamina, 0.0f, 100.0f);

	// Check if we're perching
	if (Perching)
	{
		if (Stamina < 100.0f)
		{
			RegenerateStamina();
		}		
	}

	// Move plan forwards (with sweep so we stop when we collide with things)
	AddActorLocalOffset(LocalMove, true);	

	// Calculate change in rotation this frame
	FRotator DeltaRotation(0,0,0);

	//DeltaRotation.Pitch = CurrentPitchSpeed * DeltaSeconds;
	DeltaRotation.Yaw = CurrentYawSpeed * DeltaSeconds;
	DeltaRotation.Roll = CurrentRollSpeed * DeltaSeconds;

	// Rotate plane
	AddActorLocalRotation(DeltaRotation);

	// Call any parent class Tick implementation
	Super::Tick(DeltaSeconds);
}

void AALBIRB_EXPERIENCEPawn::RegenerateStamina()
{	
	// Check important variables aren't null
	if (World && PerchBlueprint && Owner)
	{
		// Check player distance from all perches
		for (TActorIterator<AActor> It(World, PerchBlueprint); It; ++It)
		{
			float Distance = Owner->GetDistanceTo(*It);				
			if (Distance < 1500.0f)
			{				
				Stamina += StaminaRechargeRate;
				Stamina = FMath::Clamp(Stamina, 0.0f, 100.0f);
			}
		}		
	}
}

void AALBIRB_EXPERIENCEPawn::NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	// Deflect along the surface when we collide.
	FRotator CurrentRotation = GetActorRotation();
	SetActorRotation(FQuat::Slerp(CurrentRotation.Quaternion(), HitNormal.ToOrientationQuat(), 0.025f));
}

void AALBIRB_EXPERIENCEPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
    // Check if PlayerInputComponent is valid (not NULL)
	check(PlayerInputComponent);

	// Bind our control axis' to callback functions
	PlayerInputComponent->BindAxis("Thrust", this, &AALBIRB_EXPERIENCEPawn::ThrustInput);	
	PlayerInputComponent->BindAction("MoveUp", IE_Pressed, this, &AALBIRB_EXPERIENCEPawn::MoveUpInput);
	PlayerInputComponent->BindAction("MoveUp", IE_Released, this, &AALBIRB_EXPERIENCEPawn::MoveUpInputReleased);
	PlayerInputComponent->BindAction("Perching", IE_Pressed, this, &AALBIRB_EXPERIENCEPawn::PerchInput);
	PlayerInputComponent->BindAction("Perching", IE_Released, this, &AALBIRB_EXPERIENCEPawn::PerchInputReleased);
	PlayerInputComponent->BindAxis("MoveRight", this, &AALBIRB_EXPERIENCEPawn::MoveRightInput);
}

void AALBIRB_EXPERIENCEPawn::ThrustInput(float Val)
{
	if (!Perching)
	{
		// Decrement Stamina
		Stamina -= StaminaDepletionRate;
		Stamina = FMath::Clamp(Stamina, 0.0f, 100.0f);

		// Is there any input?
		bool bHasInput = !FMath::IsNearlyEqual(Val, 0.f);
		// If input is not held down, reduce speed
		float CurrentAcc = bHasInput ? (Val * Acceleration) : (-0.5f * Acceleration);
		// Calculate new speed
		float NewForwardSpeed = CurrentForwardSpeed + ((GetWorld()->GetDeltaSeconds() * CurrentAcc * (Stamina / 100))); // Stamina changes accel speed
		// Clamp between MinSpeed and MaxSpeed
		CurrentForwardSpeed = FMath::Clamp(NewForwardSpeed, MinSpeed, MaxSpeed);
	}
}

void AALBIRB_EXPERIENCEPawn::PerchInput()
{
	Perching = true;	
	CurrentUpwardSpeed = Gravity;
}

void AALBIRB_EXPERIENCEPawn::PerchInputReleased()
{
	Perching = false;	
}

void AALBIRB_EXPERIENCEPawn::MoveUpInput()
{
	if (!Perching)
	{
		// Decrement Stamina
		Stamina -= StaminaDepletionRate;
		Stamina = FMath::Clamp(Stamina, 0.0f, 100.0f);

		// Set upward speed to atleast 500.0f
		if (CurrentUpwardSpeed < 0.0f)
		{
			CurrentUpwardSpeed = 50.0f;
		}
		// Increase Upward Speed		
		CurrentUpwardSpeed += (CurrentUpwardSpeedAccel * (Stamina / 100)); // Stamina changes upward speed
	}
}

void AALBIRB_EXPERIENCEPawn::MoveUpInputReleased()
{
	CurrentUpwardSpeed = Gravity;	
}

void AALBIRB_EXPERIENCEPawn::MoveRightInput(float Val)
{	
	// Target yaw speed is based on input
	float TargetYawSpeed = (Val * TurnSpeed);

	// Smoothly interpolate to target yaw speed
	CurrentYawSpeed = FMath::FInterpTo(CurrentYawSpeed, TargetYawSpeed, GetWorld()->GetDeltaSeconds(), 2.f);

	// Is there any left/right input?
	const bool bIsTurning = FMath::Abs(Val) > 0.2f;

	// If turning, yaw value is used to influence roll
	// If not turning, roll to reverse current roll value.
	float TargetRollSpeed = GetActorRotation().Roll * -2.f;
	
	// Smoothly interpolate roll speed
	CurrentRollSpeed = FMath::FInterpTo(CurrentRollSpeed, TargetRollSpeed, GetWorld()->GetDeltaSeconds(), 2.f);	
}
