#include"People.h"
#include"List.h"
#include<iostream>
#include"Date.h"
using namespace std;

int main()
{
	List arr;
	arr.Input();
	arr.Display();
	Date d;
	cout << "Nhap ngay hien tai: "; cin >> d;
	arr.Out(d);
	return 0;
}