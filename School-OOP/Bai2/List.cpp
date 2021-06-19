#include "List.h"
#include"Truong.h"
#include"CD.h"
#include"DH.h"
#include<iostream>
using namespace std;

class DH;
class Truong;
class CD;

List::List()
{
	n = 0;
	list = NULL;
}

List::~List()
{
	for (int i = 0; i < n; i++)
	{
		list[i] = NULL;
	}
	delete[] list;
}

void List::Input()
{
	cout << "Nhap so luong phan tu: "; cin >> n;
	list = new Truong * [n];
	int choice;
	for (int i = 0; i < n; i++)
	{
		cout << "1. Cao Dang. \t 2. Dai Hoc. \t >> "; cin >> choice;
		switch (choice)
		{
		case 1: 
			list[i] = new CD;
			break;
		case 2: 
			list[i] = new DH;
			break;
		}
		list[i]->Input();
	}
}

int List::SoSVTN()
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		switch (list[i]->GetFlag())
		{
		case 1: 
			if (list[i]->TN() == true) count++;
			break;
		case 2: 
			if (list[i]->TN() == true) count++;
			break;
		}
	}
	return count;
}

void List::MaxDiemTB()
{
	Truong* sv = new DH;
	for (int i = 0; i < n - 1; i++)
	{
		switch (list[i]->GetFlag())
		{
		case 1:
			continue;
			break;
		case 2:
			if (list[i]->GetDTB() > list[i + 1]->GetDTB())
			{
				sv = ((DH*)list[i]);
			}
			break;
		}
	}
	sv->Display();
}