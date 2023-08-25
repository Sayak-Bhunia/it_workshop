#include<iostream>
using namespace std;

class fibo
{
public:
    int a,b,c,i;
    void display(int n)
    {
        a = 0;
        b = 1;
        cout <<"Fibonacci Series:\n";
        cout << a << " " << b;
        for(i=0;i<=n-2;i++) {
            c = a + b;
            cout << " " << c;
            a = b;
            b = c;
        }
    }
};

int main()
{
    fibo s;
    s.display(10);
}
