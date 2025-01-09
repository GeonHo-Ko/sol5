// Fill out your copyright notice in the Description page of Project Settings.


#include "qMove.h"

// Sets default values
AqMove::AqMove()
{
	CurrentPosition = FVector(0.0f, 0.0f, 0.0f);
}

// Called when the game starts or when spawned
void AqMove::BeginPlay()
{
	Super::BeginPlay();

	Move();
}

int AqMove::Step()
{
	return FMath::RandRange(0, 1);
}


void AqMove::Move()
{
    for (int i = 0; i < 10; i++)
    {
        int StepX = Step();
        int StepY = Step();

        CurrentPosition.X += StepX;
        CurrentPosition.Y += StepY;

        UE_LOG(LogTemp, Warning, TEXT("Move %d: Position: X=%.0f, Y=%.0f"), i + 1, CurrentPosition.X, CurrentPosition.Y);
    }
}
// Called every frame
//void AqMove::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

