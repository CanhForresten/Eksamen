#include "Store.h"
#include<string> 
#include<iostream>
//Opgave 3 e)
using namespace std;

int Store::get_quantity()
{
    int sum = 0;
    for (size_t i = 0; i < Products.size(); i++)
    {
        sum += Products[i].get_quantity();
    }
        return sum;
}

Store::Store(string name)
{
    if (name.empty())
    {
        cout <<"intet navn" << endl;
    } else {
        this->name1 = name;
    }
}

string Store::get_name(){
    return this->name1;
}

void Store::add_product(string name, double price, int quantity){
    if (name.empty() || price == 0.0 || quantity == 0)
    {
        cout << "produktet kan ikke oprettes" << endl;
    } else {
        this->Products.push_back(Product(name, price, quantity));
    } 
}

double Store::total_inventory(){
    double sumPrice = 0;
    for (size_t i = 0; i < Products.size(); i++)
    {
        sumPrice += Products[i].get_price();
    }
    return sumPrice;
}