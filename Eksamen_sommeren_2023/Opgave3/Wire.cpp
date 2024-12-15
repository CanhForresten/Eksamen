#include"Wire.h"
#include<iostream>
#include<cmath>
using namespace std;

Wire::Wire(double areal, double length, double SPresistance)
{
    if (areal<0 || length<0 || SPresistance<0)
    {
        cout<< "fejl i koden" << endl;
    }
    else {
        this->SPresistance_ =SPresistance;
        this->areal_ = areal;
        this->lenght_ = length;
    }
    
}

double Wire::getModstand(){
    if (this->areal_<= 0 || this->lenght_ <=0 || this->SPresistance_<= 0)
    {
        return 0;
    } else {
            double modstand = (this->SPresistance_*this->lenght_)/this->areal_;
        return modstand;
    }
}

double Wire::gennemsnitligModstand(vector<Wire> v){

    if (v.empty())
    {
        return 0;
    }
    else {
    double sum = 0;

    for (size_t i = 0; i < v.size(); i++)
    {
        sum = sum + v[i].getModstand();
    }
    
    double GS = sum/static_cast<double>(v.size());
    return GS;

        }

}

