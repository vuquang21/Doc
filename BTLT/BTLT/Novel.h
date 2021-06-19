#pragma once
#include"Book.h"

class Novel : public Book
{
public:
	Novel();
	~Novel();
	int flag = 2;
	int GetFlag();
	void Display();
};

