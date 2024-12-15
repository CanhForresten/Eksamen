#include<iostream>
#include<string>
using namespace std;

int main()
{
    string køn;
    double height;
    double weight;
    int age;
    cout<< "indtast venligst dit køn, m hvis du er en mand eller f hvis du er en kvinde" << endl;
    cin >> køn;
    cout<< "indtast venligst din højde i centimeter" << endl;
    cin >> height; 
    cout<< "indtast venligst din alder i år" << endl;
    cin >> age;
    cout<< "indtast venligst din vægt i kilogram" << endl;
    cin >> weight;

    double BMR;
    if (køn == "m")
    {
        BMR = 88.362+(13.397*weight)+(4.799*height)-(5.677*age);
        cout << "Din BMR er " << BMR << endl;

    } else if ( køn == "f")
    {
        BMR = 447.593+(9.247*weight)+(3.098*height)-(4.330*age);
        cout <<" Din BMR er " << BMR << endl;
    } else {
        return 0;
    }
    



    return 0;
}
