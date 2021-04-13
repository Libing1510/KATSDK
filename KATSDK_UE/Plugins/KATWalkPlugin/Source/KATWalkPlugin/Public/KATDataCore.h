// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KATDataCore.generated.h"
#define KAT_DATA "FKATDataCore | data"
/**
 * 
 */
USTRUCT(BlueprintType)
struct  FKATDataCore
{
	GENERATED_USTRUCT_BODY()

	/*身体旋转*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float BodyYaw = 0.0f;
	/*行走速度*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float WalkPower = 0.0f;
	/*行走方向，-1朝前，1朝后*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int MoveDirection = 0;
	/*是否在行走*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		bool IsMoving = false;
	/*行走路程【暂不启用】*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float WalkDistance = 0.0f;


	/*心跳包，需要内容每一帧更新*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int HeartBeat = 1;
	/*地形法线的X*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float NormalRot_X = 0.0f;
	/*地形法线的Y*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float NormalRot_Y = 0.0f;
	/*地形法线的Z*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float NormalRot_Z = 0.0f;
	/*快速复位，需要内容置1后触发，动作完成后Runtime置0*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int ResetQuickly = 1;
	/*缓慢复位，需要内容置1后触发，动作完成后Runtime置0*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int ResetSlowly = 1;
	/*超重，需要内容置1后触发，动作完成后Runtime置0*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int OverWeight = 1;
	/*失重，需要内容置1后触发，动作完成后Runtime置0*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int WeightLessness = 1;
	/*短颤，需要内容置1后触发，动作完成后Runtime置0*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int TremorShort = 1;
	/*震动，需要内容置震动等级0,1,2；0为不震动*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int Quiver = 1;
	/*晃动，需要内容置晃动等级,0,1,2,3;0为不晃动*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int ShakeLevel = 1;
	/*楼层位置,五个档位:2,1,0,-1,-2;0档位为初始位置*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int Lift = 1;


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float m11 = 1.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float m12 = 0.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float m13 = 0.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float m21 = 0.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float m22 = 1.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float m23 = 0.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float m31 = 0.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float m32 = 0.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float m33 = 1.0f;

};
