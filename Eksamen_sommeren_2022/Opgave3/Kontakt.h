#pragma once
#include"Adresse.h"
#include<string>
#include<vector>

using namespace std;

class Kontakt
{
private:
    string navn_;
    int telefonnummer_;
    Adresse adresse_;

public:
    Kontakt(string navn, int telefonnummer, string gadenavn, int husnummer, char bogstav, int postnummer);
    Kontakt(string navn, int telefonnummer, string gadenavn, int husnummer, int postnummer);
    void print();
    void setNavn(string navn);
    void setTelefonnummer(int telefonnummer);
    void setAdresse(Adresse adresse);
    string getNavn();
    int getTelefonnummer();
    Adresse getAdresse();
};



