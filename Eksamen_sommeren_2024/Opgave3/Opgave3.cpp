#include "Product.h"
#include  "Store.h"
using namespace std;
#include<iostream>

int main() {
	Product apples = Product("Apples", 2.0, 10);

	cout << apples.tostring() << endl;

	Store supermarked = Store("Miyagi shop");
	supermarked.add_product("Apples", 5.25, 10);
	supermarked.add_product("Oranges", 3.25, 20);
	supermarked.add_product("Pears", 4.25, 5);

	cout << supermarked.total_quantity() << endl;
	cout << supermarked.total_inventory() << endl;

	return 0;
}