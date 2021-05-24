// Copyright Cesar Molto Morilla 2020/21

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyGripComponent.generated.h"

// Forward declarations
class USkeletalMeshComponent;
class AMyObject;

/**
 *
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TFG_TEST_API UMyGripComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyGripComponent();

public:	

	// Attaches entry object parameter to the entry skeletal mesh parameter
	void GrabObject(AMyObject* _Object, USkeletalMeshComponent* _SkeletalMesh);

	// Detaches entry object paramenter from attached actor/component
	void DropObject(AMyObject* _Object);
};
