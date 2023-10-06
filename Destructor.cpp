#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A{
public:
    A() {
        cout << "Constructor called" <<endl;
    }
    ~A() {
        cout << "Destructor called" <<endl;
    }
};

int main()
{
    A o1;
    int x = 1;
    A o2;
}
