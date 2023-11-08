// Copyright Epic Games, Inc. All Rights Reserved.

#include "C4EGameProjectGameMode.h"
#include "C4EPlayerController.h"
#include "GameRule.h"
#include "GameFramework/PlayerStart.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

AC4EGameProjectGameMode::AC4EGameProjectGameMode()
	: Super()
{
	_CountDownTimer = 3;
	_GameRulesLeft = 0;
}

AActor* AC4EGameProjectGameMode::FindPlayerStart_Implementation(AController* Player, const FString& IncomingName)
{
	if(_PlayerStarts.Num() == 0)
	{
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerStart::StaticClass(), _PlayerStarts);
	}
	if(_PlayerStarts.Num() > 0)
	{
		return _PlayerStarts[0];
	}
	return nullptr;
}

void AC4EGameProjectGameMode::PostLogin(APlayerController* NewPlayer)
{
	_PlayerControllers.AddUnique(NewPlayer);
	if(AC4EPlayerController* CastedPC = Cast<AC4EPlayerController>(NewPlayer))
	{
		CastedPC->Init();
	}
	Super::PostLogin(NewPlayer);
}

void AC4EGameProjectGameMode::Logout(AController* Exiting)
{
	_PlayerControllers.Remove(Exiting);
	
	Super::Logout(Exiting);
}

void AC4EGameProjectGameMode::DecreaseCountdown()
{
	_CountDownTimer--;
	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("%d"), _CountDownTimer));
	}
	if(_CountDownTimer == 0)
	{
		StartMatch();
	}
	else
	{
		GetWorld()->GetTimerManager().SetTimer(_TimerDecreaseCountdown, this, &AC4EGameProjectGameMode::DecreaseCountdown, 1.f, false);
	}
}

void AC4EGameProjectGameMode::Handle_GameRuleCompleted(UGameRule* rule)
{
	if(*_GameRuleManagers.Find(rule)) { return; }

	_GameRulesLeft--;
	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue,
			FString::Printf(TEXT("GameRule Completed: %d Remaining"), _GameRulesLeft));
	}
	if(_GameRulesLeft != 0){ return; }

	EndMatch();
}

void AC4EGameProjectGameMode::Handle_GameRulePointsScored(AController* scorer, int points)
{
	AC4EPlayerController* castedPC = Cast<AC4EPlayerController>(scorer);
	if(castedPC)
	{
		castedPC->AddScore(points);
	}
}

void AC4EGameProjectGameMode::BeginPlay()
{
	Super::BeginPlay();

	TArray<UActorComponent*> outComponents;
	GetComponents(outComponents);
	for(UActorComponent* comp : outComponents)
	{
		if(UGameRule* rule = Cast<UGameRule>(comp))
		{
			_GameRuleManagers.Add(rule, rule->_IsOptional);
			rule->Init();
			rule->OnGameRuleCompleted.AddDynamic(this, &AC4EGameProjectGameMode::Handle_GameRuleCompleted);
			rule->OnGameRulePointsScored.AddDynamic(this, &AC4EGameProjectGameMode::Handle_GameRulePointsScored);
			if(!rule->_IsOptional)
			{
				_GameRulesLeft++;
			}
		}
	}
}

void AC4EGameProjectGameMode::HandleMatchIsWaitingToStart()
{
	GetWorld()->GetTimerManager().SetTimer(_TimerDecreaseCountdown, this, &AC4EGameProjectGameMode::DecreaseCountdown, 1.f, false);
	Super::HandleMatchIsWaitingToStart();
}

void AC4EGameProjectGameMode::HandleMatchHasStarted()
{
	for(AController* controller : _PlayerControllers)
	{
		if(UKismetSystemLibrary::DoesImplementInterface(controller, UMatchStateHandler::StaticClass()))
		{
			IMatchStateHandler::Execute_Handle_MatchStart(controller);
		}
		
	}
	Super::HandleMatchHasStarted();
}

void AC4EGameProjectGameMode::HandleMatchHasEnded()
{
	for(AController* controller : _PlayerControllers)
	{
		if(UKismetSystemLibrary::DoesImplementInterface(controller, UMatchStateHandler::StaticClass()))
		{
			IMatchStateHandler::Execute_Handle_End(controller);
		}
		
	}
	Super::HandleMatchHasEnded();
}

void AC4EGameProjectGameMode::OnMatchStateSet()
{
	FString output;
	if(MatchState == MatchState::WaitingToStart)
	{
		output = "Waiting to start";
	}
	else if(MatchState == MatchState::InProgress)
	{
		output = "In Progress";
	}
	else if(MatchState == MatchState::WaitingPostMatch)
	{
		output = "Waiting post match";
	}
	else if(MatchState == MatchState::LeavingMap)
	{
		output = "Leaving map";
	}
	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("State Changed to: %s"), *output));
	}
	
	Super::OnMatchStateSet();
}

bool AC4EGameProjectGameMode::ReadyToStartMatch_Implementation()
{
	return false;
}

bool AC4EGameProjectGameMode::ReadyToEndMatch_Implementation()
{
	return false;
}
