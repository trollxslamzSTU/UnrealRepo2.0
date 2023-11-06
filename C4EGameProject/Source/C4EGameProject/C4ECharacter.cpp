#include "C4ECharacter.h"

#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"


AC4ECharacter::AC4ECharacter()
{
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.f);
	_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	_Camera->SetupAttachment(GetCapsuleComponent());
	_Camera->SetRelativeLocation(FVector(-10.f, 0.f, 60.f));
	_Camera->bUsePawnControlRotation = true;

	_WeaponAttachPoint = CreateDefaultSubobject<USceneComponent>(TEXT("AttachPoint"));
	_WeaponAttachPoint->SetupAttachment(_Camera);
}	

void AC4ECharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AC4ECharacter::Move(const FInputActionValue& Value)
{
	FVector2d MovementVector = Value.Get<FVector2d>();

	if(Controller != nullptr)
	{
		AddMovementInput(GetActorForwardVector(),MovementVector.Y);
		AddMovementInput(GetActorRightVector(),MovementVector.X);
	}
}

void AC4ECharacter::Look(const FInputActionValue& Value)
{
	FVector2d LookAxisVector = Value.Get<FVector2d>();

	if(Controller != nullptr)
	{
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AC4ECharacter::Shoot()
{
}

void AC4ECharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if(UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::StopJumping);

		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AC4ECharacter::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AC4ECharacter::Look);

		EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Triggered, this, &AC4ECharacter::Shoot);
	}
}
