// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ALBIRB_EXPERIENCEPawn.generated.h"

UCLASS(Config=Game)
class AALBIRB_EXPERIENCEPawn : public APawn
{
	GENERATED_BODY()

	/** StaticMesh component that will be the visuals for our flying pawn */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class USkeletalMeshComponent* PlaneMesh;

	/** Spring arm that will offset the camera */
	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArm;

	/** Camera component that will be our viewpoint */
	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;


public:
	AALBIRB_EXPERIENCEPawn();

	// Begin AActor overrides
	virtual void Tick(float DeltaSeconds) override;
	void RegenerateStamina();
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;		
	// End AActor overrides
	/** Current forward speed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentForwardSpeed;

	/** Current upward speed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentUpwardSpeed;

	/** Current upward speed accel */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentUpwardSpeedAccel;

	/** Current stamina*/
	float Stamina;

protected:

	// Begin APawn overrides
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override; // Allows binding actions/axes to functions
	// End APawn overrides

	/** Bound to the thrust axis */
	void ThrustInput(float Val);
	
	/** Bound to the vertical axis */
	void MoveUpInput();
	void MoveUpInputReleased();

	/** Bound to the horizontal axis */
	void MoveRightInput(float Val);

	void PerchInput();
	void PerchInputReleased();

private:

	/** How quickly forward speed changes */
	UPROPERTY(Category=Plane, EditAnywhere)
	float Acceleration;

	/** How quickly pawn can steer */
	UPROPERTY(Category=Plane, EditAnywhere)
	float TurnSpeed;

	/** Max forward speed */
	UPROPERTY(Category = Pitch, EditAnywhere)
	float MaxSpeed;

	/** Min forward speed */
	UPROPERTY(Category=Yaw, EditAnywhere)
	float MinSpeed;

	/** Current yaw speed */
	float CurrentYawSpeed;	

	/** Current roll speed */
	float CurrentRollSpeed;

	/** Current gravity */
	UPROPERTY(EditAnywhere)
	float Gravity;

	/** Current perch status */
	bool Perching;	

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> PerchBlueprint;	// 

	UWorld* World;

	AActor* Owner;

	UPROPERTY(EditAnywhere)
	float StaminaRechargeRate;

	UPROPERTY(EditAnywhere)
	float StaminaDepletionRate;
public:
	/** Returns PlaneMesh subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetPlaneMesh() const { return PlaneMesh; }
	/** Returns SpringArm subobject **/
	FORCEINLINE class USpringArmComponent* GetSpringArm() const { return SpringArm; }
	/** Returns Camera subobject **/
	FORCEINLINE class UCameraComponent* GetCamera() const { return Camera; }
};
