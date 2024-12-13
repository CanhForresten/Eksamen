#include "functions.h"
using namespace std;

//Opgave 2 b)

void minmax(double *measurement_p, size_t size, double *min, double *max)
{
    if (size == 0)
    {
        *min = 0;
        *max = 0;
    } else {
        double Maximale = measurement_p[0];
        double Mininmale = measurement_p[0];
        for (size_t i = 0; i < size; i++)
        {
            if (measurement_p[i]> Maximale)
            {
                Maximale = measurement_p[i];
                *max = Maximale;
            }
            if (measurement_p[i]<Mininmale)
            {
                Mininmale = measurement_p[i];
                *min = Mininmale;
            }
        }
    }
}