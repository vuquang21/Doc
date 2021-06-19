#pragma once
#include "Gate.h"
class AcademicGate : public Gate
{
private:
	int question;
public: 
	int flag = 2;
	AcademicGate();
	~AcademicGate();
	bool PassGate(int &iq);
	void Input();
	int GetFlag();
};

