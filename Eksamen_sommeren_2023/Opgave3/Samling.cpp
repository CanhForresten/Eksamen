#include"Samling.h"
#include"Wire.h"
#include<iostream>

using namespace std;

void Samling::addWire(double specModstand, double length, double areal)
{
    if (areal<0 || length<0 || specModstand<0)
    {
        cout<< "Kan ikke oprettes" << endl;

    } else {
        this->wires.push_back(Wire(areal,length,specModstand));
    }
 
}

double Samling::gennemsnitlig(){

    double sum;
    for (size_t i = 0; i < wires.size(); i++)
    {
        sum = sum + wires[i].getModstand();
    }
    double GS = sum/static_cast<double>(wires.size());
    return GS;
}