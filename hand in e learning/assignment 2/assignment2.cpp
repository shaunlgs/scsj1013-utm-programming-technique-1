/* This is a program to identify the grade for the subject Programming Technique I (SCSJ1013)
   base on the assessments as listed in Table 6.1. The input for this program is the 5 assessment marks.
   The full mark for each assessment is 100%. 
   The final mark for this subject will be calculated based on the 5 assessments input mark. 
   Based on this final mark the program will assign a grade. */
#include <iostream>
using namespace std;

int main ()
{
    int test1, assignments, quiz, lab, final;
    float percentage, test1_percentage, assignments_percentage, quiz_percentage, lab_percentage, final_percentage;
    string grade;
    
    // User input data for test 1, assignments, quiz, lab works, and final exam
    cout << "Enter the mark for Test 1: " << endl;
    cin >> test1;
    cout << "Enter the mark for Assignments: " << endl;
    cin >> assignments;
    cout << "Enter the mark for Quiz: " << endl;
    cin >> quiz;
    cout << "Enter the mark for Lab works: " << endl;
    cin >> lab;
    cout << "Enter the mark for Final Exam: " << endl;
    cin >> final;
    
    // calculate the percentages for each assessments
    test1_percentage = (test1/100.0*20);
    assignments_percentage = (assignments/100.0*30);
    quiz_percentage = (quiz/100.0*10);
    lab_percentage = (lab/100.0*10);
    final_percentage = (final/100.0*30);
    
    // total the percentages of each assessments to get the total percentage
    percentage = test1_percentage + assignments_percentage + quiz_percentage + lab_percentage + final_percentage;
    
    // assign grade based on percentages
    if (percentage <= 29)
       grade = "E";
    else if (percentage <= 34)
         grade = "D-";
    else if (percentage <= 39)
         grade = "D";
    else if (percentage <= 44)
         grade = "D+";
    else if (percentage <= 49)
         grade = "C-";
    else if (percentage <= 54)
         grade = "C";
    else if (percentage <= 59)
         grade = "C+";
    else if (percentage <= 64)
         grade = "B-";
    else if (percentage <= 69)
         grade = "B";
    else if (percentage <= 74)
         grade = "B+";
    else if (percentage <= 79)
         grade = "A-";
    else if (percentage <= 89)
         grade = "A";
    else if (percentage <= 100)
         grade = "A+";
         
    // output data
    cout << "Your Test 1 percentage is: " << test1_percentage << "% out of 20%" << endl;
    cout << "Your Assignments percentage is: " << assignments_percentage<< "% out of 30%" << endl;
    cout << "Your Quiz percentage is: " << quiz_percentage<< "% out of 10%" << endl;
    cout << "Your Lab works percentage is: " << lab_percentage<< "% out of 10%" << endl;
    cout << "Your Final Exam percentage is: " << final_percentage << "% out of 30%" << endl;
    cout << endl;
    cout << "Total percentage = " << test1_percentage << "% + " << assignments_percentage 
    << "% + " << quiz_percentage << "% + " << lab_percentage << "% + " << final_percentage << "% = " << percentage << "%" << endl;
    cout << "Your grade is: " << grade << endl;
    cout << endl;
    cout << endl;
    cout << "Purata markah: " << percentage << "%" << endl;
    cout << "Gred: " << grade << endl;
    system("pause");
    return 0;
}

/*
Enter the mark for Test 1:
80
Enter the mark for Assignments:
90
Enter the mark for Quiz:
100
Enter the mark for Lab works:
90
Enter the mark for Final Exam:
70
Your Test 1 percentage is: 16% out of 20%
Your Assignments percentage is: 27% out of 30%
Your Quiz percentage is: 10% out of 10%
Your Lab works percentage is: 9% out of 10%
Your Final Exam percentage is: 21% out of 30%

Total percentage = 16% + 27% + 10% + 9% + 21% = 83%
Your grade is: A


Purata markah: 83%
Gred: A
*/
