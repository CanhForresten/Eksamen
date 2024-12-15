using namespace std;
#include<iostream>

void mid_value(const double* left, const double* right, double* middle){
    *middle = (*right + *left)/2;
} 


void min_max_value(double left, double right, double* min, double* max) {

     if (left<right)
     {
        *max = right;
        *min = left;

    
     } else {
        *max = left; 
        *min = right;
    }
}
   
   
int main()
{
    double left;
    double right;
    double min;
    double max;
    double middle;



    cout << "Skriv et nummer" << endl;
    cin >> left;
    cout << "Skriv et andet nummer" << endl;
    cin >> right;
    cout << endl;

    min_max_value(left, right, &min, &max);
    mid_value(&left, &right, &middle);
    cout << "Den største er " << max << " og den mindste er " << min << " og tallet midt i mellem er " << middle << endl;
    
    return 0;
}
