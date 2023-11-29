#include "Target.h"

#include "HealthComponent.h"

UTarget::UTarget()
{
	PointsToAward = 15;
	
}

void UTarget::BeginPlay()
{
	Super::BeginPlay();

	AActor* owner = GetOwner();
	_HealthComp = owner->FindComponentByClass<UHealthComponent>();
	if(_HealthComp == nullptr)
	{
		_HealthComp = NewObject<UHealthComponent>(owner, TEXT("Health"));
		owner->AddInstanceComponent(_HealthComp);
		_HealthComp->RegisterComponent();
		owner->Modify();
	}

	owner->Tags.Add(FName("GameRuleTarget"));
	_HealthComp->OnHealthComponentDead.AddDynamic(this, &UTarget::Handle_Dead);
}

void UTarget::Handle_Dead(AController* causer)
{
	OnTargetDestroyed.Broadcast(GetOwner(), causer, PointsToAward);

	
	GetOwner()->Destroy();
}
