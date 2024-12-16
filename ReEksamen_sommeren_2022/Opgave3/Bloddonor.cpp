#include"Bloddonor.h"
#include<iostream>
using namespace std;

Bloddonor::Bloddonor(string navn, double BMI, string blodtype, bool rhesus)
{
    //Alle værdierne bliver valideret vha. set metoderne - dvs. hvis en parameter ikke er gyldig, indsættes defaultværdien.
    setNavn(navn);
    setBMI(BMI);
    setBlodtype(blodtype);
    setRhesustype(rhesus);
}

void Bloddonor::print()
{
    if (this->rhesustype_ == true)
    {
    cout << this->navn_ << ", " << this->blodtype_ << "+, BMI: " << this->BMI_ << endl;
    } else {
    cout << this->navn_ << ", " << this->blodtype_ << "-, BMI: " << this->BMI_ << endl;
    } 

}

void Bloddonor::setNavn(string navn)
{
    if (navn.empty())
    {
        this->navn_ = "Ukendt";
    } else {
        this->navn_ = navn;
    }
}

void Bloddonor::setBMI(double BMI)
{
    if (10>BMI || BMI>50)
    {
        this->BMI_ = 22.5;
    } else {
        this->BMI_=BMI;
    }
}

void Bloddonor::setBlodtype(string blodtype)
{
    if (blodtype == "A" || blodtype == "B" || blodtype == "AB" || blodtype == "0" || blodtype == "Ukendt")
    {
        this->blodtype_ = blodtype;
    } else {
        this->blodtype_ = "Ukendt";
    } 
}

void Bloddonor::setRhesustype(bool rhresustype)
{
    this->rhesustype_ = rhresustype;
}

string Bloddonor::getNavn()
{
    return this->navn_;
}

double Bloddonor::getBMI()
{
    return this->BMI_;
}

string Bloddonor::getBlodtype()
{
    return this->blodtype_;
}

bool Bloddonor::getRhesustype()
{
    return this->rhesustype_;
}
