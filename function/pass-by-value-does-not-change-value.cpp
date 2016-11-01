#include <iostream>
using namespace std;

void f( int n ) {
     cout << "Inside f( int ), the value of the parameter is " << n << endl;
	n += 37;
    cout << "Inside f( int ), the modified parameter is now " << n << endl;
}

int main() {
	int m = 612;

	cout << "The integer m = " << m << endl;
	cout << "Calling f( m )..." << endl;
	f( m );
	cout << "The integer m = " << m << endl;
	
	system("pause");
	return 0;
}

/* output
The integer m = 612
Calling f( m )...
Inside f( int ), the value of the parameter is 612
Inside f( int ), the modified parameter is now 649
The integer m = 612
*/
