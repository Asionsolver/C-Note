#include<bits/stdc++.h>
using namespace std;

struct book{
    int bookId;
    char title[20];
    float price;
};

book input(){
    book b;
    cout<<"Enter Book Id: ";
    cin>>b.bookId;
    cout<<endl;

    cout<<"Enter Book Title: ";
    cin>>b.title;
    cout<<endl;

    cout<<"Enter Book Price: ";
    cin>>b.price;
    cout<<endl;

    return(b);
}

void display(book b){
    cout<<endl;
    cout<<"Book Id: "<<b.bookId<<endl;
    cout<<"Book Title: "<<b.title<<endl;
    cout<<"Book Price: "<<b.price<<endl;
}
int main(){
    struct book b1,b2;

    // b1.bookId = 1800096;
    // // b1.title = "C++ by Saurabh Shukla."; //this is error. Because b1.title is the name of the array. b1.title represent 
    // //first block address. We know address is constant. there is no time constant on the left side of the assignment operator. 
    // //So its throw wrong.
    // strcpy(b1.title,"C++ by Saurabh Shukla.");
    // b1.price = 450.99;

    // //b2.bookId = b1.bookId; //only one variable copy b2.bookId
    // b2 = b1; //hole variable copy b2    

    b1 = input();
    display(b1);
    return 0;
}