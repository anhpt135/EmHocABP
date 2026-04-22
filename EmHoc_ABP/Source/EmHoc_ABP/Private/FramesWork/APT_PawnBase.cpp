// Fill out your copyright notice in the Description page of Project Settings.


#include "EmHoc_ABP/Public/FramesWork/APT_PawnBase.h"


// Sets default values
AAPT_PawnBase::AAPT_PawnBase()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAPT_PawnBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAPT_PawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AAPT_PawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

