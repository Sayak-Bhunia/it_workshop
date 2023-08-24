#include<iostream>
using namespace std;

class Student{
public:
    int id;
    string name;
};

int main()
{
    Student s1,s2;
    s1.id = 31;
    s2.id = 32;
    s1.name = "Sayak Bhunia";
    s2.name = "Shounak Sinha";
    cout << s1.id <<endl;
    cout << s1.name <<endl;
    cout << s2.id <<endl;
    cout << s2.name <<endl;
}
