#include "CD.h"
#include<iostream>
using namespace std;

CD::CD()
{
	diemTN = 0;
}
CD::~CD() {};

void CD::Input()
{
	Truong::Input();
	cout << "Diem tot nghiep: "; cin >> diemTN;
}

void CD::Display()
{
	Truong::Display();
	cout << "Diem tot nghiep: " << diemTN << endl;
}

int CD::GetFlag()
{
	return flag;
}

bool CD::TN()
{
	bool check = (tongTC >= 120 && diemTB >= 5 && diemTN >= 5) ? true : false;
	return check;
}