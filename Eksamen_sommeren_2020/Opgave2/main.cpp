using namespace std;
#include<iostream>
#include<string>



int main()
{
    string navn;
    int alder;

    cout << "indtast dit navn: " << endl;
        cin >> navn;

    cout << "indtast din alder: " << endl;
        cin >> alder;

    cout << "Du hedder " << navn << endl;

    cout << "Dit fornavn har " << navn.length() << " bogstaver" << endl;

    cout << "Din alder er " << alder << endl; 
    return 0;
}
