//lab3 - 1
#include <iostream>
using namespace std;

int main()
{
    int more=1, weightCnt=0;
    double weight, totWeight=0;
    cout << "Calculate the Average and Total Weight";
    cout << " of 5 Students \n\n ";
    
    while (more == 1)
    {
          cout << "Enter the weight of a student: ";
          cin >> weight;
          totWeight += weight;
          weightCnt++;
          cout << "Anymore weights? Enter 1 for yes OR 0 for no:";
          cin >> more;
    }
    cout << "\n\nYou have " << weightCnt << " weights.";
    cout << "\nThe Average Weight: " << (totWeight/weightCnt);
    cout << "\nThe Total Weight: " << totWeight;
    cout << "\n\nEnd Of Program";
    system("pause");
    return 0;
}

//Output
/*
Calculate the Average and Total Weight of 5 Students

 Enter the weight of a student: 50
Anymore weights? Enter 1 for yes OR 0 for no:1
Enter the weight of a student: 70
Anymore weights? Enter 1 for yes OR 0 for no:1
Enter the weight of a student: 40
Anymore weights? Enter 1 for yes OR 0 for no:1
Enter the weight of a student: 50
Anymore weights? Enter 1 for yes OR 0 for no:1
Enter the weight of a student: 80
Anymore weights? Enter 1 for yes OR 0 for no:0


You have 5 weights.
The Average Weight: 58
The Total Weight: 290

End Of Program
*/
