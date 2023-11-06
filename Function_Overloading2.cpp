#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class fun
{
    void test(float a,float b)
    {
        cout << "Function with float called";
    }

    void test(int s,int t)
    {
        cout << "Function with int called";
    }
};

int main()
{
    fun t;
    t.test(3.5,6.5);
}
