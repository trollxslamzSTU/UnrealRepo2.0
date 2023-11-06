#pragma once

#include "CoreMinimal.h"
#include "Weapon_Base.h"
#include "C4EGameProjectProjectile.h"
#include "Weapon_Projectile.generated.h"



UCLASS(Abstract)
class C4EGAMEPROJECT_API AWeapon_Projectile : public AWeapon_Base
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TSubclassOf<AC4EGameProjectProjectile> _Projectile;
	
public:

	virtual bool Fire_Implementation() override;
	
};
