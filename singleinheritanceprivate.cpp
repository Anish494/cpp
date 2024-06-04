#include<iostream>
using namespace std;
class Base{
    int data1;                //which is private by default so is not inheritable
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};
void Base:: setData(){
    data1=10;
    data2=20;
}
int Base::getData1(){
    return data1;
}
int Base::getData2(){
    return data2;
}

//class derived publically
class Derived: private Base{
    int data3;
    public:
        void process();
        void display();

};
void Derived::process(){
    setData();
    data3=data2 * getData1();
}
void Derived :: display(){
    cout<<"Value of data1 is "<<getData1()<<endl;           //it gets called coz public member display()
                                                            //has access to private member of derived class
    cout<<"Value of data2 is "<<data2<<endl;
    cout<<"Value of data3 is "<<data3<<endl;

}


int main(){
    Derived der;
    
    //when derived publically, we can directly access functions of base class as those are public member
    //of derived class too
    // der.setData();

    //when derived privately, public members of base class become private member of derived class
    //which can be accessed only by public functions of derived class
    //so we need to call setdata inside process() function if we need to setdata
    der.process();
    der.display();

}