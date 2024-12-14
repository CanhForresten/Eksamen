#include"Wire.h"
using namespace std;
#include<cmath>
#include<iostream>

int main()
{
    Wire test1 (12*pow(10,(-6)), 1, 0.0244*pow(10,-6));

    cout << test1.getModstand();
    return 0;
}
