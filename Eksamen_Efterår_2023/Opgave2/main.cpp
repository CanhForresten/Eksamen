using namespace std;
#include<iostream>

void findMax(int* p_array, size_t size, int* result){
    if (size == 0)
    {
        cout << "Fejl, må ikke være tomt" << endl;
    } else {
        int max = p_array[0];

        for (size_t i = 0; i < size; i++)
        {
            if (max<p_array[i])
            {
                max = p_array[i];
            }
        }
            *result = max;
    }
}

int main()
{
    int p_array [] = {3,3,4,5};
    size_t size = 4;
    int result;
    findMax(p_array, size, &result);

    cout << "Maxværdien er " << result << endl;
    return 0;
}
