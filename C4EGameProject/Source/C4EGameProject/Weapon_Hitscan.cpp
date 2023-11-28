#include "Weapon_Hitscan.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

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
	if(MuzzleFlash)
	{
		UNiagaraComponent* NiagaraComp = UNiagaraFunctionLibrary::SpawnSystemAttached(MuzzleFlash, _Muzzle, NAME_None, FVector(0.f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true);
	}
	if(Gunshot)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), Gunshot, _Muzzle->GetComponentLocation());
	}
	if(UKismetSystemLibrary::LineTraceSingle(World, startLoc, endLoc,
		UEngineTypes::ConvertToTraceType(ECC_GameTraceChannel2), true,
		ActorsToIgnore,
		EDrawDebugTrace::ForDuration, hit, true,
		FLinearColor::Blue, FLinearColor::Green, 5))
	{
		UNiagaraComponent* NiagaraComp = UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), Impact, hit.Location, FRotator::ZeroRotator);
		UGameplayStatics::ApplyDamage(hit.GetActor(), _Damage,
			GetInstigatorController(), this,
			UDamageType::StaticClass());
		return true;
	}
	return false;
}
