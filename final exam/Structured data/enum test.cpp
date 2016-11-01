#include <iostream>
using namespace std;

int main()
{
    enum state1 {Johor, Terengganu, Sarawak, Selangor};
    enum state2 {Melaka=5, Pahang=9, Perak=100, Kedah, Perlis=7};
    
    cout << Johor << Terengganu << Sarawak << Selangor << endl;
    cout << Melaka << Pahang << Perak << Kedah << Perlis << endl;
    cout << Terengganu+Perlis << endl;
    
    system("pause");
    return 0;
}
