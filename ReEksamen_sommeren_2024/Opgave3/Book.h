#pragma once
#include<string>

using namespace std;

//Opgave 3 a)
class Book
{
private:

    int isbn;
    string author;
    bool used;

public:
    Book(int isbn, string author, bool used);
    int getIsbn();
    string getAuthor();
    bool isUsed();
    string toString();
};


