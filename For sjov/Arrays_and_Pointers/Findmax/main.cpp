// Lav en funktion, der finder den største værdi af alle værdier i et array.

#include<iostream>
using namespace std;
#include<string>

void findMax(double* measurements_p, size_t size, double *result){
if (size == 0)
{
    *result = 0; 
} else {

    double Maxværdi = measurements_p[0];

    for (size_t i = 0; i < size; i++)
    {
        if (measurements_p[i]>Maxværdi)
        {
            Maxværdi = measurements_p[i];
        }
    }
    
    *result = Maxværdi;
}


}


int main(int argc, char const *argv[])
{
    double measurements [] = {9,90,3131.3,4,5,8,199,9491,4144145,131313123,};
    size_t size = 10;
    double result;

    findMax(measurements, size, &result);

    cout << "The Max value is " << result << endl;
    return 0;
}
