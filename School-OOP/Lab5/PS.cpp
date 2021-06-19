#include "PS.h"
#include<iostream>
using namespace std;

PS::PS()
{
	tu = 0;
	mau = 1;
}
PS::~PS() {};

PS &PS::operator++()
{
	this->tu += this->mau;
	return *this;
}

PS &PS::operator++(int)
{
	PS obj = *this;
	this->tu += this->mau;
	return obj;
}

istream& operator>>(istream& is, PS& obj)
{
	is >> obj.tu >> obj.mau;
	return is;
}
ostream& operator<<(ostream& os, PS& obj)
{
	os << obj.tu << "/" << obj.mau;
	return os;
}