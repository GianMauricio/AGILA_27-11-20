// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/ActorComponent.h"
#include "C_HuntablePawn.h"
#include "C_LootActor.h"
#include "C:\Program Files\Epic Games\UE_4.25\Engine\Plugins\FX\Niagara\Source\Niagara\Public\NiagaraFunctionLibrary.h"
#include "Eagle_Grab.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AGILA_API UEagle_Grab : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEagle_Grab();

	void grabObject();
	void releaseObject();
	void hunt();
	void loot();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool isGrab = false;
	UStaticMeshComponent* staticmesh;
	float initial_distance = 200.f;
	float distance;
	AActor* grabbedActor = nullptr;
	UPhysicsHandleComponent* phandle = nullptr;
	UPrimitiveComponent* actorprim;

	UPROPERTY(EditAnywhere)
		UCameraComponent* camera;
	UPROPERTY(EditAnywhere)
		USpringArmComponent* SpringArm;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UNiagaraSystem* systemToSpawn;

	

		
};
