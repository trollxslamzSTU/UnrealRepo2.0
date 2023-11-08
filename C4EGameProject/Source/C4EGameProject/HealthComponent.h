// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponentDeadSignature, AController*, causer);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHealthComponentDamagedSignature, float, newHealth, float, maxHealth, float, changeInHealth);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class C4EGAMEPROJECT_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UHealthComponent();

	UPROPERTY(BlueprintAssignable)
	FHealthComponentDeadSignature OnHealthComponentDead;
	UPROPERTY(BlueprintAssignable)
	FHealthComponentDamagedSignature OnHealthComponentDamaged;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _MaxHealth;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float _CurrentHealth;
	
private:
	UFUNCTION()
	void DamageTaken(AActor* damagedActor, float damage, const UDamageType* damageType, AController* instigator, AActor* causer);
};
