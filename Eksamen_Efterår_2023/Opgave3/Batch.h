#pragma once
using namespace std;
#include<vector>
#include"Led.h"

class Batch
{
private:
    long id_;
    vector<Led>Leds_;

public:
    Batch(long id);
    void addLed(long id, double forwardVoltage, double current);
    double averageForwardVoltage();
    double standardeviationForwardVoltage();
};
