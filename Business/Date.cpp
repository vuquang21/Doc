#include"Date.h"
#include<iostream>
using namespace std;

Date::Date() {
    this->dd = this->mm = 1;
    this->yyyy = 1990;
}

Date::~Date() {};

void Date::Input() {
    cout << "Nhap ngay, thang, nam: ";
    cin >> this->dd >> this->mm >> this->yyyy;
}

void Date::Display() {
    cout << this->dd << "/" << this->mm << this->yyyy << endl;
}