#include "Weapon_Projectile.h"


bool AWeapon_Projectile::Fire_Implementation()
{
	UWorld* const world = GetWorld();
	if (world == nullptr || _Projectile == nullptr) {return false;}
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = GetOwner();
	spawnParams.Instigator = GetInstigator();
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
	world->SpawnActor(_Projectile, &_Muzzle->GetComponentTransform(), spawnParams);
	
	
	return true;
}
