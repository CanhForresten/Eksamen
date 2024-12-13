#include"Capitance.h"

using namespace std;

double capacitance(double epsilon, double area, double distance)
{
    return epsilon*(area/distance);
}
