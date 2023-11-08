#pragma once

#include "CoreMinimal.h"
#include "MatchStateHandler.h"
#include "GameFramework/PlayerController.h"
#include "C4EPlayerController.generated.h"

class UInputMappingContext;
class UWidget_Score;

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

	void AddScore(int Amount);
	
protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<APawn> _PawnToSpawn;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UWidget_Score> _ScoreWidgetClass;
	TObjectPtr<UWidget_Score> _ScoreWidget;
	
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess="true"))
	TObjectPtr<UInputMappingContext> DefaultMappingContext;
	
	int _Score;
};
