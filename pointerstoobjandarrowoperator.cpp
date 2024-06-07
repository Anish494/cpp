//pointers are used to access public members of objects declared in class

#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;
    public:
        void setdata(int a, int b){
            real=a;
            img=b;
        }
        void getdata(){
            cout<<"The value of real is "<<real<<endl;
            cout<<"The value of imaginary is "<<img<<endl;
        }
};
int main(){
    //Method 1

    //simple way to declare and initialize object
    Complex c1;
    c1.setdata(1,2);
    c1.getdata();




    //Method 2

    //Doing the same using pointer
    //The above and below code runs the same and has same output
    //pointer to object
    Complex c2;
    Complex *ptr =&c2;
    //dereferencing of object pointer
    //use of bracket is compulsory
    (*ptr).setdata(3,4);
    //we can dereference using arrow operator
    // -> arrow operator is same as  ' *(pointer). '
    //just above line of code and below are the same
    // ptr->setdata(3,4);
    // (*ptr).getdata();
    //just above line of code and below are the same
    ptr->getdata();





    //Method 3

    //Doing the same using 'new'   , dynamic initialization
    Complex *ptrc=new Complex;
    // (*ptrc).setdata(5,6);
    ptrc->setdata(5,6);
    // (*ptrc).getdata();
    ptrc->getdata();
    


    return 0;
}