#include<iostream>
using namespace std;
class student
{ private:
  int rollno,m1,m2,m3,total;
  char name[50];
  float avg;
  public:
  void getdetails();
  void calculate();
  void display();  
};
void student::getdetails()
{
    cout<<"enter roll no:";
    cin>>rollno;
    cout<<"enter name:";
    cin>>name;
    cout<<"enter 3 marks:";
    cin>>m1>>m2>>m3;
}
     void student::calculate()
{
    total=m1+m2+m3;
    avg=total/3;
} 
   void student::display()
   {
    cout<<"roll no:"<<rollno<<endl;
    cout<<"mark1:"<<m1<<endl;
    cout<<"mark2:"<<m2<<endl;
    cout<<"mark3:"<<m3<<endl;
    cout<<"total:"<<total<<endl;
    cout<<"avg:"<<avg<<endl;
   }
   int main()
   {
    int i,n;
    student S[100];
    cout<<"enter n:";
    for(i=0;i<=n;i++)
    {
        S[i].getdetails();
        S[i].calculate();
        for(i=0;i<=n;i++)
        S[i].display();
    }
   }