#include <iostream>
using namespace std;

int main()
{
    int number = -10;
    do
    {
        if (number != -10)
        {
            cout << number << endl;     
        }
        number += 2;  
    }
    while(number < 10);
    system("pause");
    return 0;
}
