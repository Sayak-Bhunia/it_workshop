#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Shape //declaration of the base class
{
public:
    int a;
    int b;
    void get_data(int n, int m)
    {
        a = n;
        b = m;
    }
};

class Rectangle:public Shape //inheriting the Shape class
{
public:
    int rarea()
    {
        int res = a*b;
        return res;
    }
};

class Triangle:public Shape //inheriting the Shape class
{
public:
    int tarea()
    {
        float res = 0.5*a*b;
        return res;
    }
};

int main()
{
    Rectangle r;
    Triangle t;
    int l,br;
    float bs,h;
    cout << "Enter length and breadth of the rectangle: " <<endl;
    cin >> l >> br;
    r.get_data(l,br);
    int m = r.rarea();
    cout << "Rectangle area = " << m <<endl;
    cout << "Enter the base and height the triangle: " <<endl;
    cin >> bs >> h;
    t.get_data(bs,h);
    float n = t.tarea();
    cout << "Triangle area = " << n <<endl;
}
