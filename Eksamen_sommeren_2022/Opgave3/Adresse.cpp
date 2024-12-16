#include"Adresse.h"
#include<iostream>

using namespace std;

Adresse::Adresse(string gadenavn, int husnummer, char bogstav, int postnummer)
{
    SetGadenavn(gadenavn);
    setHusnummer(husnummer);
    setBogstav(bogstav);
    setPostnummer(postnummer);
}



Adresse::Adresse(string gadenavn, int husnummer, int postnummer)
{
    SetGadenavn(gadenavn);
    setHusnummer(husnummer);
    setPostnummer(postnummer);
    this->bogstav_ = ' ';
} 

void Adresse::print() {
    if (this->bogstav_ != ' ')
    {
        cout << this->gadenavn_ << " "<< this->husnummer_<< this->bogstav_ << ", " << this->postnummer_<< endl;
    } else {
        cout << this->gadenavn_ <<" "<< this->husnummer_<<", " << this->postnummer_<< endl;
    }
}



void Adresse::SetGadenavn(string gadenavn)
{
    if (gadenavn.empty())
    {
        this->gadenavn_="";
    } else {
        this->gadenavn_ = gadenavn;
    }
}

void Adresse::setHusnummer(int husnummer)
{
    if (husnummer <= 0)
    {
        this->husnummer_ = 1;
    }
    else {
        this->husnummer_ = husnummer;
    }
}

void Adresse::setBogstav(char bogstav)
{
    if (bogstav >= 'A' && bogstav <= 'Z')
    {
        this->bogstav_ = bogstav;

    } else {
        this->bogstav_ = ' ';
    }
    
}

void Adresse::setPostnummer(int postnummer)
{
    if (postnummer <= 0)
    {
        this->postnummer_ = 0;
    } else {
        this->postnummer_ = postnummer;
    }
    
}

string Adresse::getGadenavn()
{
    return this->gadenavn_;
}

int Adresse::getHusnummer()
{
    return this->husnummer_;
}

char Adresse::getBogstav()
{
    return this->bogstav_;
}

int Adresse::getPostnummer()
{
    return this->postnummer_;
}
