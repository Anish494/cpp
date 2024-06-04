#include<iostream>
using namespace std;
class Number{
    int a;
    public:
        Number(){
            a=0;
        }
        Number(int num){
            a=num;
        }


        //this is copy constructor which is called when object in main function is supplied as argument
        //for new object to be made

        Number(Number &obj){                //reference to obj is passed
            cout<<"Copy constructor called ."<<endl;
            a=obj.a;                         //obj.a is assigned to a
        }

        //the above copyconstructor code is optional because if this function is not found during 
        //compile time, compiler supplies its own copyconstructor code and our program executes successfully


        void display(){
            cout<<"The value of number for this object is "<<a<<endl;
        }
};
int main(){
    // Number x=Number(3);
    // x.display();

    Number x,y,z(8);
    x.display();               //throws garbage value if default constructor doesnot assign any value
                                //since its data is not set during declaration/initialization
    
    y.display();
    z.display();

    //if you need an object with same property/value as z, we can make it using copyconstructor for z1 and pass
    //z to it

    Number z1(z);
    z1.display();

    //compiler search for copy constructor but if its not found, compiler supplies its own copy
    // constructor code
    Number z2(y);              //copy constructor invoked
    z2.display();

    Number z3;                 //when only assigned, copy construcotr is not called
    z3=z;                      //copy constructor is not invoked but value of z is assigned to z3
    z3.display();
 

                                 //when initialization and assignment takes place at a time, copy constructor 
                                 //is invoked
    Number z4=z3;               //copy constructor is invoked
    z4.display();

    return 0;
}