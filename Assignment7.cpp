#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;
    string contact;

    void pdisplay()
    {
        cout << "Name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "contact:" << contact << endl;
    }
};

class student : public person
{
public:
    int rno;
    string branch;

    void sdisplay()
    {
        cout << "roll no:" << rno << endl;
        cout << "branch:" << branch << endl;
    }
};

int main()
{
    student s1;

    s1.name = "Atharva";
    s1.age = 18;
    s1.contact = "999999999";
    s1.rno = 2;
    s1.branch = "cse";

    s1.pdisplay();
    s1.sdisplay();

    return 0;
}
