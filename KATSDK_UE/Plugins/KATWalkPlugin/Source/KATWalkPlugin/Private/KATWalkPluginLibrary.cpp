// Fill out your copyright notice in the Description page of Project Settings.


#include "KATWalkPluginLibrary.h"

FKATDataCore UKATWalkPluginLibrary::UpdateDataCore(FKATDataCore data)
{
	KATPluginDll* kdc = KATPluginDll::getInstance();
	return kdc->KatGetFrame(data);
}

int UKATWalkPluginLibrary::Init()
{

	KATPluginDll* kdc = KATPluginDll::getInstance();
	return kdc->Init_2B();
}