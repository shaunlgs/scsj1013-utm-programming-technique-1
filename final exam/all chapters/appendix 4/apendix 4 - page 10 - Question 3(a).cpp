#include <iostream>
using namespace std;

int main()
{
    int x[]={1,2,3};
    int y = 1;
    
    int z[2][3] = {{10,20,30},{40,50,60}};
    
    cout << x[y] << endl;
    cout << z[y][y] << endl;
    cout << x[y]-1 << endl;
    cout << x[y-1] << endl;
    cout << x[y]-x[2] << endl;
    cout << z[x[0]][0] << endl;
    cout << x[x[y]-1] << endl;
    
    z[0][y]++;
    cout << z[0][y] << endl;
    
    z[0][y++];
    cout << z[0][y] << endl;
    
    cout << x[--x[y]-2] << endl;
    
    system("pause");
    return 0;
}
