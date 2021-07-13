#include<bits/stdc++.h>
using namespace std;

//This will not swap a and b
void swap(int a, int b){  // a and b is called formall arguments
    int temp = a;
    a = b;
    b = temp;
}
//Call-by-reference with pointer argument (*-->pointer arguments)
//This will  swap a and b
void swapPointer(int *a, int *b){  // a and b is called formall arguments
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 45, y = 54;
    cout<<"Before Swaping:"<<endl;
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl<<endl;

    //This will not swap a and b
    swap(x, y); //x and y is called actual arguments
    
    cout<<"After Swaping:"<<endl;
    cout<<"The value of x is "<<x<<endl; //do not swapping because swap function nothing is returning
    cout<<"The value of y is "<<y<<endl<<endl; //do not swapping because swap function nothing is returning //This will not swap a and b
    
    swapPointer(&x, &y); //x and y is called actual arguments
     
    //htis will swap a and b
    cout<<"After Swaping:"<<endl;
    cout<<"The value of x is "<<x<<endl; // swapping because I gave the address of x and y in swapPointer function
    cout<<"The value of y is "<<y<<endl<<endl; // swapping because I gave the address of x and y in swapPointer function

    return 0;
}