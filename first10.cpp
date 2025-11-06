#include<iostream>
using namespace std ;
class employeepayslip{
    private :
    int em_no,basicpay,da,hra,ban,net_pay,total,epf,gpay,prof_tax;
    string emp_name,in_tax,uan,ifsc_c;
    public:
    void getdetails(){
        cout<<"employee name :";
        cin>>emp_name;
        cout<<"income tax no:";
        cin>>in_tax;
        cout<<"universal acc no:";
        cin>>uan;
        cout<<"bank acc no:";
        cin>>ban;
        cout<<"ifsc code:";
        cin>>ifsc_c;
        cout<<"employee no:";
        cin>>em_no;
        cout<<"basic pay:";
        cin>>basicpay;
    }
    void cal(){
        da=(basicpay)*0.08;
        hra=(basicpay+da)*0.01;
        epf=(basicpay)*0.12;
        gpay=basicpay+da+hra;
        prof_tax=(basicpay)*0.02;
        total=epf+prof_tax;
        net_pay=gpay-total;
    }
    void display(){
        cout<<"employee no :"<<em_no<<"\nemployee name :"<<emp_name<<"\nuniversal acc no:"<<uan<<"\nifsc code:"<<ifsc_c<<"\nback acc no:"<<ban<<"\nbasic pay:"<<endl;
        cout<<"da:"<<da<<"\nhra :"<<hra<<"\nepf"<<epf<<"\ngrass pay :"<<gpay<<"\nprof_tax:"<<prof_tax<<"\ntotal dedection : "<<total<<"\nnet pay:"<<net_pay<<endl;
     }
};
 int main(){
      employeepayslip d;
      cout<<"enter the details of employee :"<<endl;
      d.getdetails();
      d.cal();
      cout<<"employee pay slip details :"<<endl;
      d.display();
      return 0;  
 }