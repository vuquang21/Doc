#include <iostream>
#include "List.h"
#include "Hero.h"

using namespace std;

int main()
{
	Hero hero;
	hero.Input();
	cout << endl;
	List obj;
	obj.Input();
	cout << endl;
	obj.PassGate(hero);
	return 0;
}