#include<bits/stdc++.h>
using namespace std;
struct book{

    //Member vsrisble
    private:          //access specifiers
    int bookId;
    char title[20];
    float price;

    //Member function
    public:          //access specifiers
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
    // b1.bookId;  //throw error because bookId is private variable
    b1.input();
    b1.display();
    return 0;
}