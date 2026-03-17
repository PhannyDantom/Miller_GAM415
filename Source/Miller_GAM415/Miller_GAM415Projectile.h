// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Miller_GAM415Projectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UNiagaraSystem;

UCLASS(config=Game)
class AMiller_GAM415Projectile : public AActor
{
	GENERATED_BODY()

	/** Sphere collision component */
	UPROPERTY(VisibleDefaultsOnly, Category=Projectile)
	USphereComponent* CollisionComp;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* ballMesh; //Creats Mesh

	UPROPERTY(EditAnywhere)
	UMaterial* baseMat; //Creates Material

	UPROPERTY()
	FLinearColor randColor; //Sets Randomized Color

	UPROPERTY(EditAnywhere)
	UMaterialInterface* projMat;//Creates Project Material

	UPROPERTY()
	UMaterialInstanceDynamic* dmiMat; //Creates Dynamic Material

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* colorP;

public:
	AMiller_GAM415Projectile();

protected:
	virtual void BeginPlay(); //Calls Color Function When Shot

public:

	/** called when projectile hits something */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns CollisionComp subobject **/
	USphereComponent* GetCollisionComp() const { return CollisionComp; }
	/** Returns ProjectileMovement subobject **/
	UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }
};

