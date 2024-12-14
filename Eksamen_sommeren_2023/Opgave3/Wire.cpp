#include"Wire.h"
#include<iostream>
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

