#include <iostream>
using namespace std;

void displayValue(int);

int main()
{
	cout<<"Passing number 5 to displayValue\n";
   displayValue(5);
   cout<<"Back in main\n";
   
   system("pause");
   return 0;
}

void displayValue(int n)
{
	cout<<"The value is " << n << endl;
}
