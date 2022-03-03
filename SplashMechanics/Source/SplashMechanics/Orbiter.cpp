// Fill out your copyright notice in the Description page of Project Settings.


#include "Orbiter.h"

// Sets default values
AOrbiter::AOrbiter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Dimensions = FVector(100, 0, 0);
	AxisVector = FVector(0, 0, 1);
	Scaler = 100.0f;
	Shielding = false;

}

// Called when the game starts or when spawned
void AOrbiter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOrbiter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	AngleAxis += DeltaTime * Scaler;

	if (AngleAxis >= 360.0f) 
	{
		AngleAxis = 0.0f;
	}

	FVector RotateValue = Dimensions.RotateAngleAxis(AngleAxis, AxisVector);

	NewLocation.X += RotateValue.X;
	NewLocation.Y += RotateValue.Y;
	NewLocation.Z += RotateValue.Z;

	FRotator NewRotation = FRotator(0, AngleAxis, 0);

	FQuat QuatRotation = FQuat(NewRotation);

	///if (Shielding == true)
	//{
		SetActorLocationAndRotation(NewLocation, QuatRotation, false, 0, ETeleportType::None);
	//}
}

