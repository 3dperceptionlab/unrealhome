// Copyright Cesar Molto Morilla 2020/21

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyAnimationComponent.generated.h"

// Forward declarations
class UAnimInstance;
class UAnimSequence;
class UBlendSpace1D;
class UAnimMontage;

/**
 *
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TFG_TEST_API UMyAnimationComponent : public UActorComponent
{
	GENERATED_BODY()

	// References to the anim instance of the avatar
	UAnimInstance* AnimInstance = nullptr;

	// Reference to the move (Idle and Walk) animations blendspace
	UPROPERTY(EditAnywhere, Category = "Movement Animation")
	UBlendSpace1D* BlendSpace = nullptr;

	// Reference to move (Idle and Walk) animations
	UPROPERTY(EditAnywhere, Category = "Movement Animation")
	UAnimSequence* IdleAnimation = nullptr;

	UPROPERTY(EditAnywhere, Category = "Movement Animation")
	UAnimSequence* WalkAnimation = nullptr;

	// Reference to the target object interact animation
	UAnimSequence* InteractAnimation = nullptr;

public:	
	// Sets default values for this component's properties
	UMyAnimationComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	

	// Reproduces move animations BlendSpace1D
	void PlayMoveAnimation();	

	// Reproduces selected interact animation
	void PlayInteractAnimation();

	// Checks if the animation instance of the owner is playing the interact animation
	bool IsInteractAnimationPlaying();

	// Sets the animation instance reference
	void SetAnimInstance(UAnimInstance* _AnimInstance);

	// Sets the selected animation reference
	void SetInteractAnimation(UAnimSequence* _InteractAnimation);
};
