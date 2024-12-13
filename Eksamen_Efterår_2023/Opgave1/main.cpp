#include<iostream>
#include"Capitance.h"
#include<string>
using namespace std;
#include<cmath>

int main()
{
    //"Dette program beregner kapacitans mellem to parallelle plader med et givet materiale
    //Indtast materiale, areal (i enheden kvadratmeter) og afstand (i enheden meter). Materialet
    // kan være: vakuum, polyethelene, mica eller keramik:

    double afstand;
    double areal;
    string materiale;

    cin >> afstand;
    cin >> areal;
    cin >> materiale;

    if (afstand > 0 && areal > 0)
    {
        double epsilon;
        if (materiale == "vakumm" || "Vakumm")
        {
            epsilon = 8.85*pow(10,(-12));

        } else if (materiale == "Polyethelene" || "Polyethelene")
        {
            epsilon = 2.25;
        } else if (materiale == "Mica" || "mica")
        {
            epsilon = 7.00;
        } else if (materiale == "Keramik" || "keramik")
        {
            epsilon = 9.00;
        }
            cout <<"Kapitansen er " << capacitance(epsilon, areal, afstand) << " F" << endl;

    }         else {
                cout << "fejl i koden" << endl;
            }
    return 0;
}



