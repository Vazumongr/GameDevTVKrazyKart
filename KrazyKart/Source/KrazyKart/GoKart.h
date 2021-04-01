// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GoKart.generated.h"

UCLASS()
class KRAZYKART_API AGoKart : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGoKart();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	
	void MoveForward(float Value);
	void MoveRight(float Value);
	
	void UpdateLocationFromVelocity(float DeltaTime);
	void ApplyRotation(float DeltaTime);
	
	FVector GetResistance();
	
	FVector Velocity;
	/* Mass in Kilograms */
	UPROPERTY(EditAnywhere, Category = "Physics")
	float Mass = 1000.f;
	
	/* Max Driving Force that can be applied to the vehicle */
	UPROPERTY(EditAnywhere, Category = "Physics")
	float MaxDrivingForce = 10000.f;
	/* Max Degrees per second for rotating the vehicle */
	UPROPERTY(EditAnywhere, Category = "Physics")
	float MaxDegreesPerSecond = 90.f;
	/* Coefficient used for calculating AirResistance */
	UPROPERTY(EditAnywhere, Category = "Physics")
	float DragCoefficient = 16;

	float Throttle;
	float SteeringThrow;

};
