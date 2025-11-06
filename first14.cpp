#include<iostream>
using namespace std;
class Complex
{
    double real;
    double imag;
    public:
    Complex(){}
    Complex(double,double);
    Complex operator +(Complex);
    void display();
};
 Complex::Complex(double r,double i){
    real=r;
    imag=i;
 }
 Complex Complex::operator+(Complex param){
    Complex temp;
    temp.real=real+param.real;
    temp.imag=imag+param.imag;
    return temp;
 }
  void Complex :: display(){
    cout<<real<<"+"<<"i"<<"imag"<<endl;
  }
  int main(){
    Complex c1(2.5,4),c2(3,4),c3;
    c3=c1+c2;
    c1.display();
    c2.display();
    return 0;
  }