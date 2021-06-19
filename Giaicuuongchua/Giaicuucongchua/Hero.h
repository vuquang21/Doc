#pragma once
#include "BusinessGate.h"
#include "AcademicGate.h"
#include "PowerGate.h"
#include "List.h"

class Hero
{

public:
	int money, power, iq;
	Hero();
	~Hero();
	int GetMoney();
	int GetPower();
	int GetIq();
	void Input();

};

