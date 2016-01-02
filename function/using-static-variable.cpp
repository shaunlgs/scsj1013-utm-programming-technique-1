#include <iostream>
using namespace std;

void showVar();
void showVarWithStatic(); 

int main ( ) {
    cout << "Output variable without static" << endl;
 for (int count=0;count<10; count++)
 {
   showVar();  
 }
 
 cout << "Output variable with static" << endl;
 for (int count=0;count<10; count++)
 {
   showVarWithStatic();  
 }
  
  system("pause");
  return 0;
}

void showVar() {
   int var = 10;
   cout << var << endl;
   var++;
}

void showVarWithStatic() {
   static int var = 10;
   cout << var << endl;
   var++;
}


