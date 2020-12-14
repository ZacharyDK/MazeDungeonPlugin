//Copyright Zachary Kolansky, 2020

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AsycAssetManager.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsycAssetLoadEvent);

UENUM(BlueprintType)
enum class EAsycLoadType : uint8 {LoadAll,LoadGivenIndex,LoadRandomIndex};


/*
The purpose of this component is to asyncronously load various soft pointers
*/
UCLASS( Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAZEDUNGEONGENERATORPLUGIN_API UAsycAssetManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAsycAssetManager();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/*
	EVENTS
	*/

	UPROPERTY(BlueprintAssignable)
	FAsycAssetLoadEvent OnActorReferencesLoadFinish;

	UPROPERTY(BlueprintAssignable)
	FAsycAssetLoadEvent OnFXSystemLoadFinish;
	
	UPROPERTY(BlueprintAssignable)
	FAsycAssetLoadEvent OnMaterialReferencesLoadFinish;

	UPROPERTY(BlueprintAssignable)
	FAsycAssetLoadEvent OnSoundCueReferencesLoadFinish;

	UPROPERTY(BlueprintAssignable)
	FAsycAssetLoadEvent OnTextureReferencesLoadFinish;

	UPROPERTY(BlueprintAssignable)
	FAsycAssetLoadEvent OnUObjectReferencesLoadFinish;



	/*
	Template
	*/
	/*
	InputSoftPtrArray soft pointer array we want to convert to soft object paths
	Index = index of the array we want to load. 
	has no effect if LoadType =  EAsycLoadType::LoadAll
	*/
	template<class T>
	static FORCEINLINE TArray<FSoftObjectPath> GetSoftObjectPaths(const TArray<T>& InputSoftPtrArray, EAsycLoadType LoadType = EAsycLoadType::LoadAll, int32 Index = 0);


	/*
	Variables
	*/

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = SoftClassReferences)
	TArray< TSoftClassPtr<class AActor>> ActorSoftClasses = {};

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = SoftObjectReferences)
	TArray<TSoftObjectPtr<class UFXSystemComponent>> SoftFXSystemReferences = {};

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = SoftObjectReferences)
	TArray<TSoftObjectPtr<class UMaterialInterface>> SoftMaterialReferences = {};

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = SoftObjectReferences)
	TArray<TSoftObjectPtr<class USoundCue >> SoftSoundCueReferences = {};

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = SoftObjectReferences)
	TArray<TSoftObjectPtr<class UTexture2D>> SoftTextureReferences = {};

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = SoftObjectReferences)
	TArray<TSoftObjectPtr<class UObject>> UObjectReferences = {};





	UFUNCTION(BlueprintCallable, Category = Loading)
	void LoadActorSoftReferences();

	UFUNCTION(BlueprintCallable, Category = Loading)
	void LoadAllSoftReferences();

	UFUNCTION(BlueprintCallable, Category = Loading)
	void LoadFXSystemSoftReferences();

	UFUNCTION(BlueprintCallable, Category = Loading)
	void LoadMaterialSoftReferences();

	UFUNCTION(BlueprintCallable, Category = Loading)
	void LoadSoundCueSoftReferences();

	UFUNCTION(BlueprintCallable, Category = Loading)
	void LoadTextureSoftReferences();

	UFUNCTION(BlueprintCallable, Category = Loading)
	void LoadUObjectSoftReferences();

	UFUNCTION()
	void PostLoadActorSoftReferences();

	UFUNCTION()
	void PostLoadFXSystemSoftReferences();

	UFUNCTION()
	void PostLoadMaterialSoftReferences();

	UFUNCTION()
	void PostLoadSoundCueSoftReferences();

	UFUNCTION()
	void PostLoadTextureSoftReferences();

	UFUNCTION()
	void PostLoadUObjectSoftReferences();





};
