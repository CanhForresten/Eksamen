#include"Led.h"
#include<string>

using namespace std;

Led::Led(long id, double forwardVoltage, double current)
{
    if (id<0 || forwardVoltage<0 || current<0)
    {
        cout <<"fejl i koden";
    } else {
        this->id_ = id;
        this->forwardVoltage_ = forwardVoltage;
        this->current_ = current;
    }
    
}

string Led::getId()
{
    return string();
}

double Led::getForwardVoltage()
{
    return this->forwardVoltage_;
}

double Led::getCurrent()
{
    return this->current_;
}

string Led::toString()
{
    return "Id nr er: " + to_string(this->id_) + " spændingsfaldet er: " + to_string(this->forwardVoltage_) + " strømmen er: " + to_string(this->current_);
}
