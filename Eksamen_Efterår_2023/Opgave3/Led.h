#pragma once
using namespace std;
#include<iostream>
#include<string>


class Led
{
private:
    long id_;
    double forwardVoltage_;
    double current_;
public:
    Led(long id, double forwardVoltage, double current);
    string getId();
    double getForwardVoltage();
    double getCurrent();
    string toString();
};
