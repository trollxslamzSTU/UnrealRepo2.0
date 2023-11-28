
#include "Widget_Targets.h"
#include "Components/TextBlock.h"

void UWidget_Targets::NativeConstruct()
{
	Super::NativeConstruct();

	if(TargetText)
	{
		TargetText->SetText(FText::FromString("Targets:0"));
	}
}

void UWidget_Targets::UpdateTargets(int Targets)
{
	if(TargetText)
	{
		TargetText->SetText(FText::FromString(FString::Printf(TEXT("Targets: %d"), Targets)));
	}
}
