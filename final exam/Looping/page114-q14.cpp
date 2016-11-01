#include <iostream>
using namespace std;

int main()
{
    // original question
    int days = 0;
    int week;
    for(week=1; week<=7; week++)
    {
            days += 1;
    }
    cout << days << endl;
    
    // modify to while loop
    week = 1;
    days = 0;
    while(week <= 7)
    {
               days += 1;
               week += 1;
    }
    cout << days << endl;
    
    // modify to do while loop
    
    system("pause");
    return 0;
}
