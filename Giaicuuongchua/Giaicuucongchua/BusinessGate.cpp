#include "BusinessGate.h"
#include <iostream>
using namespace std;

BusinessGate::BusinessGate()
{
	this->item = 0;
	this->price = 0;
}

BusinessGate::~BusinessGate() {}

bool BusinessGate::PassGate(int &money) {
	bool check = (money >= this->item * this->price) ? true : false;
	money -= item * price;
	return check;
}

void BusinessGate::Input()
{
	cout << "Nhap ma vat pham va gia tri: ";
	cin >> this->item >> this->price;
}

int BusinessGate::GetFlag()
{
	return flag;
}