#pragma once

#include "CoreMinimal.h"
#include "Weapon_Base.h"
#include "Weapon_Hitscan.generated.h"

class UNiagaraSystem;
class USoundBase;

UCLASS(Abstract)
class C4EGAMEPROJECT_API AWeapon_Hitscan : public AWeapon_Base
{
	GENERATED_BODY()

public:

	AWeapon_Hitscan();
	
	virtual bool Fire_Implementation() override;

protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _Damage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _Range;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UNiagaraSystem* MuzzleFlash;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UNiagaraSystem* Impact;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* Gunshot;
};
