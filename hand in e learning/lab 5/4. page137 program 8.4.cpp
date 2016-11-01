#include <iostream>
using namespace std;

int getAnInteger(void);
float calculateAverage(int x, int y, int z);
void displayAverage(float avg);

int main()
{
    int num1, num2, num3;
    float average;
    num1 = getAnInteger();
    num2 = getAnInteger();
    num3 = getAnInteger();
    average = calculateAverage(num1, num2, num3);
    displayAverage(average);
    cout << "\n\nEnd of program";
    system("pause");
    return 0;
}

int getAnInteger(void)
{
    int value;
    cout << "Enter an integer: ";
    cin >> value;
    return (value);
}

float calculateAverage(int x, int y, int z)
{
      return (x+y+z)/3.0;
}

void displayAverage (float avg)
{
 cout << "The average of your 3 numbers is ";
 cout << avg << ".\n";
}

/*output
Enter an integer: 12
Enter an integer: 34
Enter an integer: 13
The average of your 3 numbers is 19.6667.
*/
