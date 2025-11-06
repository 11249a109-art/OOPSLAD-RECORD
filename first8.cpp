#include<iostream>
using namespace std;
class Complex{
    private:
    float real;
    float img;
public:
    Complex(float r=0,float i=0)
    {
        real=r;
        img=i;
    }
    Complex add(Complex c2){
        Complex temp;
        temp.real=real+c2.real;
        temp.img=img+c2.img;
        return temp;
    }
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
int main(){
    Complex c1(3.5,2.5),c2(1.5,4.5),c3;
    cout<<"first Complex number:";
    c1.display();
    cout<<"second Complex number:";
    c2.display();
    c3=c1.add(c2);
    cout<<"sum of Complex number:";
    c3.display();
    return 0 ;
}