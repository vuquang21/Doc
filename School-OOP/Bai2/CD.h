#pragma once
#include"Truong.h"
class CD : public Truong
{
private:
	float diemTN;
public:
	int flag = 1;
	CD();
	~CD();
	void Input();
	void Display();
	int GetFlag();
	bool TN();
};

