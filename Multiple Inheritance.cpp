#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A
{
protected:
    int a;
public:
    void geta(int n)
    {
        a = n;
    }
};

class B
{
protected:
    int b;
public:
    void getb(int n)
    {
        b = n;
    }
};

class C:public A, public B
{
public:
    void display()
    {
        cout << "The value of a is: " << a <<endl;
        cout << "The value of b is: " << b <<endl;
        cout << "Addition of a and b is: " << a+b;
    }
};

int main()
{
    C c;
    c.geta(10);
    c.getb(20);
    c.display();
}
