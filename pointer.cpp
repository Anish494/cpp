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
    return 0;
}