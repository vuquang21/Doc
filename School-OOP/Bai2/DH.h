#pragma once
#include"Truong.h"

class DH : public Truong
{
private:
	string tenLV;
	float diemLV;
public:
	int flag = 2;
	DH();
	~DH();
	void Input();
	void Display();
	int GetFlag();
	bool TN();
};

