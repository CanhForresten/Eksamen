#pragma once
using namespace std;
#include<string>

class Adresse
{
private:
    string gadenavn_;
    int husnummer_;
    char bogstav_;
    int postnummer_;
public:
    Adresse(string gadenavn, int husnummer, char bogstav, int postnummer);
    Adresse(string gadenavn, int husnummer, int postnummer);
    void print();
    void SetGadenavn (string gadenavn);
    void setHusnummer(int husnummer);
    void setBogstav(char bogstav);
    void setPostnummer(int postnummer);
    string getGadenavn();
    int getHusnummer();
    char getBogstav();
    int getPostnummer();
};
