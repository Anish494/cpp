//classes and structure are almost similar but class is more advanced form of structure
// for eg, we do not have feature of data hiding in structure that is the data in 
// structure can be accessed at any point of the program bu anyone which is controlled in class

//structure cannot have a funcion as its member element or say attribute which is convinently possible in
// class and object


#include<iostream>
using namespace std;
class Employee{
    private:
        int a,b,c;

    public:
        int d,e;
        void setdata(int a1, int b1 ,int c1);         //function declaration
        void getdata(){
            cout<<"The value of a,b,c are "<<a<<" ,"<<b<<" ,"<<c<<" ,"<<d<<" ,"<<e<<endl;
        }

};
void Employee::setdata(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    Employee harry;
    harry.d=4;
    harry.e=5;
    // a is private, so it cannot be daclared directly
    //it can be assessed by some function which is inside the class
    // harry.a=34;
    harry.setdata(1,2,3);
    harry.getdata();
    return 0;
}