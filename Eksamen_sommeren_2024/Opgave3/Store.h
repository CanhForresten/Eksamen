#pragma once
#include"Product.h"
#include<string>
#include<vector>

using namespace std;

class Store
{
private:
    string name1;
    vector<Product> Products;

public:
    int get_quantity();
    Store(string name);
    string get_name();
    void add_product(string name, double price, int quantity);
    double total_inventory();
    double total_quantity();
};

