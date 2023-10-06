#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Account {
public:
    float salary = 6000;
};

class Programmer:public Account {
public:
    float bonus = 5000;
};

int main()
{
    Programmer p1;
    cout << "Salary =" <<p1.salary <<endl;
    cout << "Bonus =" <<p1.bonus <<endl;
}
