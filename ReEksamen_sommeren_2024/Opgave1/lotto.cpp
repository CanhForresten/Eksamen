#include"lotto.h"
#include"Binomial.h"
using namespace std;



//Opgave 1b)

double lottoRowProbability(int r){

    double kombi = binomialCoefficient(7, 36);

    double chance = r/kombi;

    return chance;
}



//Opgave 1 e)
double vikingLottoRowProbability(int r){
    

    double kombi = binomialCoefficient(6, 48)*5;

    double chance = r/kombi;

    return chance;
}
