#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:

    // Complex();               //constructor declaration    ,this is default constructor which do not take 
                              //any arguments

    Complex(int , int);                 //this is parameterized constructor as it is taking parameters/argmts
                               
    void printData(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }

};
// Complex::Complex(){               //this is default constructor as it is not taking any parameters
//     a=0;
//     b=0;
//     cout<<"Hello"<<endl;
// }


Complex::Complex(int x, int y){
    cout<<"Hello ";
    a=x;
    b=y;
}


int main(){
    // Complex a;

    //implicit call
    Complex a(4,6);
    a.printData();

    //explicit call
    Complex b=Complex(2,3);
    b.printData();
    return 0;
}