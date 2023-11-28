#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widget_Collectables.generated.h"

class UTextBlock;

UCLASS(Abstract, BlueprintType)
class C4EGAMEPROJECT_API UWidget_Collectables : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	void UpdateCollectables(int Collectables);
private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> CollectableText;
};
