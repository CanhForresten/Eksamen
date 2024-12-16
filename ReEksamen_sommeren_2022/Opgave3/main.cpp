#include"Bloddonor.h"
#include<iostream>

using namespace std;

int main()
{
    Bloddonor Register[3] = {Bloddonor("Valdemar kibsgaard", 20.3, "A", false), Bloddonor("Mostafa Mamo", 20.3, "A", false), Bloddonor("Huu Canh Nguyen", 20.3, "B", true)};

    cout << "Printer alt i Register" << endl;

    for (auto i: Register)
    {
        i.print();
    
    }
    cout << endl;
    cout << "Disse er rigtige bloddonor:" << endl;
    for (int i = 0; i < 3; i++)
    {
        if (Register[i].getBlodtype() == "A" && Register[i].getBMI()>18.5 || Register[i].getBMI()<35 && Register[i].getRhesustype() == false)
        {
            Register[i].print();
        }
        
    }
    
    
    
    

    return 0;
}
