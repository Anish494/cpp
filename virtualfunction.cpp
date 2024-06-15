#include<iostream>
using namespace std;

class BaseClass{
    public:
        int basevar=1;
        virtual void display(){        //class which is pointed to the baseclass-pointer will be runned and
                                       //this permission/order is given by virtual keyword
        // void display(){           //baseclass display() is runned by baseclass-pointer
            cout<<"1 Value of Basevar is "<<basevar<<endl;
        }
};

class DerivedClass:public BaseClass{
    public:
        int derivedvar=2;
        void display(){
            cout<<"2 Value of Basevar is "<<basevar<<endl;    
            cout<<"2 Value of derivedvar is "<<derivedvar<<endl;
        }
};

int main(){
    BaseClass *baseClassPointer;
    BaseClass baseobj;
    DerivedClass derivedobj;

    baseClassPointer = &derivedobj;
    baseClassPointer->display();                 //display() of baseclass  is called if virtual keyword is 
                                                 //not used in the display() in baseclass
                                                 //if virtual is used, then it displays display() of Derived 
                                                 //class in this example

                                                 //virtual keyword is used just to overwrite the default
                                                 //behaviour of baseclasspointer


    return 0;
}