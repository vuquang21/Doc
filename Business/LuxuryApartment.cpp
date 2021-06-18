#include"LuxuryApartment.h"
#include<iostream>
using namespace std;

LuxuryApartment::LuxuryApartment() {
    serviceCharge = 0;
    fee = 0;
}

LuxuryApartment::~LuxuryApartment() {};

void LuxuryApartment::Input() {
    Business::Input();
    cout << "Nhap phi dich vu: ";
    cin >> serviceCharge;
    fee = serviceCharge + monthlyPrice * 12;
}

void LuxuryApartment::Display() {
    Business::Display();
    cout << "Phi dich vu: " << serviceCharge << endl;
    cout << "Tong chi phi nam: " << fee << endl;
}

int LuxuryApartment::GetFlag() {
    return flag;
}