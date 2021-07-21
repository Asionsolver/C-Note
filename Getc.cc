/*
getc():
It reads a single character from a given input stream and returns the corresponding integer value (typically ASCII value of read character) on success. It returns EOF on failure.

Syntax:

int getc(FILE *stream);
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"The Char is: "<<getc(stdin)<<endl;
    return 0;
}