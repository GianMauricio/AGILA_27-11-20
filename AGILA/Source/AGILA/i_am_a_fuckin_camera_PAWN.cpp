



// Fill out your copyright notice in the Description page of Project Settings.


#include "i_am_a_fuckin_camera_PAWN.h"


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
//	UStaticMeshComponent* meshComp = Cast<UStaticMeshComponent>(actorReference->GetRootComponent());


	
	//To position some stuff
	//pivot point to rotate around this actor //rootcomponent defines the transform of this actor in the world
	RootComponent = mesh;

	//Attach the stuff
	springArm->SetupAttachment(RootComponent);
	springArm->TargetArmLength = 350.f; //3.5 meters
	//springArm->TargetOffset = RootComponent->GetForwardVector().BackwardVector * 100.f;
	springArm->SetWorldRotation(FRotator(0.0f, 0.0f, 0.0f));//FRotator pitch yaw roll in degrees
								//this attaches the camera to the end of the springArm
	camera->SetupAttachment(springArm, USpringArmComponent::SocketName);
	
	arrowLocation->SetupAttachment(RootComponent);//Attach to birb later
	//arrowLocation->AttachTo(springArm, USpringArmComponent::SocketName, EAttachLocation::KeepWorldPosition);

	//enable this pawn to receive player inputs from player controller 0
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	//reference to the actor static mesh
	//actorReference->GetComponents<UStaticMeshComponent>(StaticComps);
	
}

// Called when the game starts or when spawned
void Ai_am_a_fuckin_camera_PAWN::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("HEllo"));
	
}

// Called every frame
void Ai_am_a_fuckin_camera_PAWN::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//update camera rotation
	/////////////////////////////////////////////////////////////////
	FRotator newYaw = GetActorRotation();
	newYaw.Yaw += mouseInput.X;
	SetActorRotation(newYaw);
	FRotator newPitch = springArm->GetComponentRotation();
	newPitch.Pitch = FMath::Clamp(newPitch.Pitch + mouseInput.Y, -80.f, 80.f); // MIN_MAX[0], MIN_MAX[1]
	springArm->SetWorldRotation(newPitch);
	/////////////////////////////////////////////////////////////////

	//Rotate the arrow component
	/////////////////////////////////////////////////////////////////
	FRotator meshRotate;
	meshRotate.Pitch = newPitch.Pitch;
	meshRotate.Yaw = newYaw.Yaw;
	arrowLocation->SetWorldRotation(meshRotate);
	//RootComponent->SetWorldRotation(meshRotate);
	/////////////////////////////////////////////////////////////////
	

	arrowLocation->GetForwardVector();
	FVector offset = arrowLocation->GetForwardVector() * -100.f;


	//Actor Tilting
	/////////////////////////////////////////////////////////////////
	FRotator rollOffset;
	rollOffset.Roll = FMath::Clamp(rollOffset.Pitch + mouseInput.X * 10, -35.f, 35.f);
	FRotator finalOffset;
	if (mouseInput.X)
	{
		//this is a bad idea //find some damp function
		finalOffset.Roll = FMath::FInterpTo(actorReference->GetActorRotation().Roll,
		                                    actorReference->GetActorRotation().Roll + (rollOffset.Roll), DeltaTime,
		                                    3.2f);
	}
	else
	{
		finalOffset.Roll = FMath::FInterpTo(actorReference->GetActorRotation().Roll,
		                                    arrowLocation->GetComponentRotation().Roll, DeltaTime, 4.2f);
	}
	/////////////////////////////////////////////////////////////////





	//physics
	if (!moveForward || moveForward)
	{
		FVector location = RootComponent->GetComponentLocation(); 
		FVector downVector;
		
		//FString velocityString = FString::SanitizeFloat(currentVelocity);
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, velocityString);
		
		currentVelocity -= 10;
		if (currentVelocity <= 0)
		{
			currentVelocity = 0;
		}

		nowPosition = RootComponent->GetComponentLocation();
		FVector deltaPosition = nowPosition - previousPosition;

		/*
		RootComponent->SetWorldLocation(location + (arrowLocation->GetForwardVector() * currentVelocity * DeltaTime) + (downVector.DownVector * (9.8*50) * DeltaTime));
		//actorReference->SetActorLocation(mesh->GetComponentLocation() + offset);
		previousPosition = RootComponent->GetComponentLocation();

		actorReference->SetActorRelativeLocation(RootComponent->GetComponentLocation() - offset);
		actorReference->SetActorRotation(arrowLocation->GetComponentRotation() + finalOffset);
		*/

		FVector actorLoc = actorReference->GetActorLocation();
		actorReference->SetActorLocation(actorLoc + (arrowLocation->GetForwardVector() * currentVelocity * DeltaTime) + (downVector.DownVector * (9.8 * 50) * DeltaTime));
		RootComponent->SetWorldLocation((actorReference->GetActorLocation() + offset));
		actorReference->SetActorRotation(arrowLocation->GetComponentRotation() + finalOffset);




		
	}

	
	if (actorReference != NULL)
	{
		//RootComponent->SetWorldLocation(actorReference->GetActorLocation() + offset);
		//RootComponent->SetWorldLocation(actorReference->GetActorLocation() + offset); // this works

		//actorReference->SetActorRotation(arrowLocation->GetComponentRotation() + finalOffset); // this works


		//do not delete me bitch
		/*
		//actorMesh->SetWorldRotation(arrowLocation->GetComponentRotation() + finalOffset); //do not open this lmaooo
		//
		//
		//actorReference->SetActorRotation(arrowLocation->GetComponentRotation());//+meshRotate
		//actorReference->SetActorRotation(springArm->GetTargetRotation());//this works
		//actorReference->SetActorRotation(camera->GetForwardVector().Rotation);
		*/
	}

	
}

// Called to bind functionality to input
void Ai_am_a_fuckin_camera_PAWN::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//bind listeners
	InputComponent->BindAxis("MouseYaw", this, &Ai_am_a_fuckin_camera_PAWN::MouseYaw);
	InputComponent->BindAxis("MousePitch", this, &Ai_am_a_fuckin_camera_PAWN::MousePitch);
	InputComponent->BindAction("Flap", IE_Repeat, this, &Ai_am_a_fuckin_camera_PAWN::MoveForward);
	InputComponent->BindAction("Flap", IE_Released, this, &Ai_am_a_fuckin_camera_PAWN::doNothing);
}

void Ai_am_a_fuckin_camera_PAWN::MouseYaw(float axis) {
	mouseInput.X = axis;
}

void Ai_am_a_fuckin_camera_PAWN::MousePitch(float axis) {
	mouseInput.Y = axis;
}

void Ai_am_a_fuckin_camera_PAWN::MoveForward() {
	/*UStaticMeshComponent* meshComp = Cast<UStaticMeshComponent>(actorReference->GetRootComponent());
	if (meshComp) {
		//float speed = 100.f;
		//meshComp->AddImpulse(actorReference->GetActorForwardVector() * 15000.f * meshComp->GetMass());
		//actorReference->SetActorLocation(actorReference->GetActorLocation().ForwardVector + speed * )
	}*/
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("FOWARD"));
	moveForward = true;
	currentVelocity = 3000;
	/*currentVelocity += 500;
	if(currentVelocity > 3000)
	{
		currentVelocity = 300;
	}*/
	
}
void Ai_am_a_fuckin_camera_PAWN::doNothing()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("FOWARD RELEASED"));
	moveForward = false;
	
	
}

