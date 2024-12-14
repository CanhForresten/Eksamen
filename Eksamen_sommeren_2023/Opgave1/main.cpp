#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    // task 1 a)

    double weight;
    double height;


    cout << "type your weight in kilograms" << endl;
    cin >> weight;
    cout <<"type your height in meters" << endl;
    cin >> height;
    cout << endl;

    double BMI = (weight/(pow(height,2)));
         
    // task 1 b)
    if (BMI<=18.5)
    {
        cout << "Ud fra din BMI på: "<<BMI << " er du kategoriseret som Undervægtig" << endl;
    } else if (BMI>18.5 && BMI<=25)
    {
        cout << "Ud fra din BMI på: "<<BMI << " er du kategoriseret som Normalvægtig" << endl;
    } else if (BMI>25 && BMI<=25)
    {
        cout << "Ud fra din BMI på: "<<BMI << " er du kategoriseret som overvægtig" << endl;
    } else if (BMI>30)
    {
        cout << "Ud fra din BMI på: "<<BMI << " er du kategoriseret som Svært overvægtig" << endl;
    } else {
        cout << "fejl, BMI kan ikke beregnes." << endl;
    }

    cout << "Your body mass index is: "<< BMI << endl;
    return 0;




}



