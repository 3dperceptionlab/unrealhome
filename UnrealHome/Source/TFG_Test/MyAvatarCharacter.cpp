// Copyright Cesar Molto Morilla 2020/21


#include "MyAvatarCharacter.h"

// Sets default values
AMyAvatarCharacter::AMyAvatarCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyAvatarCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyAvatarCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

