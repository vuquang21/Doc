#pragma once 
#include"Business.h"

class LuxuryApartment : public Business{
private:
    double serviceCharge;
    double fee;
public: 
    int flag = 1;
    LuxuryApartment();
    ~LuxuryApartment();
    void Input();
    void Display();
    int GetFlag();
    
};