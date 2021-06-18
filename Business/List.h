#include"Business.h"
#include"Apartment.h"
#include"LuxuryApartment.h"

class List {
private:
    Business **p;
    int numberOfElment;
public:
    List();
    ~List();
    void Input();
    void Display();

};