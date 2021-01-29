// Fill out your copyright notice in the Description page of Project Settings.


#include "C_ItemClass.h"

// Sets default values
AC_ItemClass::AC_ItemClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AC_ItemClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_ItemClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

