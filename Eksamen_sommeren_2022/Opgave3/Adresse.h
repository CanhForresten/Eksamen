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
    void print();
    void SetGadenavn (string gadenavn);
    void setHusnummer(int husnummer);
    void setBogstav(char bogstav);
    void setPostnummer(int postnummer);
    

};
