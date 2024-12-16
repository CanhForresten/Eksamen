#include<iostream>


using namespace std;

int main()
{
    double afstand = -1;
    cout << "Skriv din afstand" << endl;
    while (afstand<0)
    {
        cin >> afstand;
        if (afstand<0)
        {
            cout << "ugyldig afstand" << endl;
        }
    }
    if (afstand >= 0 && afstand <= 12)
    {
        cout << "0 kr, intet fradrag" << endl;
    } else if (afstand >= 12 && afstand <= 60)
    {
        afstand = (afstand*2)-24;
        double fradrag = afstand*2.16;
        cout << "Dit fradrag er " << fradrag;
    } else {
        afstand = (afstand*2)-120;
        double fradrag = 207.36+(afstand*1.08);
        cout << "Dit fradrag er " << fradrag;
    }
    

    return 0;
}
