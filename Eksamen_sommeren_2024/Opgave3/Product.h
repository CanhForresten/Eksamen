#pragma once
#include<string>

using namespace std;
//Opgave 3 a)


class Product
{
private:
    string name1;
    double price1;
    int quantity1;

public:
    Product(string name, double price, int quantity);
    int get_quantity();
    double get_price();
    string get_name();
    string tostring();
};


