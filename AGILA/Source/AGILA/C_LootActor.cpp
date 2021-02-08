// Fill out your copyright notice in the Description page of Project Settings.


#include "C_LootActor.h"

// Sets default values
AC_LootActor::AC_LootActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}



// Called when the game starts or when spawned
void AC_LootActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AC_LootActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//if the raycast hits the tree
void AC_LootActor::Destroy()
{
	if(DestructibleComponent == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("NULL Destructible COMPONENT"));
		return;
	}

	DestructibleComponent->SetSimulatePhysics(true);
	
}
