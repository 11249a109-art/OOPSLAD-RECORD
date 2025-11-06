#include<iostream>
using namespace std;
class bill {
    private :
    int units, cust_id;
    float amount;
    string name;
    public:
    void getdetail(){
        cout<<"enter customer id";
        cin>>cust_id;
        cout<<"enter no. of units consumed";
        cin>>units;
        cout<<"enter customer name";
        cin>>name;
    }
    void cal(){
        if(units<=100){
            amount=0;
        }
        else if (units<=200){
            amount=(units-100)*2.25;
        }
        else if(units<=400){
            amount=(100*2.25)+((units-200)*4.50);
        }
        else if(units<=600){
            amount=(100*2.25)+(200*4.50)+((units-400)*6.0);
        }else{
            amount=(100*2.25)+(200*4.50)+(400*6.0)+((units-600)*9.0);
        }
    }
    void print(){
        cout<<"bill"<<endl;
        cout<<"customer id:"<<cust_id<<endl;
        cout<<"units consumed:"<<units<<endl;
        cout<<"customer name:"<<name<<endl;
        cout<<"electic bill:"<<amount<<endl;
    }
};
int main(){
    bill E;
    E.getdetail();
    E.cal();
    E.print();
}