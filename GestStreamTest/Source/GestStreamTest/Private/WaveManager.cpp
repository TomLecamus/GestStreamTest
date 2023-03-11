// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveManager.h"

#include "Components/HierarchicalInstancedStaticMeshComponent.h"

// Sets default values
AWaveManager::AWaveManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWaveManager::BeginPlay()
{
	Super::BeginPlay();
	HLODComp = FindComponentByClass<UHierarchicalInstancedStaticMeshComponent>();
	for (int i = 0; i < 100; i++) {
		HLODComp->AddInstance(FTransform(FVector(i * 10, i*10 , 10)));
	}
}

// Called every frame
void AWaveManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

