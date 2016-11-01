//lab Exercise - lecturer method
#include <iostream>
using namespace std;
int main()
{
	for(int i=1;i<=6;i++)
	{
		cout<<"*";
	}
	cout << endl;


	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=6;j++)
		{
			if(j>1 && j<6)
			{
				cout << " ";
				continue;
			}
			cout<<"*";
		}
		cout << endl;
	}


	for(int i=1;i<=6;i++)
	{
		cout<<"*";
	}
	cout << endl;
	 system("pause");
	 return 0;
}

/* output
******
*    *
*    *
*    *
******
*/
