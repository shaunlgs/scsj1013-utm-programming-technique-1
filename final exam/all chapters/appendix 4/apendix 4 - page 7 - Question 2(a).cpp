#include <iostream>
using namespace std;

void f(double a, int b);
int f(int a, int& b);

int main()
{
    int x = 1;
    int y = 3;
    double z = 4.0;
    
    x = f(x,y);
    cout << "x=" << x << " y=" << y << endl;
    f(z,x);
    cout << "z=" << z << " y=" << y << endl;
    f(z,x);
    
    system("pause");
    return 0;
}

void f (double a, int b)
{
     static int c = 2;
     a = b*c++;
     cout << "a=" << a << " c=" << c << endl;     
}

int f (int a, int& b)
{
    a++;
    b=2*a;
    cout << "a=" << a << " b=" << b << endl;
    return a;
}
