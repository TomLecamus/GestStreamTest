// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelLoader.h"
#include "Kismet/GameplayStatics.h"


// Called when the game starts or when spawned
void ALevelLoader::BeginPlay()
{
	Super::BeginPlay();

	FLatentActionInfo LatentInfo;
	// UGameplayStatics::LoadStreamLevel(this, LevelToLoad, true, true, LatentInfo);

	// le begin play ne se joue juste pas...
}

