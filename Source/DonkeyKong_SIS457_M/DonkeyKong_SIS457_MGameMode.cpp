// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_SIS457_MGameMode.h"
#include "DonkeyKong_SIS457_MCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADonkeyKong_SIS457_MGameMode::ADonkeyKong_SIS457_MGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
