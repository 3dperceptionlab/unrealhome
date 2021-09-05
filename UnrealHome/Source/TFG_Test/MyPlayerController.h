// Copyright Cesar Molto Morilla 2020/21

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

// Forward declarations
class AMyAvatarController;
class AMyAvatarCharacter;
class AMyObject;

/**
 * 
 */
UCLASS()
class TFG_TEST_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

	// Reference to the selected avatar and its controller
	AMyAvatarCharacter* SelectedAvatar = nullptr;
	AMyAvatarController* SelectedAvatarCtrl = nullptr;

	// Reference to the selected object
	AMyObject* SelectedObject = nullptr;
	
protected:
	// Called when the game starts or when spawned
	void BeginPlay();

	UFUNCTION(BlueprintImplementableEvent, Category = "User interface setup")
	void AddAvailableActionsToUI();

public:
	void GetActorUnderMouse();

	UFUNCTION(BlueprintCallable)
	void StartSimulation();

	/// Blueprint methods for setting User Interface
	UFUNCTION(BlueprintCallable)
	AMyObject* GetSelectedObject();
};
