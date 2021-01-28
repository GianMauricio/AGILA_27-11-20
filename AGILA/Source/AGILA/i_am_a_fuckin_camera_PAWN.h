 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//for the components
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/ArrowComponent.h"
#include "Engine/StaticMeshActor.h"
#include "Math/UnrealMathUtility.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"

#include "Eagle_Grab.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "i_am_a_fuckin_camera_PAWN.generated.h"



UCLASS()
class AGILA_API Ai_am_a_fuckin_camera_PAWN : public APawn
{
	GENERATED_BODY()

//For the variables
public:
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
		USpringArmComponent* springArm;
	
	UCameraComponent* camera;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UArrowComponent* arrowLocation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UStaticMeshComponent* mesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float mouseSensitivity = 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UEagle_Grab* grabComponent;

	
	
	UPhysicsHandleComponent* phandle = nullptr;

	//Pass the values from the mouse pitch and yaw input
	FVector2D mouseInput; //x and y only


	bool moveForward;
	bool moveNothing;
	bool brakes;
	float currentVelocity = 0;
	
	UPROPERTY(EditAnywhere)
		float speedMultiplyer = 1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int health = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)  int MAX_HEALTH = 10;
	
	FVector previousPosition;
	FVector nowPosition;

public:
	// Sets default values for this pawn's properties
	Ai_am_a_fuckin_camera_PAWN();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	//Set identifiers
	void MouseYaw(float axis);
	void MousePitch(float axis);
	void MoveForward();
	void doNothing();
	void addBrakes();
	void removeBrakes();

	//health
	UFUNCTION(BlueprintCallable)
		int getHealth();
	UFUNCTION(BlueprintCallable)
		void takeDamage(int damage);
	UFUNCTION(BlueprintCallable)
		void onDeath();
	UFUNCTION(BlueprintCallable)
		void increaseHealth(int increase);
};
