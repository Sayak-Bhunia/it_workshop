#include<iostream>
using namespace std;

class pattern
{
public:
    int i,j,k;
    void display(int r, int c)
    {
        for(i=0;i<r;i++) {
            for(j=0;j<2*(r-i)-1;j++) {
                cout << " ";
            }
            for(k=0;k<=i;k++) {
                cout << "* ";
            }
            cout <<endl;
        }
    }
};

int main()
{
    pattern n;
    int x,y;
    cout <<"enter row and column: "<<endl;
    cin >> x >> y;
    n.display(x,y);
}
