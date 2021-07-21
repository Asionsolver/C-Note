/*

getche():
Like getch(), the getche() function is also a non-standard function and declared in “conio.h” header file. It reads a single character from the keyboard and returns it immediately without even waiting for enter key.

Here is the syntax of getche() in C/C++ language-->int getche(void);

Note: while using getch() pressed character is not echoed but while using getche() it is echoed. Here pressed character is 
e and it is displayed 
by printf()

*/
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main(){
    char val;
    cout<<"Enter the character : ";
    val = getche();  //This function is used to get char from this user and then display it 
    cout<<endl;
    cout<<"Entered character : "<< val<<endl;
    return 0;
}