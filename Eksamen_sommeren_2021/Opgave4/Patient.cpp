// Bilag Patient.cpp
/*
#include "Patient.h"
#include <iostream>
using namespace std;

void Patient::setNavn(std::string navn)
{
	navn_ = (navn != "") ? navn : "Ukendt";

}

std::string Patient::getNavn() const
{
	return navn_;
}

void Patient::setFoedselsDato(int d, int m, int a)
{
	fDag_ = 1;
	fMaaned_ = 1;
	fAar_ = 1970;

	if (a < 1900 || a > 2099)
		return;

	if (m < 1 || m > 12)
		return;

	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (d < 1 || d > 31)
			return;
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		if (d < 1 || d > 30)
			return;
		break;

	case 2:
		if (d < 1 || (a % 4 == 0 && d > 29) || (a % 4 != 0 && d > 28))
			return;
		break;

	default:
		return;
		break;
	}

	fDag_ = d;
	fMaaned_ = m;
	fAar_ = a;
}

int Patient::getFDag() const
{
	return fDag_;
}

int Patient::getFMaaned() const
{
	return fMaaned_;
}

int Patient::getFAar() const
{
	return fAar_;
}

double Patient::calculateBMI() const
{
	return vaegt_ / (hoejde_ * hoejde_);
}
*/
