/*
Similarities between Structure and Union

Both are user-defined data types used to store data of different types as a single unit.
Their members can be objects of any type, including other structures and unions or arrays. A member can also consist of a bit field.
Both structures and unions support only assignment = and sizeof operators. T
he two structures or unions in the assignment must have the same members and member types.
A structure or a union can be passed by value to functions and returned by value by functions. 
The argument must have the same type as the function parameter. 
A structure or union is passed by value just like a scalar variable as a corresponding parameter.
‘.’ operator is used for accessing members. 

Difference:

Structure:

1.When a variable is associated with a structure, the compiler allocates the memory for each member.
 The size of structure is grater than or eqal to the sum of size of its members.
2. Alternating the value of a member will not affed other member of structure.
3. Each member within a structure is assigned unique storage area of location.
4. Individual member can be accessed at a time.
5. Several members os a structure can initialize at once.

Union:

1.When a variable is associated with a union, the compiler allocates the memory by considering the size of the largesr memory.
 The size of union is  eqal to the size of largest members.
2. Memory allocated is sharedby individual members of union.
3. Alternating the value of any the member will after other members values. 
4. Only one member can be accessed at a time.
5. Only the fisrt member of a union can be initialized.
*/

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