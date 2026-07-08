// Fill out your copyright notice in the Description page of Project Settings.


#include "Effect/FogEffectComponent.h"


UFogEffectComponent::UFogEffectComponent()
{

	PrimaryComponentTick.bCanEverTick = true;

}



void UFogEffectComponent::BeginPlay()
{
	Super::BeginPlay();
	CurrentPosition = GetComponentLocation();
	PreviousPosition = CurrentPosition;
}



void UFogEffectComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	PreviousPosition = CurrentPosition;
	CurrentPosition = GetComponentLocation();
}

