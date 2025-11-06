#include<iostream>
using namespace std;
class student 
{   private:
    int rollno,m1,m2,m3,total;
    char name [50];
    float avg;
    public:
    void getdetails()
    {
        cout<<"enter roll no";
        cin>>rollno;
        cout<<"enter name";
        cin>>name;
        cout<<"enter 3 marks ";
        cin>>m1>>m2>>m3;
    }
    void calculate()
    {
        total=m1+m2+m3;
        avg=total/3;
    }
    void display()
    {
        cout<<"roll no:"<<rollno<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"mark1:"<<m1<<endl;
        cout<<"mark2:"<<m2<<endl;
        cout<<"mark3:"<<m3<<endl;
        cout<<"total:"<<total<<endl;
        cout<<"average:"<<avg<<endl;
    }
};
int main()
{
    student S;
    S.getdetails();
    S.calculate();
    S.calculate();
    S.display();
    return 0;
}
