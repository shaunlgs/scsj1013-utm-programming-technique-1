/*
Write a program that has a function that returns the index of the smallest element in an array of integers.
If there are more than one such elements, return the smallest index.
Use {1,2,4,5,10,100,2,-22} to test the function.
*/

#include <iostream>
using namespace std;

int indexSmallest(int array1[], int size);

int main()
{
    const int ARRAY_SIZE = 8;
    int array1[ARRAY_SIZE] = {1,2,4,5,10,100,2,-22};
    int index;
    
    index = indexSmallest(array1, ARRAY_SIZE);
    
    cout << "Index of the smallest element in array is " << index << endl;
    
    system("pause");
    return 0;
}

int indexSmallest(int array1[], int size)
{
    int smallest = array1[0];
    int smallestIndex = 0;
    
    for(int i=0; i<size; i++)
    {
     if (array1[i] < smallest)
     {
      smallest = array1[i];
      smallestIndex = i;              
     }                 
    }
    return smallestIndex;
}
