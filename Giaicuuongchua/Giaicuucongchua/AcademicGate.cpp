#include "AcademicGate.h"
#include <iostream>
using namespace std;

AcademicGate::AcademicGate()
{
	this->question = 0;
}

AcademicGate::~AcademicGate() {}

bool AcademicGate::PassGate(int &iq)
{
	bool check = (iq >= this->question) ? true : false;
	return check;
}

void AcademicGate::Input()
{
	cout << "Nhap do kho cau hoi: "; cin >> question;
}

int AcademicGate::GetFlag()
{
	return flag;
}