#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    string department;
    string name;

    employee(int id, string department, string name)
    {
        this->id = id;
        this->department = department;
        this->name = name;
        cout << "Employee Record Created" << endl;
    }

    ~employee()
    {
        cout << "Employee Record Deleted";
    }

    void display()
    {
        cout << "ID:" << this->id << endl;
        cout << "Name of dep:" << this->department << endl;
        cout << "Name:" << this->name << endl;
    }
};

int main()
{
    employee e1(10, "soat", "jay");
    e1.display();
    return 0;
}
