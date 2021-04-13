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

	/*������ת*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float BodyYaw = 0.0f;
	/*�����ٶ�*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float WalkPower = 0.0f;
	/*���߷���-1��ǰ��1����*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int MoveDirection = 0;
	/*�Ƿ�������*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		bool IsMoving = false;
	/*����·�̡��ݲ����á�*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float WalkDistance = 0.0f;


	/*����������Ҫ����ÿһ֡����*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int HeartBeat = 1;
	/*���η��ߵ�X*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float NormalRot_X = 0.0f;
	/*���η��ߵ�Y*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float NormalRot_Y = 0.0f;
	/*���η��ߵ�Z*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		float NormalRot_Z = 0.0f;
	/*���ٸ�λ����Ҫ������1�󴥷���������ɺ�Runtime��0*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int ResetQuickly = 1;
	/*������λ����Ҫ������1�󴥷���������ɺ�Runtime��0*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int ResetSlowly = 1;
	/*���أ���Ҫ������1�󴥷���������ɺ�Runtime��0*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int OverWeight = 1;
	/*ʧ�أ���Ҫ������1�󴥷���������ɺ�Runtime��0*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int WeightLessness = 1;
	/*�̲�����Ҫ������1�󴥷���������ɺ�Runtime��0*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int TremorShort = 1;
	/*�𶯣���Ҫ�������𶯵ȼ�0,1,2��0Ϊ����*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int Quiver = 1;
	/*�ζ�����Ҫ�����ûζ��ȼ�,0,1,2,3;0Ϊ���ζ�*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = KAT_DATA)
		int ShakeLevel = 1;
	/*¥��λ��,�����λ:2,1,0,-1,-2;0��λΪ��ʼλ��*/
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
