// Program 5.5
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    float val1, val2, val3, val4, average;
    fstream inData;
    fstream outData;
    
    inData.open("DataIn.txt");
    // fstream data type does not allow file to be created, so must add ios::out flag
    outData.open("DataOut.txt", ios::out);
    
    inData >> val1 >> val2 >> val3 >> val4;
    outData << val4 << endl;
    outData << val3 << endl;
    outData << val2 << endl;
    outData << val1 << endl;
    average = (val1+val2+val3+val4)/4.0;
    outData << average << endl;
    
    outData.close();
    system("pause");
    return 0;
}
