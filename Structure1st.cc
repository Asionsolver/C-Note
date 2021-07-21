/*

Three important points:
-->Structure is a collection of dissimilar elements.
-->Structure is a way to group variable.
-->Structure is used to create data type.

*/
#include<bits/stdc++.h>
using namespace std;

struct employeeInformation  //global definition
{
    int id;
    char favchar;
    int salary;
};

typedef struct companyStatus 
{
    int id;
    char favchar;
    int salary;
}cs;

int main(){
    struct employeeInformation ashis;
    cs Asion;

    Asion.id = 657455;
    Asion.salary = 65465532;
    Asion.favchar = 'G';
    cout<<"Company Id: "<<Asion.id<<endl;
    cout<<"Company Salary: "<<Asion.salary<<endl;
    cout<<"Company Favourite Charecter: "<<Asion.favchar<<endl<<endl;

    ashis.id = 9;
    ashis.salary = 10000000;
    ashis.favchar = 'A';
    cout<<"Employee Id: "<<ashis.id<<endl;
    cout<<"Employee Salary: "<<ashis.salary<<" per/month"<<endl;
    cout<<"Employee Favourite Charecter: "<<ashis.favchar<<endl;
    return 0;
}