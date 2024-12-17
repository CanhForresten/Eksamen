#include"Isvaffel.h"
#include"IsbodsOrdre.h"
#include<iostream>

using namespace std;

int main()
{
    Isvaffel test1(1, 3);
    Isvaffel test2(2,3);
    test1.tilfoejKugle();

    IsbodsOrdre test3 = IsbodsOrdre();
    test3.indsaetIsvaffel(test1);
    test3.indsaetIsvaffel(test2);

    test3.print();


    return 0;
    
}
