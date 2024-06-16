#include<iostream>
using namespace std;
int main(){
    //pointer is a datatype which stores the address of other data/variable
    int a=4;
    int *b=&a;
    cout << b<<endl;    
    cout << &a<<endl;      // & is address

    cout << *b<<endl;       // * is dereference operator




    //pointer to a pointer
    int **c=&b;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;


    //constant pointer and pointer to a constant

//constant pointer
    //pointer whose value once assigned cannot be changed, ie the address that pointer 
    //is storing cannot be changed once set
    int x=9;
    int y=10;
    int *const ptrx=&x;        //its value needs to be assigned at time of initialization
    cout<<*ptrx<<endl;
    // ptrx=&y;              //error
    x=10;
    cout<<*ptrx<<endl;

//pointer to a constant;
    const int g=6;
    int const *ptrg;             //pointer to a constant datatype variable
    ptrg=&g;
    cout<<*ptrg<<endl; 
    // g=8;                     //g is constant
    ptrg=&y;                    //pointer is not constant
    cout<<*ptrg<<endl;

//constant pointer to a constant
    const int l=5;
    int const *const ptrl=&l;            //first const is for variable and second for pointer
    //here both the value and address of variable, pointer are foxed
    cout<<*ptrl<<endl;
    // l=9;                      //error
    // ptrl=&g;                  //error


    return 0;
}