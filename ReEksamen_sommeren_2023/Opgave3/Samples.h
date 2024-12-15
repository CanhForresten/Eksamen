#pragma once
#include"MineralSample.h"
#include<vector>

using namespace std;

class Samples
{
private:
    vector<MineralSample>samples;

public:
    void add_sample(int id, double weight, double volume);
    double relative_number_of_gold_samples();
};


