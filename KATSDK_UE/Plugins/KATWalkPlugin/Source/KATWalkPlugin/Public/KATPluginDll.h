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


	/*心跳包，需要内容每一帧更新*/
		int HeartBeat;
	/*地形法线的X*/
		float NormalRot_X;
	/*地形法线的Y*/
		float NormalRot_Y;
	/*地形法线的Z*/
		float NormalRot_Z;
	/*快速复位，需要内容置1后触发，动作完成后Runtime置0*/
		int ResetQuickly;
	/*缓慢复位，需要内容置1后触发，动作完成后Runtime置0*/
		int ResetSlowly;
	/*超重，需要内容置1后触发，动作完成后Runtime置0*/
		int OverWeight;
	/*失重，需要内容置1后触发，动作完成后Runtime置0*/
		int WeightLessness;
	/*短颤，需要内容置1后触发，动作完成后Runtime置0*/
		int TremorShort;
	/*震动，需要内容置震动等级0,1,2；0为不震动*/
		int Quiver;
	/*晃动，需要内容置晃动等级,0,1,2,3;0为不晃动*/
		int ShakeLevel;
	/*楼层位置,五个档位:2,1,0,-1,-2;0档位为初始位置*/
		int Lift;
	/*地形变化，需要内容更新*/
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
