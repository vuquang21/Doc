#pragma once
#include<string>
#include"Date.h"
using namespace std;

class Business {
protected:
    string address;
    double monthlyPrice;
    Date date;
public:
    int flag = 0;
    Business();
    ~Business();
    void Input();
    void Display();
    virtual int GetFlag() = 0;
};