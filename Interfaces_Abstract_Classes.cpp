#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class base
{
public:
    virtual void display() = 0;
};

class derived1:public base
{
public:
    void display()
    {
        cout << "derived1 class is invoked" <<endl;
    }
};

class derived2:public base
{
public:
    void display()
    {
        cout << "derived2 class is invoked" <<endl;
    }
};

int main()
{
    derived1 d1;
    derived2 d2;
    d1.display();
    d2.display();
}
