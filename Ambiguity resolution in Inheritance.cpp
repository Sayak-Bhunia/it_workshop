#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "Class A" <<endl;
    }
};

class B
{
public:
    void display()
    {
        cout << "Class B" <<endl;
    }
};

class C:public A,public A
{
    void view()
    {
        display();
    }
};

int main()
{
    C c;
    c.display();  //error debe dew to two display()
}
