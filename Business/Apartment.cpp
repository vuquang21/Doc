#include"Apartment.h"
#include<iostream>
using namespace std;

Apartment::Apartment() {
    this->cleaningFee = 0;
    this->fee = 0;
}

Apartment::~Apartment() {};

void Apartment::Input() {
    Business::Input();
    cout << "Nhap phi ve sinh: "; cin >> cleaningFee;
    fee = cleaningFee + monthlyPrice * 12;
}

void Apartment::Display() {
    Business::Display();
    cout << "Phi ve sinh: " << cleaningFee << endl;
    cout << "Tong chi phi nam: " << fee << endl;
}

int Apartment::GetFlag() {
    return flag;
}

