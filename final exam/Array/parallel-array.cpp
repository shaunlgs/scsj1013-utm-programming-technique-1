/* Parallel array - Write a program that store the populations of 12 countries.
Define 2 arrays that may be used in parallel to store the names of the countries and their populations.
Write a loop that uses these arrays to print each country’s name and its population.*/
#include <iostream>
using namespace std;

int main()
{
    const int numOfCountries = 3;
    string name[numOfCountries];
    int population[numOfCountries];
    for(int i=0; i<numOfCountries; i++)
    {
            cout << "Enter name of country:" << endl;
            cin >> name[i];
            cout << "Enter population of this country:" << endl;
            cin >> population[i];
    }
    for(int i=0; i<numOfCountries; i++)
    {
            cout  << name[i] << " - " << population[i] << " inhabitants." << endl;
    }
    system("pause");
    return 0;
}
