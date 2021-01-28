// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_controller_Huntable.h"

void AAI_controller_Huntable::BeginPlay()
{
	Super::BeginPlay();
	AC_HuntablePawn* myPawn = this->GetControlledHuntable();

}

void AAI_controller_Huntable::Tick(float deltaTime)
{
	//reference for initial values of these
	//float moveTicks = 0.0f; 
	//float move_INTERVAL = 10.0f;
	//float moveSpeed = 20.0f;


	Super::Tick(deltaTime);
	this->moveTicks += deltaTime;

	//code AI logic here
	if (this->moveTicks > this->move_INTERVAL)
	{
		this->move_INTERVAL = FMath::FRandRange(2.0f, 4.0f);
		this->moveTicks = 0.0f;
		this->OnMove(moveSpeed);
		UE_LOG(LogTemp, Warning, TEXT("I should be Moving"));

	}


} //error here Unhandled Exception: EXCEPTION_ACCESS_VIOLATION reading address 0x00000000

AC_HuntablePawn* AAI_controller_Huntable::GetControlledHuntable() const
{
	return this->GetPawn<AC_HuntablePawn>();
}

void AAI_controller_Huntable::OnMove(float Speed)
{
	this->GetPawn<AC_HuntablePawn>()->Move(Speed);
}
