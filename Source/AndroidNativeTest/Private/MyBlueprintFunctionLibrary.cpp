// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "../../../Plugins/AndroidNative/Source/AndroidNative/Public/AndroidNativeUtils.h"
#if PLATFORM_ANDROID
#include "Runtime/Core/Public/Android/AndroidJavaEnv.h"
#endif

FString UMyBlueprintFunctionLibrary::JavaCombineString(FString Str1, FString Str2)
{
	FString ConcatenatedString = TEXT("123");
	ConcatenatedString = AndroidNativeUtils::CallJavaStaticMethod<FString>("com/Plugins/AndroidNative/StringOperations",
		"ConcatenateStrings", Str1, Str2);


	return ConcatenatedString;
}

FString UMyBlueprintFunctionLibrary::CallAlipayTest(FString Str1, FString Str2)
{
	FString result = TEXT("[CallAlipayTest]Puer Cpp");
	

#if PLATFORM_ANDROID
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		jmethodID GetPayDemoActivityMethodID = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID,
			"AndroidThunkJava_PayInGameActivity", "()V", false);
		jstring JstringResult = (jstring)FJavaWrapper::CallObjectMethod(Env, FJavaWrapper::GameActivityThis, GetPayDemoActivityMethodID);

		
		result = TEXT("[CallAlipayTest]Call Java Done");
	}
#endif

	return result;
}
