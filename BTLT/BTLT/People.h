#pragma once
#include<string>
#include"SGK.h"
#include"Novel.h"
#include"Book.h"
#include"Date.h"
using namespace std;

class Book;
class People
{
protected:
	string name, id, phoneNumber;
	int numberOfBook;
	Book **book;
public: 
	int max = 4;
	People();
	~People();
	void Input();
	void Display();
	int GetDate();
	bool IsOutOfDate(Date d);
};

