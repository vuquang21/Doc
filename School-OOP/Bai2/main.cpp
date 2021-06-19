#include"List.h"
#include<iostream>
using namespace std;

int main()
{
	List p;
	p.Input();
	cout << "So sv du dieu kien tot nghiep: ";
	cout << p.SoSVTN() << endl;
	cout << "Sinh vien co diem trung binh cao nhat: \n";
	p.MaxDiemTB();
	return 0;
}