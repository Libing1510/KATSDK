// Fill out your copyright notice in the Description page of Project Settings.


#include "KATPluginDll.h"


typedef int(*_katInit)();
typedef int(*_katGetWalkData)(int& by, double& wp, int& md, int& im, int& d);
typedef int(*_katSetLandformData)(KATLandformControlData data);
typedef int(*_katGetLandformData)(KATLandformControlData& data);
void* KATDll;
_katInit KATInit;
_katGetWalkData KATGetWalkData;
_katSetLandformData KATSetLandformData;
_katGetLandformData KATGetLandformData;

KATPluginDll* KATPluginDll::instance = nullptr;
bool needRestore = false;


KATPluginDll::KATPluginDll()
{
	Initialization();
	autoStart();
}

KATPluginDll::~KATPluginDll()
{
	if (instance != nullptr)
	{
		delete instance;
	}
}


KATPluginDll* KATPluginDll::getInstance()
{
	if (instance == nullptr)
	{
		instance = new KATPluginDll();
	}
	return instance;
}

void KATPluginDll::Initialization()
{
	destructMembers();

	UE_LOG(LogTemp, Warning, TEXT("KATDataCore Start..."));
	FString filePath = FPaths::Combine(*FPaths::ProjectPluginsDir(), TEXT("KATWalkPlugin/ThirdParty/WalkerBase.dll"));
	if (filePath.IsEmpty())
	{
		filePath = FPaths::Combine(*FPaths::ProjectPluginsDir(), TEXT("WalkerBase.dll"));
	}
	if (FPaths::FileExists(filePath))
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *filePath);
		KATDll = FPlatformProcess::GetDllHandle(*filePath);
		if (KATDll != NULL)
		{
			KATInit = NULL; // Local DLL function pointer.
			FString procName = ""; // The exact name of the DLL function.
			FString procLog = "";

			procName = "Init_2B";
			KATInit = (_katInit)FPlatformProcess::GetDllExport(KATDll, *procName); // Export the DLL function.		
			if (KATInit != NULL)
			{
				procLog = "KATInit export suc";
				UE_LOG(LogTemp, Warning, TEXT("%s"), *procLog);

			}

			procName = "Get_Data_2B";
			KATGetWalkData = (_katGetWalkData)FPlatformProcess::GetDllExport(KATDll, *procName); // Export the DLL function.		
			if (KATInit != NULL)
			{
				procLog = "KATGetWalkData export suc";
				UE_LOG(LogTemp, Warning, TEXT("%s"), *procLog);

			}

			procName = "LANDFORM_CONTROL_DATA_V2_UPDATE";
			KATGetLandformData = (_katGetLandformData)FPlatformProcess::GetDllExport(KATDll, *procName); // Export the DLL function.		
			if (KATInit != NULL)
			{
				procLog = "KATGetLandformData export suc";
				UE_LOG(LogTemp, Warning, TEXT("%s"), *procLog);

			}

			procName = "LANDFORM_CONTROL_DATA_V2_GET";
			KATSetLandformData = (_katSetLandformData)FPlatformProcess::GetDllExport(KATDll, *procName); // Export the DLL function.		
			if (KATInit != NULL)
			{
				procLog = "KATSetLandformData export suc";
				UE_LOG(LogTemp, Warning, TEXT("%s"), *procLog);

			}

		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Search DLLPath Error!"));
		}
	}

}

bool KATPluginDll::checkState()
{
	//check all mapping of funciton  and KatCheckForLaunch()
	if (KATInit &&
		KATGetWalkData &&
		KATSetLandformData &&
		KATGetLandformData
		)
	{
		//all process is done
		return true;
	}
	else
	{
		//something wrong
		return false;
	}

}

void KATPluginDll::destructMembers()
{
	KATInit = NULL;
	KATGetWalkData = NULL;
	KATSetLandformData = NULL;
	KATGetLandformData = NULL;
	if (KATInit != NULL)
	{
		KATInit();
	}


	if (KATDll != NULL)
	{
		FPlatformProcess::FreeDllHandle(KATDll);
		KATDll = NULL;
	}
}

