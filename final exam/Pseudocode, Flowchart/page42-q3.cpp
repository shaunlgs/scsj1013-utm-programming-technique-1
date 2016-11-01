#include <iostream>
using namespace std;

int main()
{
    int a,b;
    
    cout << "Input: " << endl;
    cin >> a;
    cin >> b;
    
    cout << "Output: ";
    if (a < b)
    {
          for(int i=a; i<=b; i++)
          {
                  cout << i << " ";
          }
    }
    else if (b < a)
    {
         for(int i=b; i<=a; i--)
          {
                  cout << i << " ";
          }    
    }
    cout << endl;
    system("pause");
    return 0;
}
