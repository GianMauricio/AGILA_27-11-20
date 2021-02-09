// Fill out your copyright notice in the Description page of Project Settings.
#include "TriggerComponent.h"
#include "Misc/OutputDeviceNull.h"


// Sets default values for this component's properties
UTriggerComponent::UTriggerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	if(triggerReference == nullptr)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("NULL TRIGGER REFERENCE! CHECK ACTORxTRIGGER CLASS!"));
	}
	
	
}


// Called every frame
void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	//check overlapping actors in the volume
	if(triggerReference != nullptr)
	{
		TArray<AActor*> actors;
		triggerReference->GetOverlappingActors(actors);

		for(int i = 0; i< actors.Num() ; i++)
		{
			//testing only. add to inventory function here.
			if(actors[i]->ActorHasTag(FName("Item")))
			{
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("FOUND OBJECT"));
				

				//get inventory component of this actor
				FOutputDeviceNull ar; //NO SPACES IN BP FUNCTION PLS!
				/*(if(this->GetOwner()->CallFunctionByNameWithArguments(TEXT("ToggleAddInventory"), ar, nullptr, true))//this->GetOwner()->FindFunction(FName("ToggleAddInventory"))
				{
					
					GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("FOUND THIS CLASS"));

					
					this->GetWorld()->DestroyActor(actors[i]);
				}*/

				if (actors[i]->CallFunctionByNameWithArguments(TEXT("Additem"), ar, nullptr, true))//AddToInventory_fromItem
				{
					//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("LETSGOOOO"));
					this->GetWorld()->DestroyActor(actors[i]);
				}
				
			}
			
		}
	}
}

