#include<iostream>
using namespace std;
class book{
    private :
    string title , author;
    float price;
    public:
    void getdetail(){
        cout<<"enter title of the book:";
        cin>>title;
        cout<<"enter the name of the author:";
        cin>>author;
        cout<<"enter the price of the book:";
        cin>>price;
    }
    void display(){
        cout<<"title of the book"<<title<<endl;
        cout<<"author of the book"<<author<<endl;
        cout<<"price of the book"<<price<<endl;
    }
};
int main(){
    book books[100];
    int n;
    cout<<"enter n value";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter details of books"<<i+1<<":\n";
        books[i].getdetail();
    }
    cout<<"book details"<<endl;
    for(int i=0;i<n;i++){
        books[i].display();
    }
}