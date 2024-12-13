#include "Book.h"
using namespace std;
#include<string>
#include<iostream>
// Opgave 3 b)

Book::Book(int isbn, string author, bool used)
{
    if (isbn <= 0)
    {
        cout << "fejl, mangler ISBN nummer";
        this->isbn = 0;

    } else {
        this->isbn = isbn; 
    }

    if (author.empty())
    {
        cout << "Der mangler et navn";
        this->author = "mangler";
    } else {
        this->author = author;
    }

    this->used = used;
}

int Book::getIsbn()
{
    return this->isbn;
}

string Book::getAuthor()
{
    return this->author;
}

bool Book::isUsed()
{
    return this->used;
}

string Book::toString()
{
    return ("isbn = " + to_string(this->getIsbn()) + " author = " + this->getAuthor() + " used = " + to_string(this->isUsed()));
}