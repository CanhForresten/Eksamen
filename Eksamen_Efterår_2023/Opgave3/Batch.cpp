#include"Batch.h"
using namespace std;
#include<cmath>


Batch::Batch(long id)
{
    if (id>0)
    {
        this->id_=id;
    } else {
        id = 0;
    }
    
}

void Batch::addLed(long id, double forwardVoltage, double current)
{
    if (id<0 || forwardVoltage<0 || current <0)
    {
        cout<<"kan ikke oprettes" << endl;
    } else {
        this->Leds_.push_back(Led(id, forwardVoltage, current));
    }

}

double Batch::averageForwardVoltage()
{
    if (Leds_.empty())
    {
        return 0;
    }
    
    double sum = 0.0;
    for (size_t i = 0; i < Leds_.size(); i++)
    {
        sum = sum + Leds_[i].getForwardVoltage();
    }

    double average = sum / static_cast<double>(Leds_.size());
    return average;
}

double Batch::standardeviationForwardVoltage()
{
    double sum;
    double average = averageForwardVoltage();
    for (size_t i = 0; i < Leds_.size(); i++)
    {
        sum = sum + pow((Leds_[i].getForwardVoltage()-average),2);
    }
    return sqrt(sum);
}
