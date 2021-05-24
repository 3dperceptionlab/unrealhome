// Copyright Cesar Molto Morilla 2020/21


#include "MyObject.h"


void AMyObject::BeginPlay()
{
	Super::BeginPlay();

	// Init static mesh reference
	StaticMesh = this->FindComponentByClass<UStaticMeshComponent>();

	// Init object's initial location
	InitialLocation = this->GetActorLocation();
}


UStaticMeshComponent* AMyObject::GetStaticMesh()
{
	return StaticMesh;
}


float AMyObject::GetInteractionRadius() const
{
	return InteractionRadius;
}


void AMyObject::SetInteractionSequence(int32 _sequenceIndex)
{
	if (AvailableSequences.IsValidIndex(_sequenceIndex))
		InteractionSequence = AvailableSequences[_sequenceIndex];
}


UAnimSequence* AMyObject::GetInteractionSequence() const
{
	return InteractionSequence;
}


TArray<UAnimSequence*> AMyObject::GetAvaliableSequences() const
{
	return AvailableSequences;
}


void AMyObject::ResetLocation()
{
	this->SetActorLocation(InitialLocation);
}