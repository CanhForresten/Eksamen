#include"Wire.h"
#include"Samling.h"
using namespace std;
#include<cmath>
#include<iostream>

int main()
{

    //Wire test1 (-2,3,5);
    //Wire test2 (0,5,6);
    Wire test3 (-3,0,5);
    Wire guld (12*pow(10,(-6)), 1, 0.0244*pow(10,-6));
    Wire rustfri(12*pow(10,(-6)), 1, 0.72*pow(10,-6));
    
    //cout << test1.getModstand() << endl;
    //cout << test2.getModstand() << endl;
    //cout << test3.getModstand() << endl;
    //cout << guld.getModstand() << endl;


    Samling wires1;

    wires1.addWire(12*pow(10,(-6)), 1, 0.0244*pow(10,-6));
    wires1.addWire(12*pow(10,(-6)), 1, 0.72*pow(10,-6));

    cout << "gennemsnittet er: " <<wires1.gennemsnitlig();



    return 0;
}
