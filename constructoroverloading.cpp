#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    //in function overloading, function with same name but different number and corresponding datatype
    //are made and during function call, the function matching all the arguments and number of parameters is 
    //called.

    //same is there in case of constructor as it is also an automatically called function
    
        Complex(int x, int y){                 //parameterized constructor
                                                //function overloading
            a=x;
            b=y;
        }
        Complex(int x){                 //parameterized constructor
                                        //function overloading
            a=x;
            b=0;
        }
        Complex(){                 //default constructor
                                   //function overloading
            a=0;
            b=0;
        }

        void printData(){
            cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){
    Complex c(2,3);
    c.printData();
    
    Complex c2(2);
    c2.printData();

    Complex c3;
    c3.printData();
    return 0;
}