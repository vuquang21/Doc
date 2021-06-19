#pragma once
#include "Gate.h"
#include "Hero.h"

class Hero;
class List
{
private:
	Gate** gate;
	int numberOfGate;
public:
	List();
	~List();
	int GetGate();
	void Input();
	bool PassGate(Hero &hero);
};

