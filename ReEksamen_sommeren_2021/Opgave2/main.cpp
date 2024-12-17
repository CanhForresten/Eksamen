#include<iostream>
using namespace std;

#include"Statistik.h"

int main()
{
    int size = 8;
    double array[8] = {1,2,3,4,5,6,7,8};
    double gennemsnit = 4.5;

    cout << varians(array, size, gennemsnit) << endl;
    return 0;
}
