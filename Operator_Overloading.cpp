#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real,img;
public:
    Complex(int r=0, int i=0) {
        real = r;
        img = i;
    }
    Complex operator + (Complex const &obj) { /* &obj is the address of the objects that contain the complex and real numbers */
        Complex res; /* obj of the complex class for using outside main */
        res.real = real + obj.real; /* here "this->" just acts like an indicator old conventional method */
        res.img = img + obj.img;
        return res;
    }
    void print() {
        cout << real << "+i" <<img <<endl;
    }
};

int main()
{
    Complex c1(2,3),c2(3,5);
    Complex c3 = c1 + c2;
    c3.print();
}
