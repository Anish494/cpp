#include<iostream>
using namespace std;
int sum(int a, int b);            //here, a and b are formal parameters/arguments, 
                                  //which are actually copy of actual parameters/arguments
// int sum(int , int );
void greet(){
    cout<<"Good Morning";
}
int main(){
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<sum(a,b);

    greet();
    return 0;
}
int sum(int a, int b){
    return a+b;
}