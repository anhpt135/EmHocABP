// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "APT_CharacterBase.generated.h"

class UInputAction;
class UInputMappingContext;

UCLASS()
class EMHOC_ABP_API AAPT_CharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AAPT_CharacterBase();

protected:
	virtual void BeginPlay() override;

	//~ Input
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "APT|Input")
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "APT|Input")
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "APT|Input")
	TObjectPtr<UInputAction> LookAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "APT|Input")
	TObjectPtr<UInputAction> JumpAction;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "APT|Input")
	int32 MappingContextPriority = 0;

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	//~ End Input

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
