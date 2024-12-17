#include"Coulomb.h"
#include<cmath>

double CoulombKraften(double q1, double q2, double afstand)
{

    const double k = 8.98877*pow(10,9);
    if (afstand == 0)
    {
        return 0.0;
    } else {
        double F = (k*q1*q2)/(afstand*afstand);
            return F;
    }


}
