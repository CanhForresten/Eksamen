#include"Kontakt.h"
#include<iostream>
using namespace std;

Kontakt::Kontakt(string navn, int telefonnummer, string gadenavn, int husnummer, char bogstav, int postnummer)
:adresse_(gadenavn, husnummer, bogstav, postnummer){
    setNavn(navn);
    setTelefonnummer(telefonnummer);
}

Kontakt::Kontakt(string navn, int telefonnummer, string gadenavn, int husnummer, int postnummer)
:adresse_(gadenavn, husnummer, postnummer){
    setNavn(navn);
    setTelefonnummer(telefonnummer);
}

void Kontakt::print()
{
    cout << "Kontakt: " << this->navn_ << endl;
    cout << "Telefonnummer: " << this->telefonnummer_ << endl;
    cout << "Adresse:" << endl;
    this->adresse_.print();
    cout << endl;
}

void Kontakt::setNavn(string navn)
{
    if (navn.empty())
    {
        this->navn_ = "NN";
    } else {
        this->navn_ = navn;
    }
}

void Kontakt::setTelefonnummer(int telefonnummer)
{
    if (telefonnummer>10000000 && telefonnummer<99999999)
    {
        this->telefonnummer_ = telefonnummer;
    } else {
        this->telefonnummer_ = 0;
    }   
}

void Kontakt::setAdresse(Adresse adresse)
{
    this->adresse_ = adresse;
}

string Kontakt::getNavn()
{
    return this->navn_;
}

int Kontakt::getTelefonnummer()
{
    return this->telefonnummer_;
}

Adresse Kontakt::getAdresse()
{
    return this->adresse_;
}
