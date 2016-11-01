// assignment 4 - Write a program using 3 functions: readmeter,getcm , printcm to convert value in meter to cm
#include <iostream>
using namespace std;

int readmeter(void);
int getcm(int);
void printcm(int);

int main()
{
    int meter, cm;
    meter = readmeter();
    cm = getcm(meter);
    printcm(cm);
    system("pause");
    return 0;
}

int readmeter(void)
{
    int meter;
    cout << "Please enter a length in meter: ";
    cin >> meter;
    return meter;
}

int getcm(int meter)
{
    return meter * 100;
}

void printcm(int cm)
{
    cout << "Length in CM: " << cm << endl;
}

/*output
Please enter a length in meter: 12
Length in CM: 1200
*/
