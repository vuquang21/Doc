#include "PowerGate.h"
#include <iostream>
using namespace std;

PowerGate::PowerGate()
{
	this->power = 0;
}

PowerGate::~PowerGate() {}

bool PowerGate::PassGate(int &dpower)
{
	bool check = (dpower >= this->power) ? true : false;
	dpower -= this->power;
	return check;
}

void PowerGate::Input()
{
	cout << "Nhap suc manh cua nguoi linh: "; cin >> this->power;
}

int PowerGate::GetFlag()
{
	return flag;
}