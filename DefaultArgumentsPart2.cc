#include<bits/stdc++.h>
using namespace std;
int add(int w, int x,int y = 0, int z = 0){
    return w+x+y+z;
}
int main(){
    int a,b,c,d;

    cout<<"Enter two number: ";
    cin>>a>>b;
    cout<<"Two number sum: "<<add(a,b)<<endl;

    cout<<"Enter three number: ";
    cin>>a>>b>>c;
    cout<<"Three number sum: "<<add(a,b,c)<<endl;

    cout<<"Enter four number: ";
    cin>>a>>b>>c>>d;
    cout<<"four number sum: "<<add(a,b,c,d)<<endl;

    cout<<endl;
    return 0;
}