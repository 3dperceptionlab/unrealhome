// Copyright Cesar Molto Morilla 2020/21

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MyObject.generated.h"

// Forward declarations
class UAnimSequence;

/**
 * 
 */
UCLASS()
class TFG_TEST_API AMyObject : public AStaticMeshActor
{
	GENERATED_BODY()

	// Reference to the object's static mesh component
	UStaticMeshComponent* StaticMesh = nullptr;

	// Initial location of the object when the simulation starts
	FVector InitialLocation = FVector::ZeroVector;

	// Determines the range in which the avatars must be to interact with this object
	UPROPERTY(EditAnywhere, Category = "Object setup")
	float InteractionRadius = 40;

	// Animation sequence that avatars will reproduce when interacting with this object
	UPROPERTY(EditAnywhere, Category = "Object animations")
	UAnimSequence* InteractionSequence;

	// List of available interaction animation sequences to reproduce with this objects
	UPROPERTY(EditAnywhere, Category = "Object animations")
	TArray<UAnimSequence*> AvailableSequences;

protected:
	// Called when the game starts or when spawned
	void BeginPlay();

public:

	// Returns a pointer to the object's static mesh component
	UStaticMeshComponent* GetStaticMesh();

	// Returns object's interaction radius value
	float GetInteractionRadius() const;

	// Sets a new value to the interaction sequence reference
	UFUNCTION(BlueprintCallable)
	void SetInteractionSequence(int32 _sequenceIndex);

	// Returns a pointer to the current interaction sequence
	UAnimSequence* GetInteractionSequence() const;

	// Returns a copy of the available sequences list
	UFUNCTION(BlueprintCallable)
	TArray<UAnimSequence*> GetAvaliableSequences() const;

	// Resets the object's location to its initial one
	void ResetLocation();
};
