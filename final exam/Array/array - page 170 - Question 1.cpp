#include <iostream>
using namespace std;

int main()
{
    int i, a[] = {13,17,21,9,34};
    for (i=1; i<=5; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    for (i=1; i<=5; i++)
    {
        cout << a[i+1] << "\t";
    }
    cout << endl;
    for (i=1; i<=5; i++)
    {
        cout << a[i-1] << "\t";
    }
    cout << endl;
    for (i=1; i<=5; i++)
    {
        cout << a[i] + a[i+1] << "\t";
    }
    cout << endl;
    for (i=1; i<=5; i++)
    {
        cout << a[i] + i << "\t";
    }
    cout << endl;
    system("pause");
    return 0;
}
