/*
-->The gets() function in C++ reads characters from stdin and stores them until a newline
character is found or end of file occurs.

-->The gets() function reads characters from stdin and stores them in str until a newline character or end of file is found.

-->The difference between gets() and fgets() is that gets() uses stdin stream. The gets() function provides no support to 
prevent buffer overflow if large input string are provided.

-->It is defined in <cstdio> header file.

Note: Avoid using the gets() function as it can be dangerous for the program. This function was deprecated 
in C++11 and removed from C++14.

gets() Parameters:
-->str: Pointer to a character array that stores the characters from stdin.

gets() Return value:
-->On success, the gets() function returns str
-->On failure, it returns NULL.
   *If the failure is caused due to end of file condition, it sets the eof indicator on stdin.
   *If the failure is caused due to some other error, it sets the error indicator on stdin.
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    cout << "Enter a string: ";
    gets(str);
    cout << "You entered: " << str;
    
    return 0;
}