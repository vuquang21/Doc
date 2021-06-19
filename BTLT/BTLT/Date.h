#pragma once
#include <iostream>

using namespace std;

class Date
{
private:
	int yyyy, mm, dd;
public:
	Date();
	Date(int y, int m, int d);
	~Date();
	bool Check();
	bool IsLeapYear();
	friend istream& operator>>(istream& is, Date& obj);
	friend ostream& operator<<(ostream& os, Date& obj);

	Date operator+(int day);
	Date operator-(int day);
	int operator-(Date d);

	Date& operator++();
	Date& operator--();
	int Getdd();
};