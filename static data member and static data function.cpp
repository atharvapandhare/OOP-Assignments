#include <iostream>
using namespace std;

class student
{
public:
    int rno;
    string name;
    static string clgname;

    static void showdata()
    {
        cout << clgname << endl;
    }

    void display()
    {
        cout << "roll no:" << rno << endl;
        cout << "Name:" << name << endl;
    }
};

string student::clgname = "MIT";

int main()
{
    student s1;
    student s2;

    s1.rno = 1;
    s2.rno = 2;

    s1.name = "atharva";
    s2.name = "Jay";

    s1.display();
    student::showdata();

    s2.display();
    student::showdata();

    return 0;
}
