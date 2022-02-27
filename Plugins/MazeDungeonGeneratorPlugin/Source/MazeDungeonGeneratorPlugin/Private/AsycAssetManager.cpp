//Copyright Zachary Kolansky, 2020


#include "AsycAssetManager.h"
#include "DungeonDataSingleton.h"
#include "Kismet/KismetMathLibrary.h"
#include "Runtime/Core/Public/Math/UnrealMathUtility.h"


// Sets default values for this component's properties
UAsycAssetManager::UAsycAssetManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UAsycAssetManager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAsycAssetManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

template<class T>
TArray<FSoftObjectPath> UAsycAssetManager::GetSoftObjectPaths(const TArray<T>& InputSoftPtrArray, EAsycLoadType LoadType, int32 Index)
{
	TArray<FSoftObjectPath> SoftObjectPaths = {};

	switch(LoadType)
	{
		case (EAsycLoadType::LoadAll):
			for (int32 i = 0; i < InputSoftPtrArray.Num(); i++) 
			{
				SoftObjectPaths.AddUnique(InputSoftPtrArray[i].ToSoftObjectPath());
			}
			break;
		case (EAsycLoadType::LoadGivenIndex):
			if(Index >= 0 && Index < InputSoftPtrArray.Num())
			{
				SoftObjectPaths.AddUnique(InputSoftPtrArray[Index].ToSoftObjectPath());
			}
			break;
		case(EAsycLoadType::LoadRandomIndex):
			Index =  FMath::RandRange(0,InputSoftPtrArray.Num()-1);
			SoftObjectPaths.AddUnique(InputSoftPtrArray[Index].ToSoftObjectPath());
			break;
		
	}

	return SoftObjectPaths;
}

void UAsycAssetManager::LoadActorSoftReferences()
{
	FStreamableManager& BaseLoader = UDungeonDataSingleton::Get().AssetLoader;
	BaseLoader.RequestAsyncLoad(UAsycAssetManager::GetSoftObjectPaths<TSoftClassPtr<AActor>>(ActorSoftClasses),FStreamableDelegate::CreateUObject(this,&UAsycAssetManager::PostLoadActorSoftReferences ));
}

void UAsycAssetManager::LoadAllSoftReferences()
{
	LoadActorSoftReferences();
	LoadFXSystemSoftReferences();
	LoadMaterialSoftReferences();
	LoadSoundCueSoftReferences();
	LoadTextureSoftReferences();
	LoadUObjectSoftReferences();
}

void UAsycAssetManager::LoadFXSystemSoftReferences()
{
	FStreamableManager& BaseLoader = UDungeonDataSingleton::Get().AssetLoader;
	BaseLoader.RequestAsyncLoad(UAsycAssetManager::GetSoftObjectPaths<TSoftObjectPtr<UFXSystemComponent>>(SoftFXSystemReferences),FStreamableDelegate::CreateUObject(this,&UAsycAssetManager::PostLoadFXSystemSoftReferences ));
}

void UAsycAssetManager::LoadMaterialSoftReferences()
{
	FStreamableManager& BaseLoader = UDungeonDataSingleton::Get().AssetLoader;
	BaseLoader.RequestAsyncLoad(UAsycAssetManager::GetSoftObjectPaths<TSoftObjectPtr<UMaterialInterface>>(SoftMaterialReferences),FStreamableDelegate::CreateUObject(this,&UAsycAssetManager::PostLoadMaterialSoftReferences ));
}

void UAsycAssetManager::LoadSoundCueSoftReferences()
{
	FStreamableManager& BaseLoader = UDungeonDataSingleton::Get().AssetLoader;
	BaseLoader.RequestAsyncLoad(UAsycAssetManager::GetSoftObjectPaths<TSoftObjectPtr<USoundCue>>(SoftSoundCueReferences),FStreamableDelegate::CreateUObject(this,&UAsycAssetManager::PostLoadSoundCueSoftReferences ));
}

void UAsycAssetManager::LoadTextureSoftReferences()
{
	FStreamableManager& BaseLoader = UDungeonDataSingleton::Get().AssetLoader;
	BaseLoader.RequestAsyncLoad(UAsycAssetManager::GetSoftObjectPaths<TSoftObjectPtr<UTexture2D>>(SoftTextureReferences),FStreamableDelegate::CreateUObject(this,&UAsycAssetManager::PostLoadTextureSoftReferences ));
}

void UAsycAssetManager::LoadUObjectSoftReferences()
{
	FStreamableManager& BaseLoader = UDungeonDataSingleton::Get().AssetLoader;
	BaseLoader.RequestAsyncLoad(UAsycAssetManager::GetSoftObjectPaths<TSoftObjectPtr<UObject>>(UObjectReferences),FStreamableDelegate::CreateUObject(this,&UAsycAssetManager::PostLoadUObjectSoftReferences ));
}

void UAsycAssetManager::PostLoadActorSoftReferences()
{
	OnActorReferencesLoadFinish.Broadcast();
}

void UAsycAssetManager::PostLoadFXSystemSoftReferences()
{
	OnFXSystemLoadFinish.Broadcast();
}

void UAsycAssetManager::PostLoadMaterialSoftReferences()
{
	OnMaterialReferencesLoadFinish.Broadcast();
}

void UAsycAssetManager::PostLoadSoundCueSoftReferences()
{
	OnSoundCueReferencesLoadFinish.Broadcast();
}

void UAsycAssetManager::PostLoadTextureSoftReferences()
{
	OnTextureReferencesLoadFinish.Broadcast();
}

void UAsycAssetManager::PostLoadUObjectSoftReferences()
{
	OnUObjectReferencesLoadFinish.Broadcast();
}