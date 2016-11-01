#include <iostream>
#include <fstream>
using namespace std;

struct fileInfo {
  char answer[20];
  char* name;     
};

fileInfo readFile(char* fileName)
{
 fileInfo fileInfo;
 ifstream file1;
 
 file1.open(fileName);
 
 file1.getline(fileInfo.name, 20);
 for (int i=0; i<20; i++)
 {
     file1 >> fileInfo.answer[i];
 }
 return fileInfo;
}

int main()
{
 string studentID;
    fileInfo correctAnswerArray;
    
    cout << "Please enter the ID of a student to be evaluated:" << endl;
    cin >> studentID;
    
    correctAnswerArray = readFile("CorrectAnswers.txt");
    cout << correctAnswerArray.name << endl;
    system("pause");
}
