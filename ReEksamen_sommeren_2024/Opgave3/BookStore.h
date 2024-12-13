#pragma once
#include"Book.h"
using namespace std;
#include<vector>
#include<string>




//Opgave 3 d)
class BookStore
{
private:
    int id_;
    vector<Book>Books_;
public:
    BookStore(int id);
    vector<Book>findUsedBooks();
    vector<Book>findUsedBooksByAuthor(string author);
    vector<Book>BooksByAuthor(string author);
    void addBook(int sbn, string author, bool used);
};
