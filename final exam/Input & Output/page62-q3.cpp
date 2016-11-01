#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "i)" << endl;
    for (int i=0; i<5; i++)
    {
        if (i == 0 || i == 4)
        {
              cout << "************" << endl;
        }
        else
        {
             cout << "*          *" << endl;
        }
    }
    cout << "\n\n\n";
    
    cout << "ii)" << endl;
    cout << setw(10) << left << "Nama" << setw(10) << left << "Markah" << endl;
    cout << setw(10) << left << "Nora" << setw(10) << left << "75" << endl;
    cout << setw(10) << left << "Muhamad" << setw(10) << left << "82" << endl;
    cout << setw(10) << left << "Siti" << setw(10) << left << "53" << endl;
    cout << "\n\n\n";
    
    cout << "iii)" << endl;
    cout << "*****     *        *   " << endl;
    cout << "*         *        *   " << endl;
    cout << "*      *******  *******" << endl;
    cout << "*         *        *   " << endl;
    cout << "*****     *        *   " << endl;
    cout << "\n\n\n";
    
    cout << "iv)" << endl;
    cout << "Set your goal" << endl;
    cout << "\tGet motivated" << endl;
    cout << "\t\tBe dedicated" << endl;
    cout << "\n\n\n";
    
    system("pause");
    return 0;
}
