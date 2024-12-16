#include "Product.h"
#include<string> 
#include<iostream>
using namespace std;

// Opgave 3 b)


Product::Product(string name, double price, int quantity){
    if (name.empty())
    {
        cout << "the name is empty" ;
    } else {
        this->name1 = name;
    }
    if (price == 0.0)
    {
        cout << "It must be free then" ;
    } else {
        this->price1 = price;
    }
    if (quantity == 0)
    {
        cout << "quantity is not defined";
    } else {
        this->quantity1 = quantity;
    }
    }










    int Product::get_quantity(){
    return this->quantity1;
    }

    double Product::get_price(){
    return this->price1;
    }

    string Product::get_name(){
    return name1;
    }

    string Product::tostring(){
        return "The name is " + this->name1 + ", price is " + to_string(this->price1) + " and quantity is " + to_string(this->quantity1);
    }