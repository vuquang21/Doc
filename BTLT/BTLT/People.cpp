#include "People.h"
#include<stdint.h>
#include<iostream>
#include"Book.h"
using namespace std;

class Book;
People::People()
{
	name = "";
	id = "";
	phoneNumber = "";
	numberOfBook = 0;
	book = NULL;
}

People::~People() {};

void People::Input()
{
	cout << "Nhap ten nguoi muon: "; getline(cin >> ws, name);
	cout << "Nhap cmnd: "; getline(cin >> ws, id);
	cout << "Nhap so dien thoai: "; getline(cin >> ws, phoneNumber);
	cout << "Nhap so luong sach: "; 
	do
	{
		cin >> numberOfBook;
		if (numberOfBook > 4)
		{
			cout << "Vui long khong muon qua 4 quyen sach!\n";
			cout << "Vui long nhap lai: ";
			cin >> numberOfBook;
		}
	} while (numberOfBook > 4); 
	book = new Book * [numberOfBook];
	int choice;
	for (int i = 0; i < numberOfBook; i++)
	{
		cout << "1. SGK. \t 2. Tieu thuyet. \t>>"; cin >> choice;
		switch (choice)
		{
		case 1:
			book[i] = new SGK;
			break;
		case 2:
			book[i] = new Novel;
		default:
			break;
		}
		book[i]->Input();
	}
}

void People::Display()
{
	cout << "Ten: " << name << endl;
	cout << "CMND: " << id << endl;
	cout << "So dien thoai: " << phoneNumber << endl;
	cout << "So luong sach: " << numberOfBook << endl;
	for (int i = 0; i < numberOfBook; i++)
	{
		book[i]->Display();
	}
}

bool People::IsOutOfDate(Date d)
{
	for (int i = 0; i < numberOfBook; i++)
	{
		if (book[i]->GetDate() - d > 30) return true;
	}
	return false;
}