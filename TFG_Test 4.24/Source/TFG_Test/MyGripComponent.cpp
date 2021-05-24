// Copyright Cesar Molto Morilla 2020/21


#include "MyGripComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "MyObject.h"


// Sets default values for this component's properties
UMyGripComponent::UMyGripComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


void UMyGripComponent::GrabObject(AMyObject* _Object, USkeletalMeshComponent* _SkeletalMesh)
{
	if (!_Object || !_SkeletalMesh) { return; }

	// Attach object to right hand socket in skeletal
	_Object->AttachToComponent(_SkeletalMesh, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, true), TEXT("hand_rSocket"));

	// Disable object physics simulation
	UStaticMeshComponent* ObjectMesh = _Object->GetStaticMesh();
	if (ObjectMesh)
		ObjectMesh->SetSimulatePhysics(false);
}


void UMyGripComponent::DropObject(AMyObject* _Object)
{
	if (!_Object) { return; }
	
	// Detach object from attached actor/component
	_Object->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	// Enable object physics simulation
	UStaticMeshComponent* ObjectMesh = _Object->GetStaticMesh();
	if (ObjectMesh)
		ObjectMesh->SetSimulatePhysics(true);
	
	// Reset object location (This has to be done after enabling the physics simlation NOT before)
	_Object->ResetLocation();
}

