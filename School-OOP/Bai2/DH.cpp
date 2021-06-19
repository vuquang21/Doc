#include "DH.h"
#include<iostream>
using namespace std;

DH::DH() : Truong()
{
	tenLV = "";
	diemLV = 0;
}

DH::~DH() {};

void DH::Input()
{
	Truong::Input();
	cout << "Ten luan van: "; getline(cin >> ws, tenLV);
	cout << "Diem luan van: "; cin >> diemLV;
}

void DH::Display()
{
	Truong::Display();
	cout << "Ten luan van: " << tenLV << endl;
	cout << "Diem luan van: " << diemLV << endl;
}

int DH::GetFlag()
{
	return flag;
}

bool DH::TN()
{
	bool check = (tongTC >= 170 && diemTB >= 5 && diemLV >= 5) ? true : false;
	return check;
}

