/*
Pointer:
Pointer is a variable in C++ that holds the address of another variable. 
They have data type just like variables, 
for example an integer type pointer can hold the address of an integer variable and an character type pointer can hold 
the address of char variable.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 45;
    int *b = &a; //b contain address of a

    //& --> Address of operator

    cout<<"The address of a is "<<&a<<endl; //same meaning
    cout<<"The address of a is "<<b<<endl; //same meaning

    //* --> Dereference of opreator or Value of operator

    cout<<"The value at address b is "<<*b<<endl; //*b contain value of a

    //Pointer to pointer

    int **c = &b;  // c contain address of b

    cout<<"The address of b is "<<&b<<endl; //same meaning
    cout<<"The address of b is "<<c<<endl; //same meaning
    cout<<"The value at address c is "<<**c<<endl; //*c contain value of a

    int ***d = &c; //d contain address of c 

    cout<<"The address of c is "<<&c<<endl; //same meaning
    cout<<"The address of c is "<<d<<endl; //same meaning
    cout<<"The value at address d is "<<***d<<endl; //*d contain value of a
    
    return 0;
}