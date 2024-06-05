#include<iostream>
using namespace std;
class Base1{
    public:
        void greet(){
            cout<<"How are you ?"<<endl;
        }
};
class Base2{
    public:
        void greet(){
            cout<<"What's up Dude ?"<<endl;
        }
};
class Derived : public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base1::greet();
        }
};

class B{
    public:
        void say(){
            cout<<"Hello Buddy"<<endl;
        }
};
class D: public B{
    int a;
    public:

    //when function with same name as base class is written in derived class too then the function in derived
    //class is executed which overwrite the one in base function
    //if not present, the one in base class is executed as usual
    
        void say(){
            cout<<"Hello Buddy, How are you? "<<endl;
        }
};
int main(){
/*
    // Ambiguity 1
    Base1 base1obj;
    base1obj.greet();
    Base2 base2obj;
    base2obj.greet();
    Derived derivedobj;           //it has two greet functions so compiler is confused wheter to use it from
                                  //base1 or base2 so we need to resolve this ambiguity
    derivedobj.greet();
*/

    //Ambiguity 2
    B b;
    b.say();
    D d;
    d.say();

    return 0;
}