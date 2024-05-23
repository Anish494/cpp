//conditions for using inline function
//--when the function body is short,simple and is also called many times

//condition for not using inline function
//--when there is use of static variable in the function
//--when the function body is large 




#include<iostream>

//inline function is a special type of function that applies the code in the function 
//directly to the place where it is called i.e. the code directly gets replaced to the calling function

inline int product(int a,int b){
    return a*b;
}

int func(int a,int b){

    //the value of c once changed remains changed forever
    //the incremented value of c remains its value even if function has returned its value

    static int c=0;
    c++;
    return a+b+c;
}





//default arguments in cpp
//if you declare the value of some variable in the function during declaration or defination,
//it is its default value and it gets over written if the value is passed during fucntion  call
//but it is used as its real value when the value of default argument is not passed during fucntion call

int add(int a,  int b=1){
    return a+b;
}



//constant arguments in cpp



using namespace std;
int main(){

    cout<<product(3,4)<<endl;
    cout<<product(5,6)<<endl;

    cout<<func(1,2)<<endl;
    cout<<func(1,2)<<endl;
    cout<<func(1,2)<<endl;
    cout<<func(1,2)<<endl;
    cout<<func(1,2)<<endl;

    cout<<add(4)<<endl;
    cout<<add(4,5)<<endl;
    return 0;
}