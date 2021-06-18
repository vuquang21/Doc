#include"Business.h"
#include<iostream>
#include<stdint.h>
using namespace std;

Business::Business() {
    this->address = "";
    this->monthlyPrice = 0;
}

Business::~Business() {};

void Business::Input() {
    cout << "Nhap dia chi chung cu: ";
    getline(cin >> ws, address);
    cout << "Nhap ngay bat dau thue: ";
    date.Input();
    cout << "\nNhap gia thu moi thang: ";
    cin >> monthlyPrice;
}

void Business::Display() {
    cout << "Dia chi: " << address << endl;
    cout << "Nhay bat dau thue: " ; date.Display(); 
    cout << endl;
    cout << "Gia moi thang: " << monthlyPrice << endl;
}

