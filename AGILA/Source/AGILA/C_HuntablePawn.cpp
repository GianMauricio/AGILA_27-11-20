// Fill out your copyright notice in the Description page of Project Settings.


#include "C_HuntablePawn.h"

// Sets default values
AC_HuntablePawn::AC_HuntablePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AC_HuntablePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_HuntablePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AC_HuntablePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
void AC_HuntablePawn::Move(float Speed) {
	float speed = this->HuntableBody->GetMass() ;
	FVector forceVector = this->GetActorForwardVector() * Speed * speed;
	FVector bodyloc = this->HuntableBody->GetComponentLocation();
	

	this->HuntableBody->AddForceAtLocation(forceVector, bodyloc);

	
	//UE_LOG(LogTemp, Display, TEXT("Moving with vector %s, Speed pf %f"), *forceVector.ToString(), (throttleSpeed * speed));
}
