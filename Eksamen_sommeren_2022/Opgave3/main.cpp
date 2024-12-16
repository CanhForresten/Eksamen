using namespace std;
#include"Adresse.h"
#include"Kontakt.h"
#include<iostream>

int main()
{
    Adresse test1("Odshøjvej", 40, 8800);
    Adresse test2("Hyrdebakken", 216, 'a', 8800);

    test1.print();
    test2.print();
    cout << endl;

    Kontakt Canh("Canh", 60242434, "Spobjergvej", 42, 8220);
    Kontakt Sofie("Sofie", 12345678, "Vinkelvej", 13, 'D', 8800);

    Canh.print();

    Sofie.print();

    return 0;
}

