// Copyright Cesar Molto Morilla 2020/21


#include "MyPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "MyAvatarCharacter.h"
#include "MyAvatarController.h"
#include "MyObject.h"

void AMyPlayerController::BeginPlay()
{
	// Init input handling
	EnableInput(this);
	check(InputComponent);
	InputComponent->BindAction("StartSimulation", IE_Pressed, this, &AMyPlayerController::StartSimulation);
	InputComponent->BindAction("GetActorUnderMouse", IE_Pressed, this, &AMyPlayerController::GetActorUnderMouse);

	// Show cursor on screen
	bShowMouseCursor = true;
}

void AMyPlayerController::GetActorUnderMouse()
{
	FHitResult hitResult;
	if (GetHitResultUnderCursor(ECollisionChannel::ECC_GameTraceChannel1, true, hitResult))
	{
		UE_LOG(LogTemp, Warning, TEXT("Click Mouse %s"), *hitResult.GetActor()->GetName());

		SelectedAvatar = Cast<AMyAvatarCharacter>(hitResult.GetActor());
		if (SelectedAvatar)
			SelectedAvatarCtrl = Cast<AMyAvatarController>(SelectedAvatar->GetController());
		else
		{
			SelectedObject = Cast<AMyObject>(hitResult.GetActor());
			
			if (!SelectedObject)
				return;

			AddAvailableActionsToUI();
		}
	}
}

void AMyPlayerController::StartSimulation()
{
	// Handle user input if selected avatar and object are already set
	if (SelectedAvatarCtrl && SelectedObject)
		SelectedAvatarCtrl->SetTarget(SelectedObject);
}

AMyObject* AMyPlayerController::GetSelectedObject()
{
	return SelectedObject;
}

