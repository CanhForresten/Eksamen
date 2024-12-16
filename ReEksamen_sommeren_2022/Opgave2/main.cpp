using namespace std;

#include<iostream>

int main()
{
    int maaned;
    int ferieAfholdt;



    cout << "Hvor mange hele maaneder har du arbejdet siden sidste 1. september?" << endl;
    cin >> maaned;
    cout << "Hvor mange dages ferie har du afholdt i den periode?" << endl;
    cin >>ferieAfholdt;
    double ferie = maaned*2.08;

    if (ferieAfholdt>0)
    {
        ferie = ferie - ferieAfholdt;
        
        int sum = 0;
        double sum1;
        while (ferie>=1)
        {
            ferie = ferie-1;
            sum1 = ferie-1;
            sum = sum + 1;
        }
        if (sum1<0)
        {
            sum1= sum1+1;
        }
        cout << "Du har " << sum << " dages ferie " << "og har " << sum1 << " dage til senere" << endl;
    } else {
        int sum = 0;
        double sum1;
        while (ferie>=1)
        {
            ferie = ferie-1;
            sum1 = ferie-1;
            sum = sum + 1;
        }
        if (sum1<0)
        {
            sum1= sum1+1;
        }
        cout << "Du har " << sum << " dages ferie " << "og har " << sum1 << " dage til senere" << endl;
    }
    return 0;
}
