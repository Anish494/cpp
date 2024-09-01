// example of friend function

#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    friend int sum(A,B);
    A(){a=5;}
};
class B{
    int b;
    public:
    friend int sum(A,B);
    B(){b=10;}
};
int sum(A i, B j){
    int r;
    r=i.a+j.b;
    return r;
}
int main(){
    A m;
    B n;
    cout<<"Sum is "<<sum(m,n);
    return 0;
}