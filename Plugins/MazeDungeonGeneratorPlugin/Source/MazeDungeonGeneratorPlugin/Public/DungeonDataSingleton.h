//Copyright Zachary Kolansky, 2020

#pragma once
#include "CoreMinimal.h"
#include "Engine/StreamableManager.h"
#include "Containers/Ticker.h"
#include "DungeonDataSingleton.generated.h"


UCLASS(Blueprintable, BlueprintType)
class UDungeonDataSingleton : public UObject,  public FTSTickerObjectBase
{
	GENERATED_BODY()


public:

    static UDungeonDataSingleton& Get(); 	// Get method to access this object
	FStreamableManager AssetLoader;

    UDungeonDataSingleton(const FObjectInitializer& ObjectInitializer);

    virtual bool Tick(float DeltaSeconds) override;

};