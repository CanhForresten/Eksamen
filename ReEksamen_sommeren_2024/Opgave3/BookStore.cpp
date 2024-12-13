#include"BookStore.h"
using namespace std;
#include<iostream>


//Opgave 3 e)

BookStore::BookStore(int id)
{
    if (id == 0)
    {
        cout << "fejl";
    } else {
        this->id_ = id;
    }
}

vector<Book> BookStore::findUsedBooks()
{
    vector<Book>UsedBooks;

   for (size_t i = 0; i < Books_.size(); i++)
   {
    if (Books_[i].isUsed())
    {
        UsedBooks.push_back(Books_[i]);
    }
   }

    return UsedBooks;
}

vector<Book> BookStore::findUsedBooksByAuthor(string author)
{
    vector<Book>UsedBooks = findUsedBooks();
    vector<Book>UsedAuthor;
    for (size_t i = 0; i < UsedBooks.size(); i++)
    {
        if (UsedBooks[i].getAuthor() == author)
        {
            UsedAuthor.push_back(UsedBooks[i]);
        }
        
    }
    
    return UsedAuthor;
}

vector<Book> BookStore::BooksByAuthor(string author)
{
    vector<Book>ByAuthor;
    for (size_t i = 0; i < Books_.size(); i++)
    {
        if (Books_[i].getAuthor() == author)
        {
            ByAuthor.push_back(Books_[i]);
        }
    }
    
    return ByAuthor;
}

void BookStore::addBook(int isbn, string author, bool used)
{
    if (isbn == 0 || author.empty())
    {
        cout <<"Bog kan ikke oprettes" << endl;
    } else {
        
        this->Books_.push_back(Book(isbn, author, used));
    }
    
}
