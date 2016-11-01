//lab3 - 3
#include <iostream>
using namespace std;

int main()
{
    int more=1, weightCnt=0;
    double weight, totWeight=0;
    cout << "Calculate the Average and Total Weight";
    cout << " of 5 Students \n\n ";
    
    do
    {
          cout << "Enter the weight of a student: ";
          cin >> weight;
          totWeight += weight;
          weightCnt++;
          cout << "Anymore weights? Enter 1 for yes OR 0 for no:";
          cin >> more;
    } while (more == 1);
    
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

 Enter the weight of a student: 90
Anymore weights? Enter 1 for yes OR 0 for no:1
Enter the weight of a student: 100
Anymore weights? Enter 1 for yes OR 0 for no:1
Enter the weight of a student: 30
Anymore weights? Enter 1 for yes OR 0 for no:1
Enter the weight of a student: 60
Anymore weights? Enter 1 for yes OR 0 for no:1
Enter the weight of a student: 50
Anymore weights? Enter 1 for yes OR 0 for no:0


You have 5 weights.
The Average Weight: 66
The Total Weight: 330

End Of Program
*/
