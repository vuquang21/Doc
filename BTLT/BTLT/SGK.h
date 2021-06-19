#pragma once
#include"Book.h"
class SGK : public Book
{
public:
	SGK();
	~SGK();
	int flag = 1;
	int GetFlag();
	void Display();
};

