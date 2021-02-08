// Fill out your copyright notice in the Description page of Project Settings.
#include "Eagle_Grab.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Misc/OutputDeviceNull.h"
#include "i_am_a_fuckin_camera_PAWN.h"

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
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("NULL SPRING ARM COMPONENT"));
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
	FVector line = location + rotation.Vector() * (distance + 240);
	//DrawDebugLine(GetWorld(), location, line, FColor::Red, false, 10, 0, 3.f);

	FHitResult hitResult;
	FCollisionQueryParams traceParam(FName("traceParams"), false, this->GetOwner());
	FCollisionObjectQueryParams objectParam(ECollisionChannel::ECC_OverlapAll_Deprecated);//ecc_physics
	GetWorld()->LineTraceSingleByObjectType(hitResult, location, line, objectParam, traceParam);
	DrawDebugLine(this->GetWorld(), location, line, FColor::Red, false, 5);
	//GetWorld()->LineTraceSingleByChannel(hitResult, location, line, ECollisionChannel::ECC_Destructible);

	grabbedActor = hitResult.GetActor();

	//Check if the grabbed object is a rabbit
	if (grabbedActor != nullptr && grabbedActor->ActorHasTag(FName("HuntablePawn"))) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("grabbed bunny"));
		//ignore
		hunt();
		releaseObject();
		return;
		
	}

	if (grabbedActor != nullptr && grabbedActor->ActorHasTag(FName("Loot"))) {
		//ignore
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("grabbed tree"));
		loot();
		releaseObject();
		return;

	}
	
	if(grabbedActor != nullptr && grabbedActor->ActorHasTag(FName("Item")))
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("grabbed item"));
		isGrab = true;
		actorprim = hitResult.GetComponent();
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("grabbed: %s"), *actorprim->GetName());
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("grabbed object"));

		phandle = grabbedActor->FindComponentByClass<UPhysicsHandleComponent>();
		if (phandle != nullptr)
		{
			phandle->GrabComponentAtLocation(actorprim, EName::NAME_None, line);
		}

		grabbedActor->SetActorEnableCollision(false);
	}
	
	


	/*
	//check again for a destructable
	FHitResult HitResult2;
	FCollisionObjectQueryParams objectParam2(ECollisionChannel::ECC_Destructible);//ecc_physics
	GetWorld()->LineTraceSingleByObjectType(HitResult2, location, line, objectParam2, traceParam);
	grabbedActor = HitResult2.GetActor();

	//check if grabbed object is the abandoned nest
	if (grabbedActor != nullptr && grabbedActor->ActorHasTag(FName("Loot"))) {
		//ignore
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("grabbed object"));
		loot();
		releaseObject();
		return;

	}


*/

	
}

void UEagle_Grab::releaseObject()
{
	isGrab = false;
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Released"));
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

void UEagle_Grab::hunt()
{
	
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("HUNTING!"));

	if (systemToSpawn == nullptr)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("null niagara system at eagle grab component"));
		return;
	}
	
	if (grabbedActor == nullptr)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("null actor at eagle grab component"));
		return;
	}
	FVector spawnLocation = grabbedActor->GetActorLocation();
	FRotator spawnRotation = FRotator::ZeroRotator;
	

	//call spawning of the drops
	Ai_am_a_fuckin_camera_PAWN* parent = Cast<Ai_am_a_fuckin_camera_PAWN>(this->GetOwner());
	if(parent != nullptr)
	{
		//call the function from the parent
//		parent->spawnDrops();
//		parent->spawnTransform = grabbedActor->GetActorTransform();
		
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("TIME TO SPAWN SOM BAKs"));
	}
	//destroy the bunny
	this->GetWorld()->DestroyActor(grabbedActor);

	
	UNiagaraComponent* effect = UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, systemToSpawn, spawnLocation, spawnRotation);
	
	//add some upgrade here like when u get hp or something
	FOutputDeviceNull ar;
	this->GetOwner()->CallFunctionByNameWithArguments(TEXT("increaseHealth"), ar, nullptr, false);

	
	Ai_am_a_fuckin_camera_PAWN* owner = Cast<Ai_am_a_fuckin_camera_PAWN>(this->GetOwner());
	if(owner != nullptr)
	{
		owner->increaseHealth(1);
	}
	
}

void UEagle_Grab::loot()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("LOOTING!"));

	if (grabbedActor == nullptr)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("null actor at eagle grab component"));
		return;
	}
	
	//enable physics on the tree
	AC_LootActor* abandonedNest = Cast<AC_LootActor>(this->grabbedActor);

	if(abandonedNest == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("null actor at grabbing tree unable to cast i think"));
		return;
	}

	//call the function at the tree
	abandonedNest->Destroy();
	UDestructibleComponent* dComponent = abandonedNest->FindComponentByClass<UDestructibleComponent>();
	dComponent->ApplyDamage(1.f, dComponent->GetComponentLocation(), FVector::ZeroVector, 1.f);


	//add some upgrade here like when u get hp or something
//	FOutputDeviceNull ar;
//	this->GetOwner()->CallFunctionByNameWithArguments(TEXT("increaseHealth"), ar, nullptr, false);


	Ai_am_a_fuckin_camera_PAWN* owner = Cast<Ai_am_a_fuckin_camera_PAWN>(this->GetOwner());
	if (owner != nullptr)
	{
		owner->getLoot();
	}
	
}

