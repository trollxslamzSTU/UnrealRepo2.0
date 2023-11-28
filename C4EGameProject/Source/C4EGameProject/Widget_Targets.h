#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widget_Targets.generated.h"

class UTextBlock;

UCLASS(Abstract, BlueprintType)
class C4EGAMEPROJECT_API UWidget_Targets : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	void UpdateTargets(int Targets);
private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TargetText;
};
