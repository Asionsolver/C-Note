#include<bits/stdc++.h>
using namespace std;

int & reference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

    return a;
    // return a,b; 
    // return b,a;
}
int main(){
    int x = 45, y = 54;

    // reference(x, y) = (789,764);
    reference(x, y) = 789;

    cout<<"The value of x is "<<x<<endl; 
    cout<<"The value of y is "<<y<<endl<<endl;
    return 0;
}