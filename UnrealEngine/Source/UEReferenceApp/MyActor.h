// This application is provided as is, without any support

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Containers/Array.h" // Include for TArray
#include "Containers/Map.h" // Include for TMap
#include "MyActor.generated.h"



USTRUCT(BlueprintType)
struct FParameters
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA Parameters")
    float RCirWcb = 2000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA Parameters")
    float RCirArt = 8000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA Parameters")
    float RCirSst = 12000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA Parameters")
    bool UpdateArtRadius = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA Parameters")
    bool UpdateArtRadiusCheck = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA Parameters")
    float Tt = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA Parameters")
    float RCirArtScale = 0.0f;
};

USTRUCT(BlueprintType)
struct FNewParameters {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA NewParameters")
    double art = 8000.0; // Radius of ART
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA NewParameters")
    double sst = 12000.0; // Radius of SST
};

USTRUCT(BlueprintType)
struct FAircraft {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA FAircraft")
    double x = -50;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA FAircraft")
    double y = 0;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA FAircraft")
    double speed = 250;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA FAircraft")
    double heading = 30;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA FAircraft")
    TArray<double> dir;
};

USTRUCT(BlueprintType)
struct FIntersection {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA FIntersection")
    TArray<double> points;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA FIntersection")
    double angle;
};

// Ensure FArrayWrapper is defined before being used in the AMyActor class
USTRUCT(BlueprintType)
struct FArrayWrapper
{
    GENERATED_BODY()

    TArray<double> Array;
};

UCLASS()
class UEREFERENCEAPP_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();
    UFUNCTION(BlueprintCallable, Category = "DAA Calculation")
    void RasDaa(const FVector Ownship, const FVector Intruder, const FVector OwnshipHeadingSpeed, const FVector IntruderHeadingSpeed, float& StartAngle, float& EndAngle, int32& Alert, FParameters Parameters, FParameters& TestOutParameters);
    
    UFUNCTION(BlueprintCallable, Category = "Linear system solver")
    FIntersection solveLinearSystem(double a1, double b1, double c1, double a2, double b2, double c2);
    UFUNCTION(BlueprintCallable, Category = "Circle Intersection")
    TArray<double> findCircleIntersections(FAircraft ownship, FAircraft intruder, double radius);
    UFUNCTION(BlueprintCallable, Category = "Calculate Angle")
    double calculateAngle(double x, double y, double origin_x, double origin_y);

    UFUNCTION(BlueprintCallable, Category = "Circle Intersection")
    void findIntersectionWithCircle(FNewParameters Parameter, FAircraft ownship, FAircraft intruder, double& StartAngle, double& EndAngle, int32 &level);

    UFUNCTION(BlueprintCallable, Category = "Data Saving")
    void SaveDataIntoCsvFile(int32 FirstTimeEntry, const FVector LocationInDegreesofOwnship, const FVector LocationInXYZofOwnship, const float HeadingofOwnship, const float SpeedofOwnship, const FVector LocationInDegreesofIntruder, const FVector LocationInXYZofIntruder, const float HeadingofIntruder, const float SpeedofIntruder, float StartAngle, float EndAngle, int32 ThreatLevel);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
