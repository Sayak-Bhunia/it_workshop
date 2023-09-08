#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    float marks;
    Student(int r, string s, float m)
    {
        roll = r;
        name = s;
        marks = m;
    }
    void display()
    {
        cout << "\n roll = " << roll;
        cout << "\n name = " << name;
        cout << "\n marks = " << marks;
        cout <<endl;
    }
};

int main()
{
    Student s1(31,"Sayak Bhunia", 84.4);
    Student s2(32,"Shounak Sinha", 76.5);
    s1.display();
    s2.display();
    return 0;
}
