#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/Character.h"
#include "C4ECharacterAI.generated.h"

class UTarget;
class USceneComponent;
class UInputAction;
class UCameraComponent;
class UInputMappingContext;
class AWeapon_Base;

UCLASS(Abstract)
class C4EGAMEPROJECT_API AC4ECharacterAI : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> _Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	TObjectPtr<USceneComponent> _WeaponAttachPoint;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta=(AllowPrivateAccess = "true"))
	UInputMappingContext* PlayerMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* ShootAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* JumpAction;
	
public:
	AC4ECharacterAI();

	virtual void BeginPlay() override;
	void Shoot();
	
protected:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	TSubclassOf<AWeapon_Base> _DefaultWeapon;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon")
	TObjectPtr<AActor> _FireableRef;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UTarget> _TargetComp;

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};