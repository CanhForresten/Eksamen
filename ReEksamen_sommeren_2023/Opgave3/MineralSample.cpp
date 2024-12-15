#include"MineralSample.h"
#include<iostream>
#include<cmath>
using namespace std;

MineralSample::MineralSample(double weight, double voloume)
{
    if (weight<0 || voloume <=0)
    {
        cout << "Fejl" << endl;
        this->weight_=0;
        this->volume_=1;
    } else {
        this->weight_= weight;
        this->volume_= voloume;
    }
}

MineralSample::MineralSample(double weight2, double volume2, int id){
    MineralSample(weight2, volume2);
    if (id<0)
    {
        this->id_= 0;
    } else {
        this->id_ = id;
    }
}

bool MineralSample::is_gold()
{
    double densitet = this->weight_/this->volume_;
    if (abs(densitet-19.3)<5*pow(10,-2))
    {
        return true;
    } else {
        return false;
    }
}

bool MineralSample::is_silver()
{
    double densitet = this->weight_/this->volume_;
    if (abs(densitet-10.5)<5*pow(10,-2))
    {
        return true;
    } else {
        return false;
    }
}
