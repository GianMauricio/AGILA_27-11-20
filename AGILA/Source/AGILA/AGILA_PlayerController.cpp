// Fill out your copyright notice in the Description page of Project Settings.


#include "AGILA_PlayerController.h"

void AAGILA_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	this->birdOwner = this->GetPawn<Ai_am_a_fuckin_camera_PAWN>();

	UInputComponent* inputcomponent = this->FindComponentByClass<UInputComponent>();
	if(inputcomponent != nullptr)
	{
		inputcomponent->BindAxis("MouseYaw", this, &AAGILA_PlayerController::CONTROLLER_MouseYaw);
		inputcomponent->BindAxis("MousePitch", this, &AAGILA_PlayerController::CONTROLLER_MousePitch);
		inputcomponent->BindAction("Flap", IE_Repeat, this, &AAGILA_PlayerController::CONTROLLER_MoveForward);
		inputcomponent->BindAction("Flap", IE_Released, this, &AAGILA_PlayerController::CONTROLLER_doNothing);
		inputcomponent->BindAction("Brakes", IE_Pressed, this, &AAGILA_PlayerController::CONTROLLER_addBrakes);
		inputcomponent->BindAction("Brakes", IE_Released, this, &AAGILA_PlayerController::CONTROLLER_removeBrakes);
	}
}

void AAGILA_PlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AAGILA_PlayerController::CONTROLLER_MouseYaw(float axis)
{
	if(birdOwner == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("NULL BIRD OWNER AT PLAYER CONTROLLER CLASS"));
		return;
	}
	birdOwner->MouseYaw(axis);
}

void AAGILA_PlayerController::CONTROLLER_MousePitch(float axis)
{
	if (birdOwner == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("NULL BIRD OWNER AT PLAYER CONTROLLER CLASS"));
		return;
	}
	birdOwner->MousePitch(axis);
}

void AAGILA_PlayerController::CONTROLLER_MoveForward()
{
	if (birdOwner == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("NULL BIRD OWNER AT PLAYER CONTROLLER CLASS"));
		return;
	}
	birdOwner->MoveForward();
}

void AAGILA_PlayerController::CONTROLLER_doNothing()
{
	if (birdOwner == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("NULL BIRD OWNER AT PLAYER CONTROLLER CLASS"));
		return;
	}
	birdOwner->doNothing();
}

void AAGILA_PlayerController::CONTROLLER_addBrakes()
{
	if (birdOwner == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("NULL BIRD OWNER AT PLAYER CONTROLLER CLASS"));
		return;
	}
	birdOwner->addBrakes();
}

void AAGILA_PlayerController::CONTROLLER_removeBrakes()
{
	if (birdOwner == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("NULL BIRD OWNER AT PLAYER CONTROLLER CLASS"));
		return;
	}
	birdOwner->removeBrakes();
}
