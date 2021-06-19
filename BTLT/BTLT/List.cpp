#include "List.h"
#include<iostream>
using namespace std;

class People;

List::List()
{
	numberOfElement = 0;
	p = NULL;
}
List::~List() {};

void List::Input()
{
	cout << "Nhap so luong nguoi muon: "; cin >> numberOfElement;
	p = new People[numberOfElement];
	for (int i = 0; i < numberOfElement; i++)
	{
		p[i].Input();
	}
}

void List::Display()
{
	cout << "Danh sach nguoi muon: \n";
	for (int i = 0; i < numberOfElement; i++)
	{
		p[i].Display();
	}
}


void List::Out(Date d)
{
	cout << "Nguoi co muon sach qua han: ";
	for (int i = 0; i < numberOfElement; i++)
	{
		if (p[i].IsOutOfDate(d) == true)
		{
			p[i].Display();
		}
	}
}