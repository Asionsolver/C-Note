/*

Default Arguments:
A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the caller
of the function doesn’t provide a value for the argument with a default value.

*/
#include<bits/stdc++.h>
using namespace std;
float moneyReceive(int currentMoney, float factor = 1.04){
    
    return currentMoney*factor;
}
int main(){
    int money;
    cout<<"Enter amount of money: ";
    cin>>money;

    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceive(money)<<" Rs after 1 year."<<endl;
    cout<<"Fot Vip deposite: If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceive(money,1.5)<<" Rs after 1 year."<<endl;
    return 0;
}