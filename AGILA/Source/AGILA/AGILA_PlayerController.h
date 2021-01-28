// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "i_am_a_fuckin_camera_PAWN.h"

#include "AGILA_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class AGILA_API AAGILA_PlayerController : public APlayerController
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	//pawn movement
	void CONTROLLER_MouseYaw(float axis);
	void CONTROLLER_MousePitch(float axis);
	void CONTROLLER_MoveForward();
	void CONTROLLER_doNothing();
	void CONTROLLER_addBrakes();
	void CONTROLLER_removeBrakes();

private:
	Ai_am_a_fuckin_camera_PAWN* birdOwner;
	
	
};
