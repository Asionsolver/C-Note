 /*

 Benefits of function:
 1. Easy to read
 2. Easy to modify
 3. Avoids rewriting of same code
 4.Easr to debug
 5. Better memory utilization

 Function save memory:
 Function in a program is save to memory space which becomes appreciable when a function is likely to be called many times.

 Function is time consuming:
 However every time a function is called, it takes lot of extra time in executing a series of instruction for tasks such as jumping
 to the function, saving registers. pushing arguments in to the stack and returning to the calling function.

 So...
 So when function is small it is worthless to spend so much extra time is such task is cost saving comparatively small space.

 Inline function:
 --> To eliminate the cost of calls to small function, C++ proposes a new feature called inline function.
 --> An inline function is a function that is expanded in line when it is invoked.
 --> Compiler replace the funtion call with the corresponding function code.

 Inline is a request
 --> Inline is a request not a command.
 --> The benefits of speed of inline functions reduces as the function grows in size.
 --> So compiler may ignore the request in some situations.

 Few of them:
 -->Function containg loops, switch, goto.
 -->Function with recursion
 -->Containing static variable.

 */
#include<bits/stdc++.h>
using namespace std;

inline int add(int x, int y){
    cout<<"The sum of "<<x<<" and "<<y<<" is: "<<(x+y)<<endl;
} 
int main(){
    int a, b;
    cout<<"Enter Two number: ";
    cin>>a>>b;
    add(a,b);
    return 0;
}