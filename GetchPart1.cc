/*
What is getch()?

-->The getch() is a predefined non-standard function that is defined in conio.h header file. It is mostly used by 
the Dev C/C++, MS- DOS's compilers like Turbo C to hold the screen until the user passes a single value to exit 
from the console screen. It can also be used to read a single byte character or string from the keyboard and then print. 
It does not hold any parameters. It has no buffer area to store the input character in a program.

Why we use a getch() function?
-->We use a getch() function in a C/ C++ program to hold the output screen for some time until the user passes a key from 
the keyboard to exit the console screen. Using getch() function, we can hide the input character provided by the users in 
the ATM PIN, password, etc.

Syntax-->int getch(void);
*/

#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int main(){
    char ch;
    cout<<"Enter character: ";
    ch = getch();
    cout<<endl;

    cout<<"The character is : "<<ch<<endl;
    cout<<endl;
    return 0;
}