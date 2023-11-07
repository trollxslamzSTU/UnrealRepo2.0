﻿#pragma once

#include "CoreMinimal.h"
#include "MatchStateHandler.h"
#include "GameFramework/PlayerController.h"
#include "C4EPlayerController.generated.h"

class UInputMappingContext;

UCLASS(Abstract)
class C4EGAMEPROJECT_API AC4EPlayerController : public APlayerController, public IMatchStateHandler
{
	GENERATED_BODY()

public:
	AC4EPlayerController();

	UFUNCTION(BlueprintNativeEvent)
	void Init();

	virtual void Handle_MatchStart_Implementation() override;
	virtual void Handle_End_Implementation() override;

protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<APawn> _PawnToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess="true"))
	TObjectPtr<UInputMappingContext> DefaultMappingContext;
	
	
};
