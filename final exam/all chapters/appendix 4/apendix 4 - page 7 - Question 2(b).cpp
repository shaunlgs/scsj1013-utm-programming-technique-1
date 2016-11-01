#include <iostream>
#include <math.h>
using namespace std;

void getData(double& height, double& base, double& theta)
{
     cout << "Enter a height:" << endl;
     cin >> height; 
     cout << "Enter a base:" << endl;
     cin >> base;
     cout << "Enter a theta:" << endl;
     cin >> theta;   
}

double getHypotenuse(double height, double theta)
{
    double hypotenuse;
    hypotenuse = height / cos(M_PI/(2-theta)); 
    return hypotenuse;
}

double getArea(double height, double base)
{
       double area;
       area = 0.5 * base * height;
       return area;
}

void displayData(double height, double base, double theta, double hypo, double area)
{
 cout << "Height: " << height << endl;
 cout << "Base: " << base << endl;
 cout << "Theta: " << theta << endl;
 cout << "Hypotenuse: " << hypo << endl;
 cout << "Area: " << area << endl;
 
}

int main()
{
    double height, base, theta, hypo, area;
    
    getData(height, base, theta);
    hypo = getHypotenuse(height, theta);
    area = getArea(height, base);
    displayData(height, base, theta, hypo, area);
    system("pause");
    return 0;
}
