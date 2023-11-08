#include "Weapon_Hitscan.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

AWeapon_Hitscan::AWeapon_Hitscan()
{
	_Range = 1000.f;
	_Damage = 25.f;
}

bool AWeapon_Hitscan::Fire_Implementation()
{
	UWorld* const World = GetWorld();
	if(World == nullptr) { return false; }
	FHitResult hit(ForceInit);
	FVector startLoc = _Muzzle->GetComponentLocation();
	FVector endLoc = startLoc + (_Muzzle->GetForwardVector() * _Range);
	TArray<AActor*> ActorsToIgnore;
	if(UKismetSystemLibrary::LineTraceSingle(World, startLoc, endLoc,
		UEngineTypes::ConvertToTraceType(ECC_GameTraceChannel2), true,
		ActorsToIgnore,
		EDrawDebugTrace::ForDuration, hit, true,
		FLinearColor::Blue, FLinearColor::Green, 5))
	{
		UGameplayStatics::ApplyDamage(hit.GetActor(), _Damage,
			GetInstigatorController(), this,
			UDamageType::StaticClass());
		return true;
	}
	return false;
}
