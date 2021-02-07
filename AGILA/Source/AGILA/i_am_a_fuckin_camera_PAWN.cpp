
// Fill out your copyright notice in the Description page of Project Settings.


#include "i_am_a_fuckin_camera_PAWN.h"
#include "Misc/OutputDeviceNull.h"
#include <string>


// Sets default values
Ai_am_a_fuckin_camera_PAWN::Ai_am_a_fuckin_camera_PAWN()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Set components here
	springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	arrowLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	//Debug purposes lang
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	mesh->SetSimulatePhysics(true);
	
	
	//To position some stuff
	//pivot point to rotate around this actor //rootcomponent defines the transform of this actor in the world
	//RootComponent = primitive;//mesh
	RootComponent = mesh;
	//Attach the stuff
	
	springArm->SetupAttachment(RootComponent);
	springArm->TargetArmLength = 70.f; //3.5 meters //350.f
	springArm->SetWorldRotation(FRotator(0.0f, 0.0f, 0.0f));//FRotator pitch yaw roll in degrees
								//this attaches the camera to the end of the springArm
	camera->SetupAttachment(springArm, USpringArmComponent::SocketName);
	arrowLocation->SetupAttachment(RootComponent);//Attach to birb later
	
	grabComponent = CreateDefaultSubobject<UEagle_Grab>(TEXT("Grab"));

	//enable this pawn to receive player inputs from player controller 0
	//AutoPossessPlayer = EAutoReceiveInput::Player0;

	
}

// Called when the game starts or when spawned
void Ai_am_a_fuckin_camera_PAWN::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("HEllo"));
	/*
	nowPosition = actorReference->GetActorLocation();
	previousPosition = actorReference->GetActorLocation();
	*/
}

// Called every frame
void Ai_am_a_fuckin_camera_PAWN::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	//update camera rotation
	
	/////////////////////////////////////////////////////////////////
	FRotator newYaw = GetActorRotation();
	newYaw.Yaw += (mouseInput.X * mouseSensitivity);
	//SetActorRotation(newYaw);
	FRotator newPitch = springArm->GetComponentRotation();
	newPitch.Pitch = FMath::Clamp(newPitch.Pitch + (mouseInput.Y * mouseSensitivity), -80.f, 80.f); // MIN_MAX[0], MIN_MAX[1]
	//springArm->SetWorldRotation(newPitch);

	
	/////////////////////////////////////////////////////////////////

	
	//Rotate the arrow component
	/////////////////////////////////////////////////////////////////
	FRotator meshRotate;
	meshRotate.Pitch = newPitch.Pitch;
	meshRotate.Yaw = newYaw.Yaw;
//	arrowLocation->SetWorldRotation(meshRotate);
	//mesh->SetWorldRotation(meshRotate);
	/////////////////////////////////////////////////////////////////


	//update rotations
	FRotator cur = mesh->GetComponentRotation();
//	FString velocityString = FString::SanitizeFloat(cur.Roll);
//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, velocityString);

	arrowLocation->GetForwardVector();
	FVector offset = arrowLocation->GetForwardVector() * -100.f;


	//Actor Tilting
	FRotator rollOffset;						//pitch
	rollOffset.Roll = FMath::Clamp(rollOffset.Roll + mouseInput.X * 40, -35.f, 35.f);
	FRotator finalOffset;
	if (mouseInput.X)
	{
		//this is a bad idea //find some damp function
		finalOffset.Roll = FMath::FInterpTo(mesh->GetComponentRotation().Roll,
		                                   mesh->GetComponentRotation().Roll + (rollOffset.Roll), DeltaTime,
		                                    1.2f);
		mesh->SetWorldRotation(finalOffset);
	}
	//error correction
	else if (!mouseInput.X)//cur.Roll != 0 && 
	{
		cur.Roll = FMath::FInterpTo(cur.Roll, 0, DeltaTime, 5);
		mesh->SetWorldRotation(cur);//FString velocityString = FString::SanitizeFloat(currentVelocity);
		//mesh->SetAllPhysicsRotation(cur);
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, velocityString);

	}
	/////////////////////////////////////////////////////////////////
	
	

	//physics
	if (!moveForward || moveForward)
	{
		FVector location = RootComponent->GetComponentLocation(); 
		FVector downVector;
		
		//FString velocityString = FString::SanitizeFloat(currentVelocity);
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, velocityString);
		
		//get change in position		
		FVector deltaPosition = nowPosition - previousPosition;
		deltaPosition.Normalize();
		FVector deltaVelocity = deltaPosition / DeltaTime;
		FString velocityString = deltaVelocity.ToString();
		previousPosition = nowPosition;

	
		//FString someString = velocityString;
		//FString someString = deltaPosition.ToString();
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, someString);
		//if(speed < 50 && deltaPosition)

		if(moveForward)
		{
			//check if going up
			if(deltaPosition.Z > 0.75)
			{
			//	currentVelocity = FMath::FInterpTo(currentVelocity, -3000.f, DeltaTime, 0.5f);//3000.f
				moveForward = false;
			}
			else if(deltaPosition.Z < -0.5)
			{
				currentVelocity = FMath::FInterpTo(currentVelocity, 5000.f, DeltaTime, 0.6f);//3000.f
			}
			else
			{
				currentVelocity = FMath::FInterpTo(currentVelocity, 3000.f, DeltaTime, 0.5f);//3000.f
			}

			if(moveForward)
			{
				mesh->SetAllPhysicsLinearVelocity(mesh->GetForwardVector() * currentVelocity * speedMultiplyer);
			}
			
			if (didHit)
			{
				currentVelocity = 0;
				mesh->SetAllPhysicsLinearVelocity(mesh->GetForwardVector() * currentVelocity * speedMultiplyer);
				didHit = false;
			}
			
		}
		else if (!moveForward)
		{
			
			if(deltaPosition.Z < -0.5)
			{
				currentVelocity = FMath::FInterpTo(currentVelocity, 3000, DeltaTime, 0.4f);
			}
			else if(deltaPosition.Z > 0.75)
			{
				currentVelocity = FMath::FInterpTo(currentVelocity, -3000, DeltaTime, 0.4f);
			}
			else{
				currentVelocity = FMath::FInterpTo(currentVelocity, 0, DeltaTime, 0.2f);
			}
			
			mesh->SetAllPhysicsLinearVelocity(mesh->GetForwardVector() * currentVelocity * speedMultiplyer);
		}
		if(brakes)
		{
			currentVelocity = FMath::FInterpTo(currentVelocity, 0, DeltaTime, 10.f);
			
			mesh->SetAllPhysicsLinearVelocity(mesh->GetForwardVector() * currentVelocity * speedMultiplyer);
		}



		if(didHit)
		{
			currentVelocity = 0;
			mesh->SetAllPhysicsLinearVelocity(mesh->GetForwardVector() * currentVelocity * speedMultiplyer);
			didHit = false;
		}
		nowPosition = mesh->GetComponentLocation();
	}
	
}

