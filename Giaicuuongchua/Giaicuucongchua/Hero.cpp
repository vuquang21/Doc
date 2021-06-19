#include "Hero.h"
#include "BusinessGate.h"
#include "AcademicGate.h"
#include "PowerGate.h"
#include "List.h"
#include <iostream>

using namespace std;

Hero::Hero() 
{
	this->money = this->power = this->iq = 0;
}

Hero::~Hero() {};

void Hero::Input()
{
	cout << "Nhap so tien, iq, suc manh cua nguoi hung: ";
	cin >> this->money >> this->iq >> this->power;
}

int Hero::GetMoney() 
{
	return money;
}
int Hero::GetIq()
{
	return iq;
}
int Hero::GetPower()
{
	return power;
}

