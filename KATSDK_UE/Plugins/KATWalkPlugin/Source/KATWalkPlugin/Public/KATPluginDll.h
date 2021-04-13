// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "KATDataCore.h"

struct MMatrix33
{

		float m11 = 1;
		float m12 = 0;
		float m13 = 0;

		float m21 = 0;
		float m22 = 1;
		float m23 = 0;

		float m31 = 0;
		float m32 = 0;
		float m33 = 1;

};


struct KATLandformControlData
{


	/*����������Ҫ����ÿһ֡����*/
		int HeartBeat;
	/*���η��ߵ�X*/
		float NormalRot_X;
	/*���η��ߵ�Y*/
		float NormalRot_Y;
	/*���η��ߵ�Z*/
		float NormalRot_Z;
	/*���ٸ�λ����Ҫ������1�󴥷���������ɺ�Runtime��0*/
		int ResetQuickly;
	/*������λ����Ҫ������1�󴥷���������ɺ�Runtime��0*/
		int ResetSlowly;
	/*���أ���Ҫ������1�󴥷���������ɺ�Runtime��0*/
		int OverWeight;
	/*ʧ�أ���Ҫ������1�󴥷���������ɺ�Runtime��0*/
		int WeightLessness;
	/*�̲�����Ҫ������1�󴥷���������ɺ�Runtime��0*/
		int TremorShort;
	/*�𶯣���Ҫ�������𶯵ȼ�0,1,2��0Ϊ����*/
		int Quiver;
	/*�ζ�����Ҫ�����ûζ��ȼ�,0,1,2,3;0Ϊ���ζ�*/
		int ShakeLevel;
	/*¥��λ��,�����λ:2,1,0,-1,-2;0��λΪ��ʼλ��*/
		int Lift;
	/*���α仯����Ҫ���ݸ���*/
		MMatrix33 Matrix3X3;

};



/**
 * 
 */
class KATPluginDll
{
public:
	KATPluginDll();
	~KATPluginDll();


	static KATPluginDll* getInstance();

	int Init_2B();

	FKATDataCore KatGetFrame(FKATDataCore dataCore);

private:

	static KATPluginDll* instance;
	KATLandformControlData landformData;
	float bodyYaw;
	float walkPower;
	int moveDirection;
	int isMoving;
	float walkDistance;


	void Initialization();

	void destructMembers();

	void autoStart();

	bool checkState();

};
