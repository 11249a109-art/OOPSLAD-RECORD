#include<iostream>
using namespace std;
class Time{ 
     private:
    int hrs,min;
    public:
    void input();
    void cal(Time T1,Time T2);
    void display();
};
void Time::input(){
    cout<<"enter hours:";
    cin>>hrs;
    cout<<"enter minutes:";
    cin>>min;
}
 void Time::cal(Time T1, Time T2) {
    int totalmin=T1.min+T2.min;
    hrs=T1.hrs+T2.hrs+(totalmin/60);
    min=totalmin%60;
 } 
 void Time::display(){
    cout<<"total Time:"<<hrs<<"hours and"<<min<<"minutes"<<endl;
 }
 int main(){
    Time  T1 ,T2 ,T3 ;
    cout<<"enter first Time:"<<endl;
    T1.input();
    cout<<"enter second Time:"<<endl;
    T2.input();
    T3.cal(T1,T2);
    T3.display();
    return 0;
 }