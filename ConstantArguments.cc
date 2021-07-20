#include<bits/stdc++.h>

using namespace std;

// Program to explain the constant argument to a function.

/* Note: Having const in the parameter will prevent 
  any change to variablve v inside the function 
*/
void function (const int v = 999){ 
    cout <<v<< endl;	
}

//// However this is possible:

void function2 (const int v = 5){
	cout << v * 2 << endl;	 // You are changing output, not the value of v.
}

void function3 (const int v){
    //v = v*2;	// Error, you cannot change the value of v.
	cout <<v<< endl;
}


int main(){
    int x = 10;
	cout << x << endl;

	// function(465);
	// function();
	function3(x);
	function2(x);

    return 0;
}