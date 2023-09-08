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
    Student(Student & s) //constructorName(className & obj of the class)
    {
        roll = s.roll;
        name = s.name;
        marks = s.marks;
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
    Student s2(s1); // passing s1(object) to Student(constructor); hence it is called Copy Constructor
    cout << "Values in s1" <<endl;
    s1.display();
    cout << "\n-----------------------" <<endl;
    cout << "Values in s2" <<endl;
    s2.display();
    return 0;
}
