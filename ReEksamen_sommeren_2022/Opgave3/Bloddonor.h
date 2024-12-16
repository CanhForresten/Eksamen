#pragma once
using namespace std;
#include<string>


class Bloddonor
{
private:
    string navn_;
    double BMI_;
    string blodtype_;
    bool rhesustype_;
public:
    Bloddonor(string navn, double BMI, string blodtype, bool rhesus);
    void print();
    void setNavn(string navn);
    void setBMI(double BMI);
    void setBlodtype(string blodtype);
    void setRhesustype(bool rhresustype_);
    string getNavn();
    double getBMI();
    string getBlodtype();
    bool getRhesustype();
};