void KATPluginDll::autoStart()
{

	KATInit();

}


int KATPluginDll::Init_2B()
{
	if (KATInit != NULL)
	{

		UE_LOG(LogTemp, Warning, TEXT("KatInit...Starting."));
		return KATInit();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("KatInit...Error."));
		return -1;
	}
}

FKATDataCore KATPluginDll::KatGetFrame(FKATDataCore dataCore)
{
	int bodyYaw1 = 0, moveDirection1 = 0, isMoving1 = 0;
	double walkPower1 = 0;
	int distancer1 = 0;

	int temprout = KATGetWalkData( bodyYaw1, walkPower1, moveDirection1, isMoving1, distancer1);

	if (temprout==0)
	{
		bodyYaw = ((float)bodyYaw1 / 1024) * 360;
		isMoving = isMoving1;
		moveDirection = moveDirection1;
		walkPower = (float)walkPower1;
		walkDistance = distancer1;


		dataCore.BodyYaw = bodyYaw;
		dataCore.IsMoving = isMoving == 1;
		dataCore.MoveDirection = moveDirection;
		dataCore.WalkPower = walkPower;
		dataCore.WalkDistance = walkDistance;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("katGetData...Null."));
	}

	KATLandformControlData data;
	data.HeartBeat = dataCore.HeartBeat;
	data.NormalRot_X = dataCore.NormalRot_X;
	data.NormalRot_Y = dataCore.NormalRot_Y;
	data.NormalRot_Z = dataCore.NormalRot_Z;
	data.ResetQuickly = dataCore.ResetQuickly;
	data.ResetSlowly = dataCore.ResetSlowly;
	data.OverWeight = dataCore.OverWeight;
	data.WeightLessness = dataCore.WeightLessness;
	data.TremorShort = dataCore.TremorShort;
	data.Quiver = dataCore.Quiver;
	data.ShakeLevel = dataCore.ShakeLevel;
	data.Lift = dataCore.Lift;
	data.Matrix3X3;
	data.Matrix3X3.m11 = dataCore.m11;
	data.Matrix3X3.m12 = dataCore.m12;
	data.Matrix3X3.m13 = dataCore.m13;
	data.Matrix3X3.m21 = dataCore.m21;
	data.Matrix3X3.m22 = dataCore.m22;
	data.Matrix3X3.m23 = dataCore.m23;
	data.Matrix3X3.m31 = dataCore.m31;
	data.Matrix3X3.m32 = dataCore.m32;
	data.Matrix3X3.m33 = dataCore.m33;

	temprout = KATSetLandformData(data);
	if (temprout==1)
	{
		temprout = KATGetLandformData(data);
		if (temprout == 1)
		{
			UE_LOG(LogTemp, Warning, TEXT("KATGetLandformData...success."));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("KATGetLandformData...Null."));

		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("KATSetLandformData...Null."));
	}


	dataCore.HeartBeat = data.HeartBeat ;
	dataCore.NormalRot_X = data.NormalRot_X;
	dataCore.NormalRot_Y = data.NormalRot_Y;
	dataCore.NormalRot_Z = data.NormalRot_Z;
	dataCore.ResetQuickly = data.ResetQuickly;
	dataCore.ResetSlowly = data.ResetSlowly;
	dataCore.OverWeight = data.OverWeight;
	dataCore.WeightLessness = data.WeightLessness;
	dataCore.TremorShort = data.TremorShort;
	dataCore.Quiver = data.Quiver;
	dataCore.ShakeLevel = data.ShakeLevel;
	dataCore.Lift = data.Lift;
	dataCore.m11 = data.Matrix3X3.m11;
	dataCore.m12 = data.Matrix3X3.m12;
	dataCore.m13 = data.Matrix3X3.m13;
	dataCore.m21 = data.Matrix3X3.m21;
	dataCore.m22 = data.Matrix3X3.m22;
	dataCore.m23 = data.Matrix3X3.m23;
	dataCore.m31 = data.Matrix3X3.m31;
	dataCore.m32 = data.Matrix3X3.m32;
	dataCore.m33 = data.Matrix3X3.m33;

	return dataCore;
}