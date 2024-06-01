//just like initialization and declaration of variable at a time,
//eg int c=8;
// class is also a datatype built by user ie user defined datatype
//so, constructor is a method to declare value of class at the time of declaration

#include<iostream>
using namespace std;


//creating a constructor
//constructor is a special member function wiht same name of class
//it is used to initialize the objects of class.
//it is automatically invoked whenever an object is created
class Complex{
    int a,b;
    public:

    Complex();               //constructor declaration
    void printData(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }

};
Complex::Complex(){               //this is default constructor as it is not taking any parameters
    a=0;
    b=0;
    cout<<"Hello"<<endl;
}
int main(){
    Complex c,c1,c2;               //constructor is called 3 times
    c.printData();
    c1.printData();
    c2.printData();
    return 0;
} 



//properties of constructor
//---it should be declared in public section of class
//---sutomatically invoked when object is initialized
//---they cannot return value and have no return type
//---it canhave default arguments
//----we cannot refer to the address