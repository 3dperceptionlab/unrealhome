// Copyright Cesar Molto Morilla 2020/21


#include "MyAnimationComponent.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimSequence.h"
#include "Animation/AnimMontage.h"
#include "Animation/BlendSpace1D.h"

// Sets default values for this component's properties
UMyAnimationComponent::UMyAnimationComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UMyAnimationComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	// Start playing move BlendSpace
	PlayMoveAnimation();
}


bool UMyAnimationComponent::IsInteractAnimationPlaying()
{
	if (AnimInstance)
		return AnimInstance->IsAnyMontagePlaying();

	return false;
}


void UMyAnimationComponent::PlayMoveAnimation()
{
	if (BlendSpace)
	{
		BlendSpace->ClearData();

		if (!IdleAnimation || !WalkAnimation)
			return;

		BlendSpace->AddSample(IdleAnimation, FVector(0, 0, 0));
		BlendSpace->AddSample(WalkAnimation, FVector(100, 0, 0));

		BlendSpace->ResampleData();
	}	
}


void UMyAnimationComponent::PlayInteractAnimation()
{
	if (AnimInstance && InteractAnimation)
	{
		UE_LOG(LogTemp, Warning, TEXT("Play interact animation"));
		AnimInstance->PlaySlotAnimationAsDynamicMontage(InteractAnimation, TEXT("DefaultSlot"), 1, 1);
	}
}


void UMyAnimationComponent::SetAnimInstance(UAnimInstance* _AnimInstance)
{
	AnimInstance = _AnimInstance;
}


void UMyAnimationComponent::SetInteractAnimation(UAnimSequence* _InteractAnimation)
{
	InteractAnimation = _InteractAnimation;
}

