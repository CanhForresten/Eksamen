#include"Statistik.h"
#include<cmath>
using namespace std;


double varians(double *p_array, int array_size, double gennemsnit)
{
    double sum = 0;
    for (int i = 0; i < array_size; i++)
    {
        sum = sum + pow(((p_array[i]-gennemsnit)),2);
    }
    
        
    double varians = sum/array_size;

    return varians;
}
