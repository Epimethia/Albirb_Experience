// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "PerchingComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ALBIRB_EXPERIENCE_API UPerchingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPerchingComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(Category = TriggerVolume, EditAnywhere)
	ATriggerVolume * PerchTrigger;
	UPROPERTY(EditAnywhere)	
	AActor* PlayerPawn;
	AActor* OwnerActor;	
	float LerpDelta;
	
};
