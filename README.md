# Introduction

General structure of a c++ program:

```c
//Program 1.1

#include <iostream>
using namespace std;

int main()
{
	cout << "Welcome to C++\n";

    system("pause"); // to pause the console, so that it will not auto close after executing
	return 0;
}
```

# Pseudocode and flowchart using Microsoft Word

Example of pseudocode:
```
Algorithm 2.1: To calculate the total of three numbers
1. Start
2. Set TOTAL to 0
3. Read NUMBER1
4. Read NUMBER2
5. Read NUMBER3
6. Add NUMBER1, NUMBER2 and NUMBER3 and store in TOTAL
7. Display TOTAL
8. End
```

Symbols of flowchart:

![Symbols of flowchart](http://i.imgur.com/lkI94G5.jpg)

# C language

Data types:
```c
int id=109;
char symbol='$';
float average = 4.5;
long population = 4567890;
double volume = 6788.987;
```

Type casting (Change variable from one type to another, i.e. int variable to float variable):
```c
// Program 4.2

int a=4, b=5, c;
double x=8.486,y=7.312,z;

z=a/b;
z=static_cast<double>(a)/b;
z = static_cast<double>(a/b);
c=static_cast<int>(x)/a;
c=static_cast<int>(x/a);
c=static_cast<int>(x)/static_cast<int>(y);
```

Input & Output:
```c
// cout, cin
#include <iostream>
using namespace std;

int main ()
{
	float sales1, sales;
    cout << "Input two sales information." << endl;
    cout << "sales 1: ";
    cin >> sales1;
    cout << "sales 2: ";
    cin >> sales2;
    cout << "Total sales: " << (sales1+sales2);
    system("pause");
    return 0;
}
```

File input & output:
```c
// include fstream, ifstream, .open()
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
	float val1, val2, val3, val4;
    ifstream inData;
    ofstream outData;
    
    inData.open("DataIn.txt");
    outData.open("DataOut.txt");
    
    inData >> val1 >> val2 >> val3 >> val4;
    outData << val4 << endl;
    outData << val3 << endl;
    outData << val2 << endl;
    outData << val1 << endl;
    system("pause");
    return 0;
}
```

Stream manipulator:

setw(5) - will create 5 spaces to display at console, if the thing to be displayed is less than 5, it will move to the right.

left, right - will make the thing to be displayed to be left of right within setw() length

setprecision(2) - display 2 decimal point, but won't work without using together with fixed, without using together with fixed, it will display number of decimals of the number

fixed - used together with setprecision

```c
#include <iostrea>
#include <iomanip>
using namespace std;

int main ()
{
	double amount;
    char s[100];
    
    cout << "D:";
    cin >> amount;
    cout << setprecision(2);
    cout << amount << endl;
    cout << fixed;
    cout << amount << endl;
    
    cout << "S:";
    cin >> s;
    cout << setw(6) << s << "END" << endl;
    cout << left << setw(6) << s << "END" << endl;
    system("pause");
    return 0;
}
```

<table class="tg">
  <tr>
    <th class="tg-9hbo">digits</th>
    <th class="tg-9hbo">s</th>
  </tr>
  <tr>
    <td class="tg-yw4l">4.5</td>
    <td class="tg-yw4l">saya</td>
  </tr>
</table>
<br>
<table class="tg">
  <tr>
    <th class="tg-yw4l">D</th>
    <th class="tg-yw4l">:</th>
    <th class="tg-yw4l">4</th>
    <th class="tg-yw4l">.</th>
    <th class="tg-yw4l"></th>
    <th class="tg-yw4l">5</th>
    <th class="tg-yw4l"></th>
    <th class="tg-yw4l"></th>
    <th class="tg-yw4l"></th>
  </tr>
  <tr>
    <td class="tg-yw4l">4</td>
    <td class="tg-yw4l">.</td>
    <td class="tg-yw4l">5</td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
  </tr>
  <tr>
    <td class="tg-yw4l">4</td>
    <td class="tg-yw4l">.</td>
    <td class="tg-yw4l">5</td>
    <td class="tg-yw4l">0</td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
  </tr>
  <tr>
    <td class="tg-yw4l">S</td>
    <td class="tg-yw4l">:</td>
    <td class="tg-yw4l">s</td>
    <td class="tg-yw4l">a</td>
    <td class="tg-yw4l">y</td>
    <td class="tg-yw4l">a</td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
  </tr>
  <tr>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l">s</td>
    <td class="tg-yw4l">a</td>
    <td class="tg-yw4l">y</td>
    <td class="tg-yw4l">a</td>
    <td class="tg-yw4l">E</td>
    <td class="tg-yw4l">N</td>
    <td class="tg-yw4l">D</td>
  </tr>
  <tr>
    <td class="tg-yw4l">s</td>
    <td class="tg-yw4l">a</td>
    <td class="tg-yw4l">y</td>
    <td class="tg-yw4l">a</td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l">E</td>
    <td class="tg-yw4l">N</td>
    <td class="tg-yw4l">D</td>
  </tr>
</table>
<br>
<table class="tg">
  <tr>
    <th class="tg-9hbo">d</th>
    <th class="tg-9hbo">s</th>
  </tr>
  <tr>
    <td class="tg-yw4l">77.7777</td>
    <td class="tg-yw4l">sayaLagi</td>
  </tr>
</table>
<br>
<table class="tg">
  <tr>
    <th class="tg-yw4l">D</th>
    <th class="tg-yw4l">:</th>
    <th class="tg-yw4l">7</th>
    <th class="tg-yw4l">7</th>
    <th class="tg-yw4l">.</th>
    <th class="tg-yw4l">7</th>
    <th class="tg-yw4l">7</th>
    <th class="tg-yw4l">7</th>
    <th class="tg-yw4l">7</th>
    <th class="tg-yw4l"></th>
    <th class="tg-yw4l"></th>
  </tr>
  <tr>
    <td class="tg-yw4l">7</td>
    <td class="tg-yw4l">8</td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
  </tr>
  <tr>
    <td class="tg-yw4l">7</td>
    <td class="tg-yw4l">7</td>
    <td class="tg-yw4l">.</td>
    <td class="tg-yw4l">7</td>
    <td class="tg-yw4l">8</td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
    <td class="tg-yw4l"></td>
  </tr>
  <tr>
    <td class="tg-yw4l">S</td>
    <td class="tg-yw4l">:</td>
    <td class="tg-yw4l">s</td>
    <td class="tg-yw4l">a</td>
    <td class="tg-yw4l">y</td>
    <td class="tg-yw4l">a</td>
    <td class="tg-yw4l">L</td>
    <td class="tg-yw4l">a</td>
    <td class="tg-yw4l">g</td>
    <td class="tg-yw4l">i</td>
    <td class="tg-yw4l"></td>
  </tr>
  <tr>
    <td class="tg-yw4l">s</td>
    <td class="tg-yw4l">a</td>
    <td class="tg-yw4l">y</td>
    <td class="tg-yw4l">a</td>
    <td class="tg-yw4l">L</td>
    <td class="tg-yw4l">a</td>
    <td class="tg-yw4l">g</td>
    <td class="tg-yw4l">i</td>
    <td class="tg-yw4l">E</td>
    <td class="tg-yw4l">N</td>
    <td class="tg-yw4l">D</td>
  </tr>
  <tr>
    <td class="tg-yw4l">s</td>
    <td class="tg-yw4l">a</td>
    <td class="tg-yw4l">y</td>
    <td class="tg-yw4l">a</td>
    <td class="tg-yw4l">L</td>
    <td class="tg-yw4l">a</td>
    <td class="tg-yw4l">g</td>
    <td class="tg-yw4l">i</td>
    <td class="tg-yw4l">E</td>
    <td class="tg-yw4l">N</td>
    <td class="tg-yw4l"></td>
  </tr>
</table>

Selection or decision:
```c
// if, else if, else
#include <iostream>
using namespace std;

int main ()
{
	double mark;
    
    cout << "Enter your mark>>";
    cin >> mark;
    
    if (mark >= 75)
    	cout << "Your score: A" << endl;
    else if ((mark < 75) && (mark >= 60))
    	cout << "Your score: B" << endl;
    else if ((mark < 60) && (mark >= 45))
    	cout << "Your score: C" << endl;
    else if ((mark < 45) && (mark >= 30))
    	cout << "Your score: D" << endl;
    else if (mark < 30)
    	cout << "Your score: E" << endl;
    system("pause");
    return 0;
}
```

```c
// switch
#include <iostream>
using namespace std;

int main ()
{
	char label;
    
    cout << "Enter a label >>";
    cin >> label;
    
    switch(label)
    {
    	case 'R':
        	cout << "Red Dragon";
            break;
        case 'Y':
        	cout << "Yellow pages";
            break;
        case 'r':
        	cout << "Red Hat";
            break;
        case 'z':
        	cout << "Red Apple";
            break;
    }
    system("pause");
    return 0;
}
```

# Function

## Pass by value 

when an argument is passed to a function, its value is copied into the parameter.
Changes to the parameter in the function do not affect the value of the argument 

[Demo of passing by value](function/pass-by-value-demo.cpp)
[Demo of passing by value and it doesn't change the value of argument](function/pass-by-value-does-not-change-value.cpp)

## Pass by reference

When a reference is passed to a function, its value changes if it changes in the function.
Defined with ampersand(&).

```cpp
void getDimensions(int&, int&);
```

[Demo of passing by reference](function/pass-by-reference.cpp)

## Function prototype, header, body, and call

```cpp
// the prototype must include the data type of each parameter inside its parentheses
// the header must include a declaration for each parameter in its ()
void evenOrOdd(int);  //prototype
void evenOrOdd(int num) //header
evenOrOdd(val);       //call
```

## Misc

Static variable, once declared, it will remain the same throughout the program execution.
[Demo](function/using-static-variable.cpp)

# Array
## one dimensional array

```cpp
int foo[]; // wrong, because the size of array is not defined

int foo[5]; // declare an array with 5 elements of type int, element still no value because not yet initialize

int foo[5] = {16, 2, 77, 40, 12071};  // initialize the array
int foo[] = {16, 2, 77, 40, 12071}; // this will work too, without specifying number of elements

int baz[5] = {}; // initialize the array with each element with value of 0

foo[2] = 75; // set the 3rd element of foo array to 75

/* 
This will initialize a score array with 4 elements of type double with 0.0 for each element.
*/
// size declaration of an array must be a constant;
const int ARRAY_SIZE = 4;

double score[ARRAY_SIZE];

for(int i=0; i<ARRAY_SIZE; i++)
{
    score[i] = 0.0;
}
/*
end of program
*/

char name1[] = "Shaun"; // Way 1 of storing a string to array
char name2[] = {'S','h','a','u','n','\0'}; // Way 2 of storing a string to array, this have to end with \0

/*
Parallel array - Two or more related arrays that contain related data, maybe array1 will add with array2 and sum is stored in array3
*/
float time[] = {7,10,5,4,8};
float speed[] = {12.5,11.0,22.5,20.8,50.0};
float distance[] = {time[0]*speed[0], time[1]*speed[1], time[2]*speed[2], time[3]*speed[3], time[4]*speed[4]};

for(int i=0; i<5; i++)
{
    cout << "Time: " << time[i] << ", " << "Speed: " << speed[i] << ", " << "Distance: " << distance[i] << endl;
}
/*
end of program
*/
```

## multidimensional array

```cpp
int jimmy[3][4]; // declare a two dimensional array of 3 per 4 elements of type int

int jimmy[3][4] = {{2,3,4,9},{7,9,2,1},{1,0,12,13};  // initialize the array
int jimmy[][4] = {{2,3,4,9},{7,9,2,1},{1,0,12,13}; // this will work too, without specifying number of elements for first dimension, second and following dimension must specify number of elements

int jimmy[3][4] = {}; // initialize the array with each element with value of 0

int jimmy[1][3] = 100; // set the 2nd row, 4th column element to 100

/*
use two for loops to print out the contents of two dimensional array
*/
for(int i=0; i<3; i++)
{
    for (int j=0; j<4; j++)
    {
        cout << jimmy[i][j] << endl;
    }
}
/*
end of program
*/
```

## Passing array to function

```cpp
showScores(tests); //To pass an array to a function, just use the array name:
    
// To define a function that takes an array parameter, use empty [] for array argument:
void showScores(int []); // function prototype
void showScores(int tests[]) // function header

// For > 1 dimensional array, function header must specify all the size of dimension except 1st dimension
void getRectSolid(short [][3][5]);

```

[Demo](array/pass-array-to-function-demo.cpp)

Array names in functions are like  reference variables – changes made to array in a function are reflected in actual array in calling function