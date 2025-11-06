#include<iostream>
using namespace std;
class student{
    public:
    student(){
        cout<<"constructor called"<<endl;
    }
   ~student(){
        cout<<"destructor called"<<endl;
    }
    void display(){
        cout<<"inside display function"<<endl;
    }

};
int main(){
    cout<<"creating objects"<<endl;
    student s1;
    s1.display();
    cout<<"enter main"<<endl;
    return 0;
}