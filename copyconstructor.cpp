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
        Number(Number &obj){                //reference to obj is passed
            cout<<"Copy constructor called ."<<endl;
            a=obj.a;                         //obj.a is assigned to a
        }
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
    return 0;
}