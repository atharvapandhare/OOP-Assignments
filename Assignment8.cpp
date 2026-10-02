#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;

    void pdisplay()
    {
        cout << "Name:" << name << endl;
        cout << "age:" << age << endl;
    }
};

class employee : public person
{
public:
    int eid;
    string department;

    void edisplay()
    {
        cout << "employee id:" << eid << endl;
        cout << "department:" << department << endl;
    }
};

class manager : public employee
{
public:
    string team;
    int teamid;

    void mdisplay()
    {
        cout << "team name:" << team << endl;
        cout << "team id:" << teamid << endl;
    }
};

int main()
{
    employee e1;
    manager m1;

    e1.name = "atharva";
    e1.age = 18;
    e1.eid = 202;
    e1.department = "software";

    m1.team = "alpha";
    m1.teamid = 23;

    e1.pdisplay();
    e1.edisplay();
    m1.mdisplay();

    return 0;
}
