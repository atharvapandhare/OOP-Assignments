#include <iostream>

using namespace std;

class employee
{
public:
    int ID;
    string Name;
    string department;

    void display()
    {
        cout << "------- Employee Detail ------" << endl;
        cout << "ID: " << ID << endl;
        cout << "Name: " << Name << endl;
        cout << "Department: " << department << endl;
    }

    void input()
    {
        cout << "Enter the ID: ";
        cin >> ID;
        cin.ignore();
        cout << "Enter the Name: ";
        cin >> Name;
        getline(cin,Name);
        cout << "Enter the department name: ";
        cin >> department;
    }
};

int main()
{
    employee e1;
    employee e2;

    e1.input();
    e2.input();

    e1.display();
    e2.display();

    return 0;
}
