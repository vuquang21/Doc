#pragma once
#include"Truong.h"
#include"DH.h"
#include"DH.h"
class List
{
protected: 
	Truong** list;
	int n;
public: 
	List();
	~List();
	void Input();
	int SoSVTN();
	void MaxDiemTB();
};

