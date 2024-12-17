#pragma once

using namespace std;

class Isvaffel
{
private:
  int antalKugler_;
  int antalExtras_;
public:
    Isvaffel();
    Isvaffel(int antalKugler, int antalExtras);
    void print();
    double beregnPris();
    bool tilfoejKugle();
    bool tilfoejExtra();
    int getAntalKugler();
    int getAntalExtras();
};
