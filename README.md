# Introduction

Syntax:

```c
//Program 1.1

#include <iostream>
using namespace std;

int main()
{
	cout << "Welcome to C++\n";
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

Type casting:
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
//Program 5.1
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
// Program 5.5
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
```c
// Program 5.7
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


<style type="text/css">
.tg  {border-collapse:collapse;border-spacing:0;}
.tg td{font-family:Arial, sans-serif;font-size:14px;padding:10px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;}
.tg th{font-family:Arial, sans-serif;font-size:14px;font-weight:normal;padding:10px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;}
.tg .tg-yw4l{vertical-align:top}
.tg  {border-collapse:collapse;border-spacing:0;}
.tg td{font-family:Arial, sans-serif;font-size:14px;padding:10px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;}
.tg th{font-family:Arial, sans-serif;font-size:14px;font-weight:normal;padding:10px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;}
.tg .tg-9hbo{font-weight:bold;vertical-align:top}
.tg .tg-yw4l{vertical-align:top}
</style>
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
// Program 6.4
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
// Program 6.12
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