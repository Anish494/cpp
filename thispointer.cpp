#include<iostream>
using namespace std;
class A{
    int a;
    public:
        //if we use same symbol for parameter and data member then it gives garbage value
        //it is bacause local variable 'a' which is parameter is emphasized by cpp than the 'a' of class
        //to solve this, 'this' pointer is used
        // 'this' pointer points to the object which invokes the member function


        // void setdata(int a){

        //just like int, float , here we used A which is a class(user defined datatype)

        // A & setdata(int a){
        A setdata(int a){

            //  a=a;

            this->   a    =    a;            //this pointer points to variable a which is data member of class
      //pointer   //data       //parameter  
      //to        //member 
      //object    //of class A 

        return *this;       
    //'this' is a pointer which points to object's adderss
    // *this is an object which is returned to calling function

        }
        void getdata(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    A a;
    // A obj;

    // a.setdata(4);
    // a.getdata();

    //as an object is returned by setdata function so in place of a.setdata(4), it can be replaced by object
    //and an object can call member function
    a.setdata(4).getdata();
    // obj.setdata(4).getdata();

    return 0;
}