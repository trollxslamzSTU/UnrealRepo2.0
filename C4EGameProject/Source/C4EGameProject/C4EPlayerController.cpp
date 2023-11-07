#include "C4EPlayerController.h"

#include "C4ECharacter.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/GameModeBase.h"
#include "Kismet/GameplayStatics.h"

AC4EPlayerController::AC4EPlayerController() : Super()
{
}

void AC4EPlayerController::Init_Implementation()
{
	if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}

	if(GetPawn() != nullptr)
	{
		GetPawn()->Destroy();
	}
}

void AC4EPlayerController::Handle_MatchStart_Implementation()
{
	UWorld* const World = GetWorld();

	AActor* tempStart = UGameplayStatics::GetGameMode(World)->FindPlayerStart(this);
	FVector spawnLocation = tempStart != nullptr ? tempStart->GetActorLocation() : FVector::ZeroVector;
	FRotator spawnRotation = tempStart != nullptr ? tempStart->GetActorRotation() : FRotator::ZeroRotator;
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	APawn* tempPawn = World->SpawnActor<APawn>(_PawnToSpawn, spawnLocation, spawnRotation, spawnParams);
	Possess(tempPawn);

	if(AC4ECharacter* castedPawn = Cast<AC4ECharacter>(tempPawn))
	{
		castedPawn->Init();
		//TODO: Bind to any relevant events
	}
	
	
	
}

void AC4EPlayerController::Handle_End_Implementation()
{
	//SetInputMode(FInputModeUIOnly());
}
