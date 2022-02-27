//Copyright Zachary Kolansky, 2020


#include "DungeonLevelScriptActor.h"

void ADungeonLevelScriptActor::BeginPlay()
{
	Super::BeginPlay();
	
	//UE_LOG(YourLog,Error,TEXT("STREAMING LEVEL BEGIN PLAY %s"), *GetName());
}

void ADungeonLevelScriptActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
	
	/*
	UE_LOG(YourLog,Error,TEXT("STREAMING LEVEL UNSTREAMED (name should not be none) %s"), *GetName());
	UE_LOG(YourLog,Error,TEXT("Victory!!!"));
	UE_LOG(YourLog,Error,TEXT("RUN ALL UNSTREAMING LEVEL LOGIC HERE"));
	*/

}

/*
void  ADungeonLevelScriptActor::AssignRoomData_Implementation()
{

}
*/
void ADungeonLevelScriptActor::SetLevelScale_Implementation(const FVector& NewLevelScale)
{
	//This function is meant to be overridden in BP
}

