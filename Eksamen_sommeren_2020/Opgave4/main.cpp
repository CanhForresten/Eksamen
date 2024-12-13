#include"Dato.h"
#include"Opgave.h"
#include<iostream>

using namespace std;

int main()
{
    Opgave Aflevering("Matematik", 5, 20, 12, 2024);
    cout << "Matematikaflevering" << endl;
    Aflevering.print();
    return 0;
}

