﻿#include "Collectable.h"

#include "GameRule_Collectables.h"
#include "Components/SphereComponent.h"



ACollectable::ACollectable()
{
	_SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	RootComponent = _SphereCollision;
	points = 5;
	
}

void ACollectable::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACollectable::BroadcastCollected(AController* causer)
{
	OnCollected.Broadcast(this, causer, points);
	
	Destroy();
}



