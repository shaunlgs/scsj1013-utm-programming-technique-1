// Program 5.5
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    float val1, val2, val3, val4;
    ifstream inData;
    ofstream outData;
    
    inData.open("DataIn.txt");
    outData.open("DataOut.txt");
    
    inData >> val1 >> val2 >> val3 >> val4;
    outData << val4 << endl;
    outData << val3 << endl;
    outData << val2 << endl;
    outData << val1 << endl;
    system("pause");
    return 0;
}
