#include<iostream>
#include<string>
using namespace std; 

int main()
{
    int HFar;
    int HMor;
    string køn;



    for(;;) {
    cout << "Indtast faderens hoejde i cm" << endl;
    cin >> HFar;
    cout <<"Indtast moderens hoejde i cm" << endl;
    cin >> HMor;
    cout << "Hvilket koen er barnet? (D for dreng, P for pige)" << endl;
    cin >> køn;

    if (køn == "P")
    {
        double PH = (((12*HFar)+(13*HMor))/26);
        cout << "Dit barns forventede hoejde bliver ca.: " << PH << endl;
        cout << endl;
    } else if (køn == "D")
    {
        double PH = (((12*HFar)+(13*HMor))/24);
        cout << "Dit barns forventede hoejde bliver ca.: " << PH << endl;
        cout << endl;
    }
    }

    
    
    return 0;
}
