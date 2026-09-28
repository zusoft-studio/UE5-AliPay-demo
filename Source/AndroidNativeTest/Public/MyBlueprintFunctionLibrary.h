// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class ANDROIDNATIVETEST_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Java Combine String", Keywords = "Java Combine String"), Category = "AndroidFunction")
	static FString JavaCombineString(FString Str1, FString Str2);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "CallAlipayTest", Keywords = "CallAlipayTest"), Category = "AndroidFunction")
	static FString CallAlipayTest(FString Str1, FString Str2);
};
