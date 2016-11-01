#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(10) << right << setprecision(2) << fixed << 12345.67 << endl;
    cout << setw(10) << left << setprecision(5) << fixed << 12.34567 << endl;
    cout << setw(2) << left << "RM" << setw(8) << left << setprecision(2) << fixed << 99999.99 << endl;
    cout << "Raining Figures" << endl;
    cout << "---------------" << endl;
    cout << setw(10) << left << "Month 1 :" << setw(10) << right << "450.5 ml" << endl;
    cout << setw(10) << left << "Month 2 :" << setw(10) << right << "321.3 ml" << endl;
    cout << setw(10) << left << "Month 3 :" << setw(10) << right << "99.2 ml" << endl;
    system("pause");
    return 0;
}
