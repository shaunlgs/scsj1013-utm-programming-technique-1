#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int a[SIZE] = {3,6,9,12,15};
    int b[SIZE] = {3,6,9,11,15};
    bool arrayEqual = true;
    
    for (int i=0; i<SIZE; i++)
    {
        if (a[i] != b[i])
        {
                 arrayEqual = false;         
                 break;
        }
    }
    
    if(arrayEqual)
    {
                  cout << "Both arrays are equal." << endl;
    }
    else
    {
        cout << "Arays are not equal." << endl;
    }
    
    system("pause");
    return 0;
}
