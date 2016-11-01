//lab3 - 2
#include <iostream>
using namespace std;

int main()
{
    int counter=0;
    double weight, totWeight=0;
    cout << "Calculate the Average and Total Weight";
    cout << " of 3 Students \n\n ";
    
    while (counter < 3)
    {
          cout << "Enter the weight of a student: ";
          cin >> weight;
          totWeight += weight;
          counter++;
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

 Enter the weight of a student: 50
Enter the weight of a student: 70
Enter the weight of a student: 80


You have 3 weights.
The Average Weight: 66.6667
The Total Weight: 200

End Of Program
*/
