#include<iostream>
using namespace std;
class Complex{
    int a,b;
    //the function sumRealComplex of Calculator class hass now permission to access private members of Complex
    friend int Calculator::sumRealComplex(Complex o1,Complex o2)
    public:
        void setNumber(int n1,int n2){
            a=n1;
            b=n2;
        }
        void printNumber(){
            cout<<"Your Number is : "<<a<<" + "<< b<<"i"<<endl;
        }
};
class Calculator{
    public:
        int add(int a, int b){
            return a+b;
        }
        int sumRealComplex(Complex o1,Complex o2){
            return (o1.a + o2.a);
        }
}
int main(){

    return 0;
}