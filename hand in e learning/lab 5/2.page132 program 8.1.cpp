#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, aSqr, b, bSqr, c;

    cout << "Enter the length of side a: ";
    cin >> a;
    cout << "Enter the length of side b: ";
    cin >> b;
    aSqr = pow(a, 2.0);
    bSqr = pow(b, 2.0);
    c = sqrt(aSqr + bSqr);
    cout << "The length of the hypotenuse is ";
    cout << setprecision(2) << c << endl;
    system("pause");
    return 0;
}

/* output
Enter the length of side a: 12
Enter the length of side b: 18
The length of the hypotenuse is 22
*/
