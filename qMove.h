// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "qMove.generated.h"

UCLASS()
class QUEST5_API AqMove : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AqMove();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	FVector CurrentPosition;

	int Step();
	void Move();

};
