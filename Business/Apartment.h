#pragma once 
#include"Business.h"

class Apartment : public Business {
private:
    double cleaningFee;
    double fee;
public: 
    int flag = 2;
    Apartment();
    ~Apartment();
    void Input();
    void Display();
    int GetFlag();
};