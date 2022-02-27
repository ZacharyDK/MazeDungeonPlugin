//Copyright Zachary Kolansky, 2020

#include "DungeonDataSingleton.h"
#include "Engine/Engine.h"



UDungeonDataSingleton::UDungeonDataSingleton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{ 

}

//Get method to access the instance

UDungeonDataSingleton& UDungeonDataSingleton::Get()
{
	UDungeonDataSingleton *Singleton = Cast<UDungeonDataSingleton>(GEngine->GameSingleton);

	if (Singleton)
	{
		return *Singleton;
	}
	else
	{
		return *NewObject<UDungeonDataSingleton>(UDungeonDataSingleton::StaticClass()); // never calls this
	}
}

// OVERRIDE from FTICKER TICK (Preventing Error 2259)
bool UDungeonDataSingleton::Tick(float DeltaSeconds)
{
	return false; //was true, lets see if this prevents errors
}
