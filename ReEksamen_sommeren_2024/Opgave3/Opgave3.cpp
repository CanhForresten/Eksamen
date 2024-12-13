#include"Book.h"
#include"BookStore.h"
using namespace std;
#include<iostream>

int main()
{
	// Opgave  3 c)
	Book roman(12345678, "Dan Brown", 0);
	cout << roman.toString() << endl;
	cout << endl;

	//Opgave 3 f-1)
	BookStore test1(1);
	cout << to_string(test1.findUsedBooks().size()) << to_string(test1.findUsedBooksByAuthor("H.C Andersen").size()) << endl;
	cout << endl;
	//Opgave 3 f-2)


	BookStore test2(2);
	test2.addBook(123456, "H.C Andersen", 1);
	test2.addBook(223456, "H.C Andersen", 0);
	test2.addBook(323456, "Dan Brown", 1);
	test2.addBook(423456, "Ben Franklin", 0);

	vector<Book>UsedBooks = test2.findUsedBooks();


	for (size_t i = 0; i < UsedBooks.size(); i++)
	{
		cout << UsedBooks[i].toString() << endl;
	}
	cout << endl;



	vector<Book>ByAuthor = test2.BooksByAuthor("H.C Andersen");

	for (size_t i = 0; i < ByAuthor.size(); i++)
	{
		cout << ByAuthor[i].toString() << endl;
	}
	
	
	return 0;
}
