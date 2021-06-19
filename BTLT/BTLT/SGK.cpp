#include "SGK.h"
#include<iostream>
using namespace std;

SGK::SGK()
{
	title = "SGK";
}

SGK::~SGK() {};

int SGK::GetFlag()
{
	return flag;
}

void SGK::Display()
{
	cout << "Title: " << title << endl;
}