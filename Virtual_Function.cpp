#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class base
{
    int x = 5;
public:
    virtual void display()
    {
        cout << "x = " << x <<endl;
    }
};

class derived:public base
{
    int y = 6;
public:
    void display()
    {
        cout << "y = " << y <<endl;
    }
};

int main()
{
    base *a;
    derived d;
    a = &d;
    a->display();
}
