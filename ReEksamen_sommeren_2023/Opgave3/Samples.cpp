#include"Samples.h"
using namespace std;

void Samples::add_sample(int id, double weight, double volume)
{
    this->samples.push_back(MineralSample(weight, volume, id));
}

double Samples::relative_number_of_gold_samples()
{
    double sum = 0;
    if (samples.size() == 0)
    {
        return 0;
    } else {
        for (size_t i = 0; i < samples.size(); i++)
        {
            if (samples[i].is_gold())
            {
            sum =+ 1;
            }
        }
    }
    return sum/static_cast<double>(samples.size());
}
