#pragma once

#include "CoreMinimal.h"
#include "Fireable.h"
#include "Weapon_Base.generated.h"

class USkeletalMeshComponent;
class UArrowComponent;

UCLASS(Abstract)
class C4EGAMEPROJECT_API AWeapon_Base : public AActor, public IFireable
{
	GENERATED_BODY()

	
	
public:
	AWeapon_Base();

	virtual bool Fire_Implementation() override;
	
protected:

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<USceneComponent> _Root;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<USceneComponent> _Mesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<USceneComponent> _Muzzle;

	virtual void BeginPlay() override;

};
	
