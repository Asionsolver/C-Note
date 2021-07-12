
// C++ program to show that we can access a global variable
// using scope resolution operator :: when there is a local variable with same name 
/*
The scope resolution operator ( :: ) is used for several reasons. 

For example: 
If the global variable name is same as local variable name, 
the scope resolution operator will be used to call the global variable.
It is also used to define a function outside the class and used to access the static variables of class.

Local Variable:
1.are declared  incide the function.
2. The default value of local variable is Garbage.
3. Local variable lifetime means local variable are still the block is active.
   It is visible only within the scope of the enclosing block (whether it be a procedure, function or for-loop etc). 
   Once you’ve exited that enclosing block, the variable is lost.
4. Local variable are used ti declare kerword auto(optional).
5. It is created every time fuction is called. 

Static Vriable:
1. are declared  incide or outside the function.
2. The default value of local variable is Zero(0).
3. Life time of static variable are till the termination of program.
4. Local variable are used ti declare kerword Static.
5. It is created only for the first fuction call.
   Same variable is used for subseqent call.
*/

#include<bits/stdc++.h>
using namespace std;

int c = 49;  //declear global variable

int main(){
    int a = 45, b = 46, c = a + b;

    cout<<"Value of Local C is "<<c<<"."<<endl;
  
    cout<<"Value of global C is "<<::c<<"."<<endl;  //using scope resolution operator -->::Variable_Name 
    

    return 0;
}