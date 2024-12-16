#include<iostream>
using namespace std;

int potens(int HelTal, int potens){
    if (potens == 0)
    {
        return 1;
    } else if (HelTal<0 || potens <0)
    {
        return -1;
    } else {
        int sum = 1;
        for (int i = 0; i < potens; i++)
        {
            sum = sum*HelTal;
        }
        return sum;
    }
}

void erstatMedPotens(int& HelTal, int potens1) {
    HelTal=potens(HelTal, potens1);
}



int main()
{
    int a = 3;
    int b = 3;

    int c = potens(b,a);

    cout << potens(b,a) << endl;
    
    erstatMedPotens(c,a);

    cout << "Efter: " << c << endl;


    return 0;
}