// Called to bind functionality to input
void Ai_am_a_fuckin_camera_PAWN::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//bind listeners
	/*
	InputComponent->BindAxis("MouseYaw", this, &Ai_am_a_fuckin_camera_PAWN::MouseYaw);
	InputComponent->BindAxis("MousePitch", this, &Ai_am_a_fuckin_camera_PAWN::MousePitch);
	InputComponent->BindAction("Flap", IE_Repeat, this, &Ai_am_a_fuckin_camera_PAWN::MoveForward);
	InputComponent->BindAction("Flap", IE_Released, this, &Ai_am_a_fuckin_camera_PAWN::doNothing);
	InputComponent->BindAction("Brakes", IE_Pressed, this, &Ai_am_a_fuckin_camera_PAWN::addBrakes);
	InputComponent->BindAction("Brakes", IE_Released, this, &Ai_am_a_fuckin_camera_PAWN::removeBrakes);
	*/
}

void Ai_am_a_fuckin_camera_PAWN::MouseYaw(float axis) {
	mouseInput.X = axis;
	if(axis)
	{
		AddActorLocalRotation(FRotator(0, axis, 0));
	}
	
}

void Ai_am_a_fuckin_camera_PAWN::MousePitch(float axis) {
	mouseInput.Y = axis;

	//new code
	if(axis)
	{
		float temp = springArm->GetRelativeRotation().Pitch + axis;
		if(temp < 25 && temp > -65)
		{
			//springArm->AddLocalRotation(FRotator(axis, 0, 0));
			//mesh->SetWorldRotation(FRotator(mouseInput.X,mouseInput.Y,0));
			mesh->AddLocalRotation(FRotator(axis, 0, 0));
		}
	}
}

void Ai_am_a_fuckin_camera_PAWN::MoveForward() {
	
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("FOWARD"));
	moveForward = true;
		
	
}
void Ai_am_a_fuckin_camera_PAWN::doNothing()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("FOWARD RELEASED"));
	moveForward = false;
	
	
}

void Ai_am_a_fuckin_camera_PAWN::addBrakes()
{
	brakes = true;
}

void Ai_am_a_fuckin_camera_PAWN::removeBrakes()
{
	brakes = false;
}

int Ai_am_a_fuckin_camera_PAWN::getHealth()
{
	return health;
}

void Ai_am_a_fuckin_camera_PAWN::takeDamage(int damage)
{
	health -= damage;
	if(health <= 1)
	{
		onDeath();
	}
}

void Ai_am_a_fuckin_camera_PAWN::onDeath()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString("ded bird"));
}

void Ai_am_a_fuckin_camera_PAWN::increaseHealth(int increase)
{
	health += increase;
	if(health > MAX_HEALTH)
	{
		health = MAX_HEALTH;
	}

	FOutputDeviceNull ar;
	if (meatInventory->CallFunctionByNameWithArguments(TEXT("AddToInventoryfromItem"), ar, nullptr, true))//AddToInventory_fromItem
	{
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("added meat!!!"));
	}

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString("got health!"));
}

void Ai_am_a_fuckin_camera_PAWN::increaseMaxHealth(int increase)
{
	//Player does not heal when getting a health upgrade to show that the players max health increased

	if (MAX_HEALTH < 16) 
	{
		MAX_HEALTH += increase;
	}
}

void Ai_am_a_fuckin_camera_PAWN::increaseSpeed(int increase)
{
	if(speedMultiplyer < 1.5)
	{
		speedMultiplyer = newSpeed;
	}
}