// Copyright Cesar Molto Morilla 2020/21


#include "MyAvatarController.h"
#include "Kismet/GameplayStatics.h"
#include "MyAvatarCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MyAnimationComponent.h"
#include "MyGripComponent.h"
#include "Components/BoxComponent.h"
#include "MyObject.h"


void AMyAvatarController::BeginPlay()
{
	Super::BeginPlay();

	// Check if this controller instance is controlling any pawn
	if (!GetPawn()) { return; }

	// Set mesh and anim instance references
	SkeletalMesh = GetPawn()->FindComponentByClass<USkeletalMeshComponent>();

	// Find and set reference to character's movement component
	MovementComponent = GetPawn()->FindComponentByClass<UCharacterMovementComponent>();

	// Find and set reference to character's animation component
	AnimationComponent = GetPawn()->FindComponentByClass<UMyAnimationComponent>();
	if (AnimationComponent && SkeletalMesh)
		AnimationComponent->SetAnimInstance(SkeletalMesh->GetAnimInstance());

	// Find and set reference to character's grip component
	GripComponent = GetPawn()->FindComponentByClass<UMyGripComponent>();

	// Find and set reference to avatar box collision component
	BoxComponent = GetPawn()->FindComponentByClass<UBoxComponent>();
	if (BoxComponent)
		BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AMyAvatarController::OnOverlapBegin);
}


void AMyAvatarController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Check if this controller instance has all the needed components
	if (!MovementComponent || !AnimationComponent || !GripComponent)
		return;

	// Check if this controller instance has a target
	if (!Target) { return; }

	if (ControllerMode == EControllerMode::Interact)
	{
		// Check if interaction animation is already done
		if (!AnimationComponent->IsInteractAnimationPlaying())
		{
			// Set controller mode to move mode
			ControllerMode = EControllerMode::Move;

			// Drop grabbed object
			GripComponent->DropObject(Target);
		}
	}

	if (ControllerMode == EControllerMode::Move)
	{
		// Move actor towards target
		MoveToActor(Target, Target->GetInteractionRadius() * GetPawn()->GetActorScale().X);
	}
}


void AMyAvatarController::SetTarget(AActor* _Target)
{	
	// Init controller target reference
	Target = Cast<AMyObject>(_Target);

	// Check that Targe and BoxComponent references are not null
	if (!Target || !BoxComponent) { return; }

	// Set Box collision component extents
	BoxComponent->SetBoxExtent(FVector(Target->GetInteractionRadius() / GetPawn()->GetActorScale().X));
}


void AMyAvatarController::OnOverlapBegin(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherComponentIndex, bool bFromSweep, const FHitResult& Hit)
{
	if (Target == OtherActor)
	{
		// Set controller mode to interact mode
		ControllerMode = EControllerMode::Interact;

		// Set and play interact animation in the animation component
		if (AnimationComponent && GripComponent && BoxComponent && SkeletalMesh)
		{
			// Grab selected object
			GripComponent->GrabObject(Target, SkeletalMesh);

			// Play selected interaction animation
			AnimationComponent->SetInteractAnimation(Target->GetInteractionSequence());
			AnimationComponent->PlayInteractAnimation();

			// Set BoxComponent size to 0 to avoid accidental overlapping events
			BoxComponent->SetBoxExtent(FVector::ZeroVector);
		}
	}
}
