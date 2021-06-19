#pragma once
#include"Gate.h"
class BusinessGate : public Gate
{
private:
	int price, item;
public:
	int flag = 1;
	BusinessGate();
	~BusinessGate();
	bool PassGate(int &money);
	void Input();
	int GetFlag();
};

