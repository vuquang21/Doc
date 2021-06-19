#pragma once
#include<iostream>
using namespace std;
class PS
{
protected:
	int tu, mau;
public:
	PS();
	~PS();
	PS& operator++();
	PS& operator++(int);
	friend istream& operator>>(istream& is, PS& obj);
	friend ostream& operator<<(ostream& os, PS& obj);
};

