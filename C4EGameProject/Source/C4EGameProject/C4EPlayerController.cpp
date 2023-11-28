#include "C4EPlayerController.h"

#include "C4ECharacter.h"
#include "EnhancedInputSubsystems.h"
#include "Widget_Collectables.h"
#include "Widget_Score.h"
#include "Widget_Targets.h"
#include "GameFramework/GameModeBase.h"
#include "Kismet/GameplayStatics.h"

AC4EPlayerController::AC4EPlayerController() : Super()
{
	_Score = 0;
	_TeamID = FGenericTeamId(2);
	_Targets = 0;
	_Collectables = 0;
	
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

	if(_ScoreWidgetClass)
	{
		_ScoreWidget = CreateWidget<UWidget_Score, AC4EPlayerController*>(this, _ScoreWidgetClass);
		_ScoreWidget->AddToViewport();
		_TargetWidget = CreateWidget<UWidget_Targets, AC4EPlayerController*>(this, _TargetWidgetClass);
		_TargetWidget->AddToViewport();
		_CollectablesWidget = CreateWidget<UWidget_Collectables, AC4EPlayerController*>(this, _CollectablesWidgetClass);
		_CollectablesWidget->AddToViewport();
		
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

void AC4EPlayerController::AddScore(int Amount)
{
	
	_Score += Amount;
	OnScoreUpdated.Broadcast(_Score);
	if(_ScoreWidget != nullptr)
	{
		_ScoreWidget->UpdateScore(_Score);
	}
}

FGenericTeamId AC4EPlayerController::GetGenericTeamId() const
{
	return IGenericTeamAgentInterface::GetGenericTeamId();
}

void AC4EPlayerController::SetInitTargets(int Targets)
{
	_Targets = Targets;
	if(_TargetWidget != nullptr)
	{
		_TargetWidget->UpdateTargets(_Targets);
	}
}

void AC4EPlayerController::SetInitCollectables(int Collectables)
{
	_Collectables = Collectables;
	if(_CollectablesWidget != nullptr)
	{
		_CollectablesWidget->UpdateCollectables(_Collectables);
	}
}

void AC4EPlayerController::UpdateTargets(int TarIn)
{
	_Targets = TarIn;
	if(_TargetWidget != nullptr)
	{
		_TargetWidget->UpdateTargets(_Targets);
	}
}

void AC4EPlayerController::UpdateCollectables(int ColIn)
{
	_Collectables = ColIn;
	if(_CollectablesWidget != nullptr)
	{
		_CollectablesWidget->UpdateCollectables(_Collectables);
	}
}

