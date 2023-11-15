#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class base
{
public:
    virtual void display() = 0;
};

class derived:public base
{
public:
    void display()
    {
        cout << "derived class is invoked" <<endl;
    }
};

int main()
{
    base *a;
    derived d;
    a = &d;
    a->display();
}
