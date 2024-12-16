// Lav en funktion, der beregner produktet af alle værdier i et array.
#include<iostream>
using namespace std;

void product(double* arr, size_t size, double* result) {

    if (size == 0)
    {
        *result = 1;
    } else {
        
        double product = arr[0];
        for (size_t i = 1; i < size; i++)
        {
            product = product * arr[i];
        }

        *result = product;
    }
}

int main()
{
    double arr [] = {3,2,3,4};
    size_t size = 4;
    double result;

    product(arr, size, &result);

    cout << "The product of all the values is " << result << endl;
    
    return 0;
}
