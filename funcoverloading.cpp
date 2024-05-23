//using the same name of function for different  purposes or say same purpose with different conditions
//example: naming 3 functions with same name (volume) that calculate volume of cube, cylinder, and cuboid

//in this condition, function checks the number of arguments and its datatypes and
//the function with same name that matches both the number and type of arguments gets executed
//this is function overloading


#include<iostream>
using namespace std;
int sum(int a, int b){
    cout<<"Running function with 2 arguments:"<<endl;

    return a+b;
}
int sum(int a, int b,int c){
    cout<<"Running function with 3 arguments:"<<endl;
    
    return a+b+c;
}
int main(){
    cout<<sum(2,3)<<endl;
    cout<<sum(2,3,4)<<endl;
}