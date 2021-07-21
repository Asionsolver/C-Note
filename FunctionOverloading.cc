 /*

Function Overloading in C++

-->Function overloading is a feature of object oriented programming where two or more functions can have the same name but 
different parameters.

-->When a function name is overloaded with different jobs it is called Function Overloading.

-->In Function Overloading “Function” name should be the same and the arguments should be different.

-->Function overloading can be considered as an example of polymorphism feature in C++.

Following is a simple C++ example to demonstrate function overloading.

How  Function Overloading works?
    Exact match:- (Function name and Parameter)
    If a not exact match is found:–
               ->Char, Unsigned char, and short are promoted to an int.

               ->Float is promoted to double

    If no match found:
               ->C++ tries to find a match through the standard conversion.

    ELSE ERROR 🙁
 */
 
 #include<bits/stdc++.h>
 using namespace std;
    void print(int i) {
    cout << "Here is int " << i << endl;
    }
    void print(double  f) {
    cout << "Here is float " << f << endl;
    }
    void print(char const *c) {
    cout << "Here is char* " << c << endl;
    }
 
    int add(int a, int b){
    cout<<" using function with two arguments: ";    
    return a+b;
    }
    int add(int a, int b, int c){
    cout<<" using function with three arguments: ";
    return a+b+c;
    }
    int add(int a, int b, int c, int d){
    cout<<" using function with four arguments: ";
    return a+b+c+d;
    }
 int main(){

     print(10);
     print(10.10);
     print("ten");

     cout<<endl<<endl;

     cout<<"This code is Function overloading."<<endl;
     cout<<"The sum of two number"<<add(4,6)<<endl;
     cout<<"The sum of three number"<<add(4,6,4)<<endl;
     cout<<"The sum of four number"<<add(4,6,4,6)<<endl;

     return 0;
 }