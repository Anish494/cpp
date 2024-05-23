/*
datatypes are of three types, 
-builtin-int char float double
-user defined-- strut, union, enum
-derived-- function, array, pointer
*/

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of a,b: ";         //<< is insertion operator
    cin >> a;                             //>> is extraction operator
    cin>>b;
    cout<<"a + b is "<<a+b;
}