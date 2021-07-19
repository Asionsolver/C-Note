#include<bits/stdc++.h>
using namespace std;
/*
-->Enumerated type (enumeration) is a user-defined data type which can be assigned some limited values. These values are 
   defined by the programmer at the time of declaring the enumerated type.
   When we assign a float value in a character value then compiler generates an error in the same way if we try to assign 
   any other value to the enumerated data types the compiler generates an error. 
   Enumerator types of values are also known as enumerators. It is also assigned by zero the same as the array. 
   It can also be used with switch statements.

   For example: If a gender variable is created with value male or female. If any other value is assigned other than male 
   or female then it is not appropriate. In this situation, one can declare the enumerated type in which only male and female 
   values are assigned.

   Syntax:

   enum enumerated-type-name{value1, value2, value3…..valueN};

   enum keyword is used to declare enumerated types after that enumerated type name was written then under curly brackets possible values are defined. After defining Enumerated type variables are created. It can be created in two types:-



  It can be declared during declaring enumerated types, just add the name of the variable before the semicolon.or, 
  Beside this, we can create enumerated type variables as same as the normal variables.
 
  enumerated-type-name variable-name = value;

  By default, the starting code value of the first element of enum is 0 (as in the case of array) . But it can be changed explicitly.

  For example: enum enumerated-type-name{value 1=1, value2, value3};

  And, The consecutive values of the enum will have the next set of code value(s).

  
-->Its gives an opportunity to invent own data type and define whats values the variable of this data types can take.
-->Internally compiler treats the enumerators as integers.
-->Each value on the list of permissible values corresponds to integers, starting  with 0. In example, january stored as 0,
 february stored as 1.....,
 december stored as 11.
 -->You can write any program is c/cc++ language with out the help of enumeration but, enumeration helps in writing clear code
 and simplify programing.
*/
enum booleanValue{
    False,True
};
enum booleanValue isEven(int x){
    if(x%2 == 0){
        return(True);
    }else{
        return(False);
    }
}
// enum month{
//     //january=1
//     january,february,march,april,may,june,july,august,september,octobar,november,december
// };
int main(){
    //enum booleanValue{ False, True };
    //enum month m1,m2,m3;
    enum booleanValue result;
    int n;
    cout<<"Enter N: ";
    cin>>n;

    result = isEven(n);
    if(result == true){
        cout<<n<<" number is even."<<endl;
    }else{
        cout<<n<<" number is odd."<<endl;
    }
    return 0;
}