using namespace std;
#include<iostream>
#include"functions.h"

int main()
{
	//Opgave 2 c-1)
	double measurements [] = {3.9,4.8,2.9,9.3,5.3,6.2};
	size_t size = 6;
	double min;
	double max;
	minmax(measurements, size, &min, &max);

	//Opgave 2 c-2)
	cout << "Min værdi er " << min << endl;
	//Opgave 2 c-3)
	cout << "Max værdi er " << max << endl;

	return 0;
}
