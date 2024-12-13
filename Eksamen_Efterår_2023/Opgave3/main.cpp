#include"Batch.h"
#include"Led.h"
using namespace std;
#include<iostream>

int main()
{
    Led lampe (31, 20, 20);
    cout << lampe.toString() << endl;
    cout << endl;

    Batch lygte (3);
    lygte.addLed(3, 20, 30);
    lygte.addLed(4,5,10);
    lygte.addLed(2,3,9);

    cout << lygte.averageForwardVoltage() << endl;
    cout << endl;

    cout << lygte.standardeviationForwardVoltage() << endl;
    return 0;
}
