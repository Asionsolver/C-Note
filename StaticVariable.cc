/*
Static Keyword in C++:

Static Variable:
Static variables have a property of preserving their value even after they are out of their scope! Hence, static variables preserve their previous value in their previous scope and are not initialized again in the new scope. 
Syntax: 

static data_type var_name = var_value; 
Following are some interesting facts about static variables in C.
1) A static int variable remains in memory while the program is running. A normal or auto variable is destroyed when a 
function call where the variable was declared is over. 
For example, we can use static int to count a number of times a function is called, but an auto variable can’t be used for this purpose.
For example below program prints “1 2”
2) Static variables are allocated memory in data segment, not stack segment.
3) Static variables (like global variables) are initialized as 0 if not initialized explicitly. For example in the below program,
   value of x is printed as 0, while value of y is something garbage.
4) In C/C++, static variables can only be initialized using constant literals. For example, following program fails in compilation.
5) Static global variables and functions are also possible in C/C++. The purpose of these is to limit scope of a variable 
   or function to a file.
6) Static variables should not be declared inside structure. The reason is C compiler requires the entire structure elements 
   to be placed together (i.e.) memory allocation for structure members should be contiguous. 
   It is possible to declare structure inside the function (stack segment) or allocate memory dynamically(heap segment) or it 
   can be even global (BSS or data segment). Whatever might be the case, all structure members should reside in the same memory
   segment because the value for the structure element is fetched by counting the offset of the element from the beginning
   address of the structure. Separating out one member alone to data segment defeats the purpose of static variable and it 
   is possible to have an entire structure as static.

*/

#include<bits/stdc++.h>
using namespace std;

int fun2()
{
  int count = 0;
  count++;
  return count;
}

int fun()
{
static int count = 0;
count++;
return count;
}

int initializer(void)
{
    return 50;
}
  
int main(){
    cout<<"Count:"<<fun()<<endl; //Static keyword
    cout<<"Count:"<<fun()<<endl; //Static keyword
    cout<<"Count:"<<fun()<<endl<<endl; //Static keyword

    cout<<"Count:"<<fun2()<<endl; //Without Static keyword
    cout<<"Count:"<<fun2()<<endl; //Without Static keyword
    cout<<"Count:"<<fun2()<<endl<<endl; //Without Static keyword

    static int x;
    int y; //some_garbage_value
    cout<<"Value: "<<x<<endl;  //value = 0
    cout<<"Value: "<<y<<endl; //some_garbage_value

    static int i = initializer();
    cout<<" value of i = "<<i<<endl;
    return 0;
}
