// Copyright Cesar Molto Morilla 2020/21

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MyAvatarController.generated.h"

// Forward declarations
class USkeletalMeshComponent;
class UCharacterMovementComponent;
class UMyAnimationComponent;
class UMyGripComponent;
class UBoxComponent;
class AMyObject;

/**
 *
 */
UENUM()
enum class EControllerMode : uint8
{
	Move,
	Interact,
	ModesNum
};

/**
 * 
 */
UCLASS()
class TFG_TEST_API AMyAvatarController : public AAIController
{
	GENERATED_BODY()

	// Reference to avatar's target object
	AMyObject* Target = nullptr;

	// Reference to the controlled character's skeletal mesh component
	USkeletalMeshComponent* SkeletalMesh = nullptr;

	// Reference to controlled character's movement component
	UCharacterMovementComponent* MovementComponent = nullptr;

	// Reference to controlled character's animation component
	UMyAnimationComponent* AnimationComponent = nullptr;

	// Reference to controlled character's animation component
	UMyGripComponent* GripComponent = nullptr;

	// Variables for handling overlaping events
	UBoxComponent* BoxComponent = nullptr;

	// Reference to the current mode of the controller
	EControllerMode ControllerMode = EControllerMode::Move;

protected:
	// Called when the game starts or when spawned
	void BeginPlay();

	// Called every frame
	void Tick(float DeltaTime);

public:
	// Sets the target object of this avatar controller
	void SetTarget(AActor* _Target);	

	// Method triggered when overlap event begins
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherComponentIndex, bool bFromSweep, const FHitResult& Hit);
};
