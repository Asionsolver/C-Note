#include<bits/stdc++.h>
using namespace std;

union item
{
    int x;
    char y;
    float z;
};

int main(){
    union item i1; 
    //one value at a time can be used
    
    i1.x = 455;
    //i1.y = 'G';
    //i1.z = 45452.52645;
    cout<<"X = "<<i1.x<<endl;
    //cout<<"Y = "<<i1.y<<endl;
    //cout<<"Z = "<<i1.z<<endl;
    
    return 0;
}