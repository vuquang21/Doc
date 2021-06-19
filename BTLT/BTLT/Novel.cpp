#include "Novel.h"
#include<iostream>
using namespace std;

Novel::Novel()
{
	title = "Novel";
}
Novel::~Novel() {};

int Novel::GetFlag()
{
	return flag;
}

void Novel::Display()
{
	cout << "Title: " << title << endl;
}