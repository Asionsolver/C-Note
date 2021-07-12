#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 45, b = 7;
    cout<<"Vailed typecasting in operation--> A / B = "<<(float)a/b<<" ."<<endl; // Vailed typecasting in operation

    cout<<"Not vailed typecasting in operation--> A / B = "<<float(a/b)<<" ."<<endl; // Not vailed typecasting in operation

    cout<<"Vailed typecasting in operation--> A / B = "<<float(a)/float(b)<<" ."<<endl; // vailed typecasting in operation

    double c = 5456.65564;

    cout<<"No typecasting in variable--> C = "<<c<<endl;
    cout<<"Vailed typecasting in variable--> C = "<<int(c)<<endl; // Vailed typecasting in variable
    cout<<"Vailed typecasting in variable--> C = "<<(int)c<<endl; // Vailed typecasting in variable

    int d = int(c);
    cout<<"Vailed typecasting in variable--> D = "<<d<<endl;
    
    return 0;
}