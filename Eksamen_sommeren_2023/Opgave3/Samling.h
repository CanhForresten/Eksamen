#pragma once
#include<vector>
#include"Wire.h"


using namespace std;

class Samling
{
private:
    vector<Wire> wires;
public:
    void addWire(double specModstand, double length, double areal);
    double gennemsnitlig();
};
