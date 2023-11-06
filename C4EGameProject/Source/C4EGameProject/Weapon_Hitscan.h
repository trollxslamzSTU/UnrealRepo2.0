#pragma once

#include "CoreMinimal.h"
#include "Weapon_Base.h"
#include "Weapon_Hitscan.generated.h"

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
};
