//Copyright Zachary Kolansky, 2020

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "MazeDataStructures.h"
#include "DungeonLevelScriptActor.generated.h"

/**
 * 
 */
UCLASS()
class MAZEDUNGEONGENERATORPLUGIN_API ADungeonLevelScriptActor : public ALevelScriptActor
{
	GENERATED_BODY()

//OVERRIDES
protected:
	
	virtual void BeginPlay() override;
	

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:


	/*
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Room Management")
	void AssignRoomData();
	*/

	/*
	Override this in BP.
	While ULevelStreamingDynamic Objects have a transform, they can only manage translation and rotation. THey can't manage scale. 
	We extend the functionality of the level by dealing with it here.
	*/
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent,Category = "DungeonLevelScriptActor")
	void SetLevelScale(const FVector& NewLevelScale);



	
};
