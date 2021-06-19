#pragma once
#include "Gate.h"
class PowerGate : public Gate
{
private:
	int power;
public:
	int flag = 3;
	PowerGate();
	~PowerGate();
	bool PassGate(int &dpower);
	void Input();
	int GetFlag();
};

