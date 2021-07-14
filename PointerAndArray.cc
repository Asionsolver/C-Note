/*
In C++, Pointers are variables that hold addresses of other variables.
Not only can a pointer store the address of a single variable, it can also store the address of cells of an array.

Consider this example:

int *ptr;
int arr[5];

// store the address of the first
// element of arr in ptr
ptr = arr;

*Here, ptr is a pointer variable while arr is an int array. 
The code ptr = arr; stores the address of the first element of the array in variable ptr.

*Notice that we have used arr instead of &arr[0]. 
This is because both are the same. So, the code below is the same as the code above.

int *ptr;
int arr[5];
ptr = &arr[0];
The addresses for the rest of the array elements are given by &arr[1], &arr[2], &arr[3], and &arr[4].

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    int arr[]={1,2,3,4,5,6};
    int *ptr = arr;
    cout<<"The value of *ptr is "<<*ptr<<endl;
    cout<<"The value of *(ptr+1) is "<<*(ptr+1)<<endl;
    cout<<"The value of *(ptr+2) is "<<*(ptr+2)<<endl;
    cout<<"The value of *(ptr+3) is "<<*(ptr+3)<<endl;
    cout<<"The value of *(ptr+4) is "<<*(ptr+4)<<endl;
    */

    /*
    int *ptr;
    int arr[]={1,2,3,4,5,6};
    ptr = arr;

    cout<<"ptr + 1 is equivalent to "<<&arr[1]<<endl;
    cout<<"ptr + 2 is equivalent to "<<&arr[2]<<endl;
    cout<<"ptr + 3 is equivalent to "<<&arr[3]<<endl;
    cout<<"ptr + 4 is equivalent to "<<&arr[4]<<endl;
    */

    float arr[5];

    // declare pointer variable
    float *ptr;
    
    cout << "Displaying address using arrays: " << endl;

    // use for loop to print addresses of all array elements
    for (int i = 0; i < 5; ++i)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout<<"\nDisplaying address using pointers: "<< endl;

    // use for loop to print addresses of all array elements
    // using pointer notation
    for (int i = 0; i < 5; ++i)
    {
        cout << "ptr + " << i << " = "<< ptr + i << endl;
    }

    return 0;
}