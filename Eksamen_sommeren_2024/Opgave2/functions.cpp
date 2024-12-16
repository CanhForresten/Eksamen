#include "functions.h"

//Opgave 2 b):

void average(double *measurements_p, size_t size, double *result)
{
    if (size == 0)
    {
       *result = 0;
    } else {
            double sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum+= measurements_p[i];
    }

    *result = sum / size;
    } 

}
