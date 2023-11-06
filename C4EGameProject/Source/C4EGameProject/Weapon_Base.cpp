﻿#include "Weapon_Base.h"

#include "Components/ArrowComponent.h"

AWeapon_Base::AWeapon_Base()
{
	_Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = _Root;

	_Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	_Mesh->SetupAttachment(_Root);

	_Muzzle = CreateDefaultSubobject<UArrowComponent>(TEXT("Muzzle"));
	_Muzzle->SetupAttachment(_Mesh);
}

bool AWeapon_Base::Fire_Implementation()
{
	return true;
}

void AWeapon_Base::BeginPlay()
{
	Super::BeginPlay();
}
