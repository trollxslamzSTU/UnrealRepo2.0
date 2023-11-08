#include "Collectable.h"
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
	Destroy();
}



