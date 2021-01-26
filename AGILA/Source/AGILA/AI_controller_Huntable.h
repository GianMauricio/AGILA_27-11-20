// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "C_HuntablePawn.h"
#include "AI_controller_Huntable.generated.h"


/**
 * 
 */
UCLASS()
class AGILA_API AAI_controller_Huntable : public AAIController
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadWrite) AActor* actorCopy;
private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	AC_HuntablePawn* GetControlledHuntable() const;
	//AC_HuntablePawn* GetPlayer() const; replace AC_HUntable with player pawn
};
