// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

//#include "C:\Program Files\Epic Games\UE_4.25\Engine\Plugins\Runtime\ApexDestruction\Source\ApexDestruction\Public"
#include "C:\Program Files\Epic Games\UE_4.25\Engine\Plugins\Runtime\ApexDestruction\Source\ApexDestruction\Public\DestructibleComponent.h"

#include "C_LootActor.generated.h"

UCLASS()
class AGILA_API AC_LootActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AC_LootActor();

	//get the destrutible object in the blueprint
//	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	
	void Destroy();


	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UDestructibleComponent* DestructibleComponent;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
