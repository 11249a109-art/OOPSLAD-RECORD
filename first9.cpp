#include<iostream>
using namespace std;
inline int square (int x){
        return x*x;
}
inline int cube (int x){
        return x*x*x;
}
int main() {
    int num;
    cout<<"enter a number:";
    cin>>num;
    cout<<"square of"<<num<<"="<<square(num)<<endl;
    cout<<"cube of"<<num<<"="<<cube(num)<<endl;
    return 0;
}