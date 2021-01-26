// Fill out your copyright notice in the Description page of Project Settings.
#include "Eagle_Grab.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"


// Sets default values for this component's properties
UEagle_Grab::UEagle_Grab()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}




// Called when the game starts
void UEagle_Grab::BeginPlay()
{
	Super::BeginPlay();

	// ...

	UInputComponent* InputComponent = this->GetOwner()->FindComponentByClass<UInputComponent>();

	if(InputComponent != nullptr)
	{
		InputComponent->BindAction("Grab", IE_Pressed, this, &UEagle_Grab::grabObject);
		InputComponent->BindAction("Grab", IE_Released, this, &UEagle_Grab::releaseObject);
	}

	//init distance
	SpringArm = this->GetOwner()->FindComponentByClass<USpringArmComponent>();
	if(SpringArm != nullptr)
	{
		initial_distance = SpringArm->TargetArmLength;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("NULL SPRING ARM COMPONENT"));
	}

	camera = this->GetOwner()->FindComponentByClass<UCameraComponent>();
	
}


// Called every frame
void UEagle_Grab::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	if (isGrab)
	{
		FVector location = FVector::ZeroVector;
		FRotator rotation;
		location = camera->GetComponentLocation();
		float off = FMath::Atan(30 / initial_distance);
		FRotator offset = FRotator(-off - 10, 0, 0);
		rotation = camera->GetComponentRotation() + offset;
		distance = initial_distance / FMath::Cos(off);
		FVector line = location + rotation.Vector() * (distance + 100);

		if (grabbedActor != nullptr)
		{
			if (phandle != nullptr)
			{
				FVector currentloc = grabbedActor->GetActorLocation();
				currentloc = FMath::VInterpTo(currentloc, line, DeltaTime, 1);
				phandle->SetTargetLocation(line);
			}
			else
			{
				FVector grabbedLoc = grabbedActor->GetActorLocation();
				grabbedLoc = line;
				grabbedActor->SetActorLocation(grabbedLoc);
			}

		}
		else if (grabbedActor != nullptr)
		{
			UStaticMeshComponent* actorMesh = Cast<UStaticMeshComponent>(grabbedActor->GetRootComponent());
			actorMesh->AddImpulse(GetOwner()->GetActorLocation().ForwardVector * 2000.f);
		}

	}
}

void UEagle_Grab::grabObject()
{
	isGrab = true;
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("GRABBED"));

	/*
	FVector location = FVector::ZeroVector;
	FRotator rotation = FRotator::ZeroRotator;
	rotation.Pitch = 45.f;
	FRotator offset = FRotator(-45, 0, 0);
	staticmesh = this->GetOwner()->FindComponentByClass<UStaticMeshComponent>();
	if(staticmesh != nullptr)
	{
		location = staticmesh->GetComponentLocation();
		rotation = staticmesh->GetComponentRotation();
		FVector line = location + (rotation.Vector() + offset.Vector()) * distance;
		//FVector line = ((staticmesh->GetUpVector() * -1) + rotation.Vector()) * distance;
		DrawDebugLine(GetWorld(), location, line, FColor::Red, false, 2, 0, 5.f);
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Found Mesh"));
	}
	*/

	FVector location = FVector::ZeroVector;
	FRotator rotation;
	location = camera->GetComponentLocation();
	float off = FMath::Atan(30 / initial_distance);
	FRotator offset = FRotator(-off - 10, 0, 0);
	rotation = camera->GetComponentRotation() + offset;
	distance = initial_distance / FMath::Cos(off);
	FVector line = location + rotation.Vector() * (distance + 100);
	DrawDebugLine(GetWorld(), location, line, FColor::Red, false, 10, 0, 3.f);

	FHitResult hitResult;
	FCollisionQueryParams traceParam(FName("traceParams"), false, this->GetOwner());
	FCollisionObjectQueryParams objectParam(ECollisionChannel::ECC_PhysicsBody);
	GetWorld()->LineTraceSingleByObjectType(hitResult, location, line, objectParam, traceParam);

	grabbedActor = hitResult.GetActor();
	if(grabbedActor != nullptr)
	{
		isGrab = true;
		actorprim = hitResult.GetComponent();
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("grabbed: %s"), *actorprim->GetName());
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("grabbed object"));

		phandle = grabbedActor->FindComponentByClass<UPhysicsHandleComponent>();
		if (phandle != nullptr)
		{
			phandle->GrabComponentAtLocation(actorprim, EName::NAME_None, line);
		}

		grabbedActor->SetActorEnableCollision(false);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("null object"));

	}
}

void UEagle_Grab::releaseObject()
{
	isGrab = false;
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Released"));
	if(grabbedActor != nullptr)
	{
		grabbedActor->SetActorEnableCollision(true);
		grabbedActor = nullptr;
	}
	

	if (phandle != nullptr)
	{
		phandle->ReleaseComponent();
	}
}
