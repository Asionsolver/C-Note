#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int main(){
    char pw[10];  
    int x;  
    cout<<" Enter password: ";  
    for (x = 0; x < 10; x++)  
    {  
        // accepts the hidden password using the getch() function  
        pw[x] = getch();  
        cout<<"*"; // print the input chartered in the form of *  
    }  
    pw[x] = '\0';  
    cout<<"\n";  
    cout<<" You have passed the hidden password: ";  
    for (x = 0; pw[x] != '\0'; x++){  
        cout<<pw[x];  
    }
    cout<<endl;  
    getch(); 
    return 0;
}