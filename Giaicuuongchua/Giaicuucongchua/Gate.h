#pragma once
class Gate
{
protected: 

public:
	int flag = 0;
	virtual void Input(){};
	virtual bool PassGate(int&) = 0;
	virtual int GetFlag() = 0;
};


