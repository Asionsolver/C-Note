#include<bits/stdc++.h>
using namespace std;
struct book{

    //Member vsrisble
    int bookId;
    char title[20];
    float price;

    //Member function
    void input(){

    cout<<"Enter Book Id: ";
    cin>>bookId;
    cout<<endl;

    cout<<"Enter Book Title: ";
    cin>>title;
    cout<<endl;

    cout<<"Enter Book Price: ";
    cin>>price;
    cout<<endl;

}
void display(){
    cout<<endl;
    cout<<"Book Id: "<<bookId<<endl;
    cout<<"Book Title: "<<title<<endl;
    cout<<"Book Price: "<<price<<endl;
} 
};



      
int main(){
    struct book b1;
    b1.input();
    b1.display();
    return 0;
}