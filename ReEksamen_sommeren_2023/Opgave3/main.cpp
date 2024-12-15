#include"MineralSample.h"
#include"Samples.h"
using namespace std;
#include<iostream>



int main()
{
    //MineralSample test1(-3,5);
    //MineralSample test2(5,0);
    //MineralSample test3(-3,0);
    //cout << test1.is_gold();

    Samples s;
    cout << s.relative_number_of_gold_samples() << endl;
    s.add_sample(1, 0.33, 1);
    s.add_sample(2,0.2,1);

    cout << s.relative_number_of_gold_samples() << endl;

    return 0;
}
