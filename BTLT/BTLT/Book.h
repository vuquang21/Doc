#pragma once
#include<string>
#include"Date.h"
using namespace std;

class Book
{
protected: 
	string title;
	Date date;
public: 
	int flag = 0;
	Book();
	~Book();
	virtual int GetFlag();
	virtual void Display() = 0;
	Date GetDate();
	void Input();
};

