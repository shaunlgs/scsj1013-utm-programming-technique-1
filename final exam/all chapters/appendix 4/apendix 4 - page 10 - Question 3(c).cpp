#include <iostream>
using namespace std;

int* addArray(int [], int []);

int main()
{
    string students[] = {"Ali", "Chong", "Muthu", "Salmah"};
    int scores[] = {75,80,81,88};
    
    int p[3] = {10,40,15};
    int q[3] = {1,40,10};
    int* r;
    
    int table[3][5] = {{1,2,3,4,5},{6,7,8,9,1},{1,2,7,8,5}};
    
    cout << "i)" << endl;
    for (int i=0; i<4; i++)
    {
        cout << students[i] << '\t' << scores[i] << endl;
    }
    cout << endl;
    
    cout << "ii)" << endl;
    for (int i=0; i<5; i++)
    {
        cout << table[0][i] << '\t' << table[1][i] << '\t' << table[2][i] << endl;
    }
    cout << endl;
    
    cout << "iv)" << endl;
    r = addArray(p, q);
    for (int i=0; i<3; i++)
    {
        cout << *(r+i) << endl;
    }
    cout << endl;
    
    cout << "v)" << endl;
    r = addArray(table[1], table[2]);
    for (int i=0; i<5; i++)
    {
        cout << *(r+i) << endl;
    }
    cout << endl;
    
    system("pause");
    return 0;
}

int* addArray(int array1[], int array2[])
{
     static int array3[5];
     for (int i=0; i<5; i++)
     {
         array3[i] = array1[i] + array2[i];
     }
     return array3;
} 
