#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A
{
    int a=4;
    int b=5;
public:
    void mul()
    {
        int c=a*b;
        cout << "RESULT=" << c <<endl;
    }
};

class B:private A
{

};

int main()
{
    B b;
    b.mul();
}
