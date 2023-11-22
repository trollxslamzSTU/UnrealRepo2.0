
#include "Weapon_Shoutgun_Hitscan.h"

#include "Algo/Rotate.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"


AWeapon_Shoutgun_Hitscan::AWeapon_Shoutgun_Hitscan()
{
	_Damage = 30.f;
	_Range = 750.f;
	
}

bool AWeapon_Shoutgun_Hitscan::Fire_Implementation()
{
	UWorld* const World = GetWorld();
	if(World == nullptr) { return false; }
	FHitResult hit(ForceInit);
	FVector startLoc = _Muzzle->GetComponentLocation();
	FVector endLoc = startLoc + (_Muzzle->GetForwardVector() * _Range);
	FRotator RotP = RotP.Pitch(5);
	FRotator RotY = RotY.Yaw(5);
	FVector endLoc1 = startLoc + (_Muzzle->GetForwardVector() * _Range);
	FVector endLoc2 = startLoc + (_Muzzle->GetForwardVector() * _Range);
	
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
	if(UKismetSystemLibrary::LineTraceSingle(World, startLoc, endLoc1,
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
	if(UKismetSystemLibrary::LineTraceSingle(World, startLoc, endLoc2,
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


void AWeapon_Shoutgun_Hitscan::BeginPlay()
{
	Super::BeginPlay();
	
}


