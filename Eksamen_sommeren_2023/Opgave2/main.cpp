#include<iostream>
using namespace std;

void addSecondToFirst(int* f, int* s){
    *f = *s + *f;
}


int main()
{
    int a;
    int b;

    cout << "skriv venligst et hel tal" << endl;
    cin >> a;
    cout << "skriv venligst et hel tal" << endl;
    cin >> b;
    int c = a; 
    addSecondToFirst(&a, &b);
    cout << "The first input was " << c << " and the second was " << b << " but the sum of them is " << a << endl;
    return 0;
}

