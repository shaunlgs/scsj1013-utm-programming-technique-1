//lab3 - 4
#include <iostream>
using namespace std;

int main()
{
    double weight, totWeight=0;
    cout << "Calculate the Average and Total Weight";
    cout << " of 3 Students \n\n ";
    
    for (int weightCnt = 0; weightCnt < 3; weightCnt++)
    {
          cout << "Enter the weight of a student: ";
          cin >> weight;
          totWeight += weight;
    }
    cout << "\n\nYou have 3 weights.";
    cout << "\nThe Average Weight: " << (totWeight/3);
    cout << "\nThe Total Weight: " << totWeight;
    cout << "\n\nEnd Of Program";
    system("pause");
    return 0;
}

//Output
/*
Calculate the Average and Total Weight of 3 Students

 Enter the weight of a student: 70
Enter the weight of a student: 60
Enter the weight of a student: 90


You have 3 weights.
The Average Weight: 73.3333
The Total Weight: 220

End Of Program
*/
