#include <iostream>
using namespace std;

void getTestScores (int n, double scores[])
{
     for (int i=0; i<n; i++)
     {
         cout << "Enter score #" << i+1 << ":" <<endl;
         double score;
         cin >> score;
         scores[i] = score;
     }
}

double getTotal(int n, double scores[])
{
       double total;
   for (int i=0; i<n; i++)
   {
       total += scores[i];
   }
   return total;
}

int main()
{
    const int MAXCOUNT = 100;
    double scores[MAXCOUNT];
    int n;
    double total;

    cout << "Enter the number of test: ";
    cin >> n;

    getTestScores(n, scores);

    total = getTotal(n, scores);

    cout << "The total score are " << total << endl;
    system("pause");
    return 0;
}
