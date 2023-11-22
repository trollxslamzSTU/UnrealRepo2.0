#pragma once

#include "CoreMinimal.h"
#include "Weapon_Base.h"
#include "Weapon_Shoutgun_Hitscan.generated.h"

UCLASS(Abstract)
class C4EGAMEPROJECT_API AWeapon_Shoutgun_Hitscan : public AWeapon_Base
{
	GENERATED_BODY()

public:
	
	AWeapon_Shoutgun_Hitscan();

	virtual bool Fire_Implementation() override;

protected:

	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _Range;

};
