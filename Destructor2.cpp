#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    float marks;
    Student()
    {
        roll = 31;
        name = "Sayak Bhunia";
        marks = 84.4;
    }
    void display()
    {
        cout << "\n roll = " << roll;
        cout << "\n name = " << name;
        cout << "\n marks = " << marks;
    }
    ~Student()
    {
        cout <<"\nEND";
    }
};

int main()
{
    Student s;
    s.display();
    return 0;
}
