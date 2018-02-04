// Fill out your copyright notice in the Description page of Project Settings.

#include "PositionReportTwo.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UPositionReportTwo::UPositionReportTwo()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositionReportTwo::BeginPlay()
{
	Super::BeginPlay();

	FString ObjectName = GetOwner()->GetName();

	UE_LOG(LogTemp, Warning, TEXT("Position Report Two reporting %s"), *ObjectName);
	
}


// Called every frame
void UPositionReportTwo::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

