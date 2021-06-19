#pragma once
#include"People.h"
#include"Book.h"
#include"Date.h"
class List
{
private:
	People* p;
	int numberOfElement;
public:
	List();
	~List();
	void Input();
	void Display();
	void Out(Date d);
};

