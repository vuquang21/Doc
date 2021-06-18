#include"List.h"
#include"Apartment.h"
#include"LuxuryApartment.h"
#include<iostream>
using namespace std;

class Business;
class Apartment;
class LuxuryApartment;
List::List() {
    numberOfElment = 0;
    p = NULL;
}
List::~List() {};

void List::Input() {
    cout << "Nhap so luong phan tu: "; cin >> numberOfElment;
    p = new Business*[numberOfElment];
    int choice;
    for (int i = 0; i < numberOfElment; i++) {
        cout << "1. Chung cu. \t 2. Nha thuong. \t >> "; cin >> choice;
        switch (choice) {
        case 1: 
            p[i] = new LuxuryApartment;
            break;
        case 2: 
            p[i] = new Apartment;
            break;
        default:
            break;
        }
        p[i]->Input();
    }
}

void List::Display() {
    for (int i = 0; i < numberOfElment; i++) {
        switch (p[i]->GetFlag())
        {
        case 1:
            p[i]->Display();
            break;
        case 2: 
            p[i]->Display();
        default:
            break;
        }
    }
}