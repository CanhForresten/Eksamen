#include "quadratic_equation.h"
#include<cmath>

//Opgave 1 b):

double diskriminant( double A, double B, double C){
    double d;
    return d = (B*B)-4*A*C;
}



//Opgave 1 d):
string roots(double A, double B, double C){

    double D = diskriminant(A, B, C);

    if (D == 0)
    {
        return to_string((-B/2*A));
    }

    else if (D > 0)
    {
        return to_string(((-B+sqrt(D))/2*A)) + "," + to_string(((-B-sqrt(D))/2*A));
    }

    else {

        return to_string((-B)/2*A)+ "+i" + to_string((sqrt(fabs(D))/2*A)) + " " + to_string((-B)/2*A) + "-i" + to_string((sqrt(fabs(D))/2*A));
    }
 }
