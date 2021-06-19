#pragma once
#include<string>
using namespace std;

class Truong
{
protected:
	string mssv, ten, diachi;
	float tongTC, diemTB;
public:
	int flag = 0;
	Truong();
	~Truong();
	virtual void Input();
	void Display();
	virtual int GetFlag();
	virtual bool TN() = 0;
	float GetDTB();
};

