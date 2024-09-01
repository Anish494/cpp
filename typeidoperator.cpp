//it is used to determine the class of and object at run time
//#include<typeinfo> should be used for this operator

#include<iostream>
#include<typeinfo>
using namespace std;
class Base{
    public:
    virtual void show(){}
};
class Derived: public Base{

};
int main(){
    Base b;
    Derived d;
    Base*bp=&d;
    int t=3;
    cout<<typeid(t).name()<<endl;
    cout<<typeid(b).name()<<endl;
    cout<<typeid(d).name()<<endl;
    cout<<typeid(bp).name()<<endl;
    cout<<typeid(*bp).name()<<endl;
    
}