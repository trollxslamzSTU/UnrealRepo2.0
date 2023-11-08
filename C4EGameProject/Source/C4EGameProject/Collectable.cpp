#include "Collectable.h"

#include "GameRule_Score.h"
#include "Components/SphereComponent.h"


ACollectable::ACollectable()
{
	_SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	RootComponent = _SphereCollision;
	points = 3;
}

void ACollectable::BroadcastCollected(AController* causer)
{
	OnCollected.Broadcast(this, causer, points);
	_ScoreCard->Handle_CollectedScoring(points);
	Destroy();
}



