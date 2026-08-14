// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomPointer.h"
#include "Components/TextRenderComponent.h"

// Sets default values
ACustomPointer::ACustomPointer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	TextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextComponent"));
	RootComponent =	TextComponent;
}

// Called when the game starts or when spawned
void ACustomPointer::BeginPlay()
{
	Super::BeginPlay();
	TextComponent->SetText(FText::FromString("Drink Me!"));
	TextComponent->AddLocalRotation(FRotator(0.0f, 180.0f, 0.0f));
	
}

// Called every frame
void ACustomPointer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

