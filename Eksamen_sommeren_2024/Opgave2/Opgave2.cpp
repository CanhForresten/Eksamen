#include "functions.h"
#include<iostream>
using namespace std;

int main()
{
	//Opgave 2 c-1)
	double measurements [] = {3.9,4.8,2.9,9.3,5.3,6.2};
	size_t size = 6;
	double result;

	average(measurements, size, &result);

	cout << "gennemsnittet er " << result << endl;


	//Opgave 2 c-2)
	double measurements2 [] = {0};
	size_t size2 = 0;
	double result1;

	average(measurements2, size2, &result1);
	
	cout << "gennemsnittet er " << result1 << endl;
}