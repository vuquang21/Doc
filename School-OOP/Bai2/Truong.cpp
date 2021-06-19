#include "Truong.h"
#include<iostream>
#include<stdint.h>
using namespace std;

Truong::Truong() {
	mssv = "";
	ten = "";
	diachi = "";
	diemTB = 0;
	tongTC = 0;
}
Truong::~Truong() {};
void Truong::Input()
{
	cout << "Ten: "; getline(cin >> ws, ten);
	cout << "Mssv: "; getline(cin >> ws, mssv);
	cout << "Dia chi: "; getline(cin >> ws, diachi);
	cout << "Tong tin chi: "; cin >> tongTC;
	cout << "Diem trung binh: "; cin >> diemTB;
}

void Truong::Display()
{
	cout << "Ten: " << ten << endl;
	cout << "Mssv: " << mssv << endl;
	cout << "Dia chi: " << diachi << endl;
	cout << "Tong tin chi: " << tongTC << endl;
	cout << "Diem trung binh: " << diemTB << endl;
}

int Truong::GetFlag()
{
	return flag;
}

float Truong::GetDTB()
{
	return diemTB;
}