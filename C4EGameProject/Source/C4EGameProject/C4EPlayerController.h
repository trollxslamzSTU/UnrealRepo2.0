#pragma once

#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "MatchStateHandler.h"
#include "GameFramework/PlayerController.h"
#include "C4EPlayerController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FScoreUpdatedSignature, int, points);

class UInputMappingContext;
class UWidget_Score;

UCLASS(Abstract)
class C4EGAMEPROJECT_API AC4EPlayerController : public APlayerController, public IMatchStateHandler, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	AC4EPlayerController();

	FScoreUpdatedSignature OnScoreUpdated;
	
	UFUNCTION(BlueprintNativeEvent)
	void Init();

	virtual void Handle_MatchStart_Implementation() override;
	virtual void Handle_End_Implementation() override;

	void AddScore(int Amount);

	virtual FGenericTeamId GetGenericTeamId() const override;
	
protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<APawn> _PawnToSpawn;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UWidget_Score> _ScoreWidgetClass;
	TObjectPtr<UWidget_Score> _ScoreWidget;
	
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess="true"))
	TObjectPtr<UInputMappingContext> DefaultMappingContext;
	
	FGenericTeamId _TeamID;
	
	int _Score;
};
