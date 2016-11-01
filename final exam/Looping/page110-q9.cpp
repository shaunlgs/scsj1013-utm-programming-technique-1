#include <iostream>
using namespace std;

int main()
{
    int mark;
    do
    {
        cout << "\nEnter marks for test 1: ";
        cin >> mark;
    }
    while((mark<0)||(mark>100));
    cout << "\nYour mark for test 1 is " << mark;
    cout << "\n\nEnd Of Program\n";
    system("pause");
    return 0;
}

/* answers
i. The program prompts the user to enter the mark. If the mark is less than 0 or more than 100, it will reprompt the user to enter marks.
If the mark is acceptable, it will print the mark to console.
ii. Because the mark may be not what we want.
iii. 0 <= mark <= 100
iv. do while loop executes 1 more time than while loop
*/
