#include "List.h"
#include "BusinessGate.h"
#include "AcademicGate.h"
#include "PowerGate.h"
#include <iostream>
using namespace std;

List::List() 
{
	this->numberOfGate = 0;
	gate = NULL;
}

List::~List() {};
int List::GetGate()
{
	return numberOfGate;
}
void List::Input()
{
	cout << "Nhap so luong cong: ";
	cin >> this->numberOfGate;
	gate = new Gate *[numberOfGate];
	int choice;
	for (int i = 0; i < numberOfGate; i++)
	{
		cout << "1. Cong giao thuong. \t 2. Cong hoc thuat. \t 3. Cong suc manh. \t>" ;
		cin >> choice;
		switch (choice)
		{
		case 1:
			gate[i] = new BusinessGate;
			break;
		case 2: 
			gate[i] = new AcademicGate;
			break;
		case 3: 
			gate[i] = new PowerGate;
			break;
		default:
			cout << "Lua chon khong phu hop, vui long chon lai.";
			break;
		}
		gate[i]->Input();
	}
}

bool List::PassGate(Hero &hero)
{
	bool check = true;
	for (int i = 0; (check != false) || (i < numberOfGate); )
	{
		switch (gate[i]->GetFlag())
		{
		case 1: 
			if (gate[i]->PassGate(hero.money) == true)
			{
				i++;
			}
			else check = false;
			break;
		case 2: 
			if (gate[i]->PassGate(hero.iq) == true)
			{
				i++;
			}
			else check = false; 
			break;
		case 3: 
			if (gate[i]->PassGate(hero.power) == true)
			{
				i++;
			}
			else check = false;
			break;
		default:
			break;
		}
	}
	if (check == true) 
	{
		cout << "You win!";
		return true;
	}
	else 
	{
		cout << "Game over!";
		return false;
	}
}