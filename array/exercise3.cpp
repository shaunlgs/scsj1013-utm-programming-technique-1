#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void readFile(char* fileName, float array[], int size);
void computeC(float array1[], float array2[], int size);
char grade(float number);
float average(float array[], int size);
void writeFile(float array1[], float array2[], int size);

int main()
{   
    const int ARRAY_SIZE = 8;
    float fahArray[8] = {};
    float celciusArray[8] = {};
    
    readFile("input-for-exercise3.txt",fahArray,ARRAY_SIZE);
    computeC(fahArray,celciusArray,ARRAY_SIZE);
    writeFile(fahArray,celciusArray,ARRAY_SIZE);
    
    system("pause");
    return 0;
}

void readFile(char* fileName, float array[], int size)
{
     ifstream inData;
     inData.open(fileName);
     float data;
     
     for(int i=0; i<size; i++)
     {
             inData >> data;
             array[i] = data;      
     }
}

void computeC(float array1[], float array2[], int size)
{
 for(int i=0; i<size; i++)
 {
  array2[i] = 5/9.0 * (array1[i] - 32);        
 }     
}

char grade(float number)
{
 if(number >= 35)
 {
           return 'H';
 }
 else if (number <35 && number >=20)
 {
      return 'M';
 }     
 else if (number < 20)
 {
      return 'L';
  }
}

float average(float array[], int size)
{
      float total = 0;
      for(int i=0; i<size; i++)
      {
               total += array[i];
      }
      return total/static_cast<float>(size);
}
 
void writeFile(float array1[], float array2[], int size)
{
 int numHigh=0, numMedium=0, numLow=0;
 char character;
                cout << setw(12) << left << "C(Celcius)" << setw(10) << " " << setw(12) << left << "F(Farenheit)" << setw(10) << " " << setw(12) << left << "Description" << endl;
                cout << setw(12) << left << "============" << setw(10) << " " << setw(12) << left << "============" << setw(10) << " " << setw(12) << left << "============" << endl;
                for(int i=0; i<size; i++)
                {
                        character = grade(array2[i]);
                        switch(character)
                        {
                                         case 'H':
                                              numHigh += 1;
                                              break;
                                         case 'M':
                                              numMedium += 1;
                                              break;
                                         case 'L':
                                              numLow += 1;
                                              break;
                        }
                 cout << setw(12) << left << array2[i] << setw(10) << " " << setw(12) << left << array1[i] << setw(10) << " " << setw(12) << left << character << endl;        
                }
                
                cout << endl;
                cout << "Average of the temperature: " << average(array2, size) << endl;
                cout << "Number of high temperature: " << numHigh << endl;
                cout << "Number of medium temperature: " << numMedium << endl;
                cout << "Number of low temperature: " << numLow << endl;
}
