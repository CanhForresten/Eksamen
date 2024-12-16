#include"Kortfunktioner.h"
#include<experimental/random>
#include<iostream>

int TraekKort(){

    int random_number = experimental::randint(1,13);

    return random_number;
}

void PrintKort(int kort [], int size)
{
    for (int i = 0; i < size; i++)
    {
        kort[i] = TraekKort();
    }
    
    for (int i = 0; i < size; i++)
    {
        if (kort[i]>13 || kort[i]<1)
        {
            cout <<  "ugyldigt kort: " << kort[i] << endl;
        } else {
            switch (kort[i])
            {
            case 1:
                cout << "Du har kortet: Es" << endl;
                break;
            case 2:
                cout << "Du har kortet: 2" << endl;
                break;
            case 3:
                cout << "Du har kortet: 3" << endl;
                break;
            case 4:
                cout << "Du har kortet: 4" << endl;
                break;
            case 5:
                cout << "Du har kortet: 5" << endl;
                break;
            case 6:
                cout << "Du har kortet: 6" << endl;
                break;
            case 7:
                cout << "Du har kortet: 7" << endl;
                break;
            case 8:
                cout << "Du har kortet: 8" << endl;
                break;
            case 9:
                cout << "Du har kortet: 9" << endl;
                break;
            case 10:
                cout << "Du har kortet: 10" << endl;
                break;
            case 11:
                cout << "Du har kortet: Knaegt" << endl;
                break;
            case 12:
                cout << "Du har kortet: Dame" << endl;
                break;
            case 13:
                cout << "Du har kortet: Konge" << endl;
                break;
            default:
                cout << "Du har kortet: " <<kort[i] << endl;
            }
        }
        
    }
    
}
