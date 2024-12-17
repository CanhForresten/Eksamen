#include"Isvaffel.h"
using namespace std;
#include<iostream>

Isvaffel::Isvaffel()
{
    this->antalKugler_ = 0;
    this->antalExtras_ = 0;
}

Isvaffel::Isvaffel(int antalKugler, int antalExtras)
{
    if (antalKugler>1 && antalKugler <=5)
    {
        this->antalKugler_=antalKugler;
    } else {
        this->antalKugler_ = 1;
    }
    
    if (antalExtras>0 && antalExtras <=5)
    {
        this->antalExtras_ = antalExtras;
    } else {
        this->antalExtras_ = 0;
    }
}

void Isvaffel::print()
{
    if (this->antalKugler_ == 1)
    {
        cout << "Isvaffel med " << this->antalKugler_ << " kugle" << " og " << this->antalExtras_ << " ekstra ting, pris: " << this->beregnPris() << " kr." << endl;
    } else {
        cout << "Isvaffel med " << this->antalKugler_ << " kugler" << " og " << this->antalExtras_ << " ekstra ting, pris: " << this->beregnPris() << " kr." << endl;
            }
}

double Isvaffel::beregnPris()
{
    double pris = (this->antalKugler_*10)+(this->antalExtras_*5)+10;

    return pris;
}

bool Isvaffel::tilfoejKugle()
{
    if (antalKugler_>=5 || antalKugler_<1)
    {
        return false;
    } else {
        this->antalKugler_++;
        return true;
    }
}

bool Isvaffel::tilfoejExtra()
{
    if (antalExtras_> 5 || antalExtras_<0)
    {
        return false;
    } else {
        this->antalExtras_++;
        return true;
    }
}

int Isvaffel::getAntalKugler()
{
    return this->antalKugler_;
}

int Isvaffel::getAntalExtras()
{
    return this->antalExtras_;
}
