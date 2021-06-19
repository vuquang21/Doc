#include "Book.h"
#include<iostream>
#include<stdint.h>
using namespace std;

Book::Book()
{
	title = "";
}
Book::~Book() {};

int Book::GetFlag()
{
	return flag;
}


void Book::Input()
{
	cin >> date;
}

Date Book::GetDate()
{
	return date;
}