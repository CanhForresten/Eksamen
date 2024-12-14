#pragma once

using namespace std;

class Wire
{
private:
    double lenght_;
    double areal_;
    double SPresistance_; 
public:
    Wire(double areal, double length, double SPresistance);
    double getModstand();
};


