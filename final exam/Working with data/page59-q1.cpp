#include <iostream>
using namespace std;

int main()
{
    float pound, gram;
    cout << "Enter the weight in pound: " << endl;
    cin >> pound;
    
    gram = pound / 0.0022046;
    
    cout << "Weight in gram: " << endl;
    cout << gram << endl;
    
    system("pause");
    return 0;
}
