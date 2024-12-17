#include "IsbodsOrdre.h"
#include <iostream>
using namespace std;

IsbodsOrdre::IsbodsOrdre()
{
	antalVafler_ = 0;
}

void IsbodsOrdre::indsaetIsvaffel(Isvaffel v)
{
	if (antalVafler_ < 4)
	{
		vafler_[antalVafler_] = v;
		antalVafler_++;
	}
}

void IsbodsOrdre::print()
{
	cout << "Ordre på " << this->antalVafler_ << " vafler" << endl;
	for (int i = 0; i < antalVafler_; i++)
	{
		vafler_[i].print();
	}
	cout << "Pris ialt: " << beregnPris() << " kr." << endl;
	
}

double IsbodsOrdre::beregnPris() {
	double pris = 0;
	for (int i = 0; i < this->antalVafler_; i++)
	{
		pris += this->vafler_[i].beregnPris();
	}
	return pris;
	}

