using namespace std;
#include<iostream>
#include<cmath>

int main(int argc, char const *argv[])
{
    for (size_t i = 0; i < 99; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " "<< sqrt(i) << endl;;
        }
    }
     return 0;
}
