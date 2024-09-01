#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    A(){a=5;}
    friend class B;
};
class B{
    int b;
    public:
    B(){b=10;}
    int add(){
        A obja;
        return obja.a+b;
    }
};
int main(){
    B b1;
    cout<<"Sum is "<<b1.add()<<endl;
    return 0;
}