#include "HealthComponent.h"

UHealthComponent::UHealthComponent()
{
	_MaxHealth = 100.f;
}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	_CurrentHealth = _MaxHealth;
	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::DamageTaken);
	
}

void UHealthComponent::DamageTaken(AActor* damagedActor, float damage, const UDamageType* damageType,
	AController* instigator, AActor* causer)
{
	const float change = FMath::Min(_CurrentHealth, damage);
	_CurrentHealth -= change;

	OnHealthComponentDamaged.Broadcast(_CurrentHealth, _MaxHealth, change);
	if(_CurrentHealth == 0.f)
	{
		OnHealthComponentDead.Broadcast(instigator);
	}
}

