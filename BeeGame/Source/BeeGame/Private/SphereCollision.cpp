// Fill out your copyright notice in the Description page of Project Settings.

#include "BeeGame.h"
#include "SphereCollision.h"


// Sets default values for this component's properties
USphereCollision::USphereCollision()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
	prop = "sphere";
	// ...
}


// Called when the game starts
void USphereCollision::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USphereCollision::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

UPROPERTY(BlueprintCallable)
char* USphereCollision::getProperty()
{
	return prop;
}

