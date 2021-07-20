/*
Fibonachi Serial Number :  0   1   2   3   4   5   6   7   8   9   10   11
Fibonachi Series :         0   1   1   2   3   5   8  12  21  34   55   89
We calculate Fib(6)
so lets step:
Fib(6)
=Fib(5) + fib(4)
=Fib(4) + Fib(3) + Fib(3) + Fib(2)
=Fib(3) + Fib(2) + Fib(2) + Fib(1) + Fib(2) + Fib(1) + Fib(2)
=Fib(2) + Fib(1) + Fib(2) + Fib(2) + Fib(1) + Fib(2) + Fib(1) + Fib(2)
=  1    +   1    +   1    +   1    +   1    +   1    +   1    +   1
= 8
*/

#include<bits/stdc++.h>
using namespace std;
int fibonacchiNumber(int n){
    if(n==1 || n==2){
        return 1;
    }
    else{
        return (fibonacchiNumber(n-1)+fibonacchiNumber(n-2));
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<n<<"nt term Fibonacchi number: "<<fibonacchiNumber(n)<<endl;
    return 0;
}