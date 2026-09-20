#include <iostream>
using namespace std;

class Book
{
public:
    int id;
    string book_name;
    string author;
    float price;

    Book()
    {
        id = 0;
        book_name = "Unknown";
        author = "Unknown";
        price = 0;
    }

    Book(int i, string n, string a, float p)
    {
        id = i;
        book_name = n;
        author = a;
        price = p;
    }

    void display()
    {
        cout << "----- Book Details -----" << endl;
        cout << "Book ID: " << id << endl;
        cout << "Book Name: " << book_name << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b1;
    Book b2(101, "H.C.VERMA", "H.c.verma", 500);

    cout << "Default Book:" << endl;
    b1.display();

    cout << endl;

    cout << "Complete Book:" << endl;
    b2.display();

    return 0;
}
