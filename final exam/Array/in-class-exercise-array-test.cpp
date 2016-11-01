#include <iostream>
using namespace std;

void Test(int []);

int main()
{
    int myArr [4]={3,4,5,6};
    for(int i=0;i<4;i++)
            cout<<myArr[i]<<" ";
    cout<<endl;
    
    Test(myArr);
    cout<<endl;
    
    for(int i=0;i<4;i++)
    cout<<myArr[i]<<" ";
    cout << endl;
    
    system("pause");
    return 0;
}

void Test(int z[])
{
     int temp=z[3];
     z[3]=z[0];
     z[0]=temp;

     for(int j=0;j<4;j++)
     cout<<z[j]<<" ";
}
