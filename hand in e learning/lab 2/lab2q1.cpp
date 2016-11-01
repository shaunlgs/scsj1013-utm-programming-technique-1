// Program 5.7
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double amount;
    char s[100];
    
    cout << "D:";
    cin >> amount;
    cout << setprecision(2);
    cout << amount << endl;
    cout << fixed;
    cout << amount << endl;
    
    cout << "S:";
    cin >> s;
    cout << setw(6) << s << "END" << endl;
    cout << left << setw(6) << s << "END" << endl;
    system("pause");
    return 0;
}
