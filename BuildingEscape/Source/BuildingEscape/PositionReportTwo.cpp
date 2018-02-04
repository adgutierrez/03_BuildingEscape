// Fill out your copyright notice in the Description page of Project Settings.

#include "PositionReportTwo.h"


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

	UE_LOG(LogTemp, Warning, TEXT("Position Report Two reporting for duty Sir!"));
	
}


// Called every frame
void UPositionReportTwo::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

