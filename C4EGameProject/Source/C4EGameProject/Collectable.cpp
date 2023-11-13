#include "Collectable.h"

#include "GameRule_Collectables.h"
#include "Components/SphereComponent.h"


ACollectable::ACollectable()
{
	_SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	RootComponent = _SphereCollision;
	points = 3;
}

void ACollectable::BeginPlay()
{
	Super::BeginPlay();

	UGameRule_Collectables::OnRegisterCollectable.ExecuteIfBound(this);
}

void ACollectable::BroadcastCollected(AController* causer)
{
	OnCollected.Broadcast(this, causer, points);
	
	Destroy();
}



