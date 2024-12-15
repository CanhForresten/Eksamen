#pragma once

using namespace std;

//Opgave 3 a) & b)
class MineralSample
{
private:
// Vi definerer de private attributer med en double, da de indebærer decimaler
    double weight_;
    double volume_;
    int id_;

public:
    MineralSample(double weight, double voloume);
    MineralSample(double weight, double voloume, int id);
// datatyperne for metoderne defineres med en bool, da vi skal retunere om en værdi på falsk eller sandt
    bool is_gold();
    bool is_silver();
};

