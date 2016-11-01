//assignment3
#include <iostream>
using namespace std;

int main()
{
    int more=1, workerCnt=0;
    int id;
    string name;
    double rate, hours, tax_deduction, totalGross, totalTax;
    totalGross = 0;
    totalTax = 0;
    cout << "A program to process monthly paycheck";
    cout << " for all contract workers of an organization.\n ";

    do
    {
          cout << "\nEnter the id of worker: ";
          cin >> id;
          cout << "Enter the name of worker: ";
          cin >> name;
          cout << "Enter the hourly pay rate of worker: ";
          cin >> rate;
          cout << "Enter the number of hours worked during a month of worker: ";
          cin >> hours;
          cout << "\nWorker's ID: " << id << endl;
          cout << "Worker's name: " << name <<endl;
          totalGross += rate * hours;
          cout << "Worker's gross pay: " << rate * hours <<endl;
          if (rate * hours > 2000)
          {
                   tax_deduction = rate * hours * 0.05;
          }
          else
          {
              tax_deduction = 0;
          }
          totalTax += tax_deduction;
          cout << "Worker's tax deduction: " << tax_deduction << endl;
          cout << "Worker's net pay: " << rate*hours - tax_deduction << endl;
          workerCnt++;
          cout << "\nAnymore worker? Enter 1 for yes OR 0 for no:";
          cin >> more;
    } while (more == 1);

    cout << "\n\nYou have " << workerCnt << " workers.";
    cout << "\nTotal gross pay: " << totalGross;
    cout << "\nTotal tax deduction: " << totalTax;
    cout << "\n\nEnd Of Program\n";
    system("pause");
    return 0;
}

//Output
/*
A program to process monthly paycheck for all contract workers of an organizatio
n.

Enter the id of worker: 1234
Enter the name of worker: Shaun
Enter the hourly pay rate of worker: 15
Enter the number of hours worked during a month of worker: 200

Worker's ID: 1234
Worker's name: Shaun
Worker's gross pay: 3000
Worker's tax deduction: 150
Worker's net pay: 2850

Anymore worker? Enter 1 for yes OR 0 for no:1

Enter the id of worker: 4321
Enter the name of worker: Ali
Enter the hourly pay rate of worker: 17
Enter the number of hours worked during a month of worker: 180

Worker's ID: 4321
Worker's name: Ali
Worker's gross pay: 3060
Worker's tax deduction: 153
Worker's net pay: 2907

Anymore worker? Enter 1 for yes OR 0 for no:0


You have 2 workers.
Total gross pay: 6060
Total tax deduction: 303

End Of Program
*/
