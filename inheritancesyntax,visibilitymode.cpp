#include<iostream>
using namespace std;

//Base class
class Employee{
    public:
    int id;
    float salary;
        Employee(int inpid){
            id=inpid;
            salary=34000;
        }
        Employee(){}
};



//Derived class syntax
/*
class derived-class-name : visibility-mode base-class-name{
    class members/functions/etc....



Notes::
----> by default, visibility mode is private
----> if visibility mode is set to public, public member of base class is public member of derived too
----> if visibility mode is set to private, public member of base class is private member of derived
----> private members of base class will never become member of derived class i.e. it is never inherited    
}
*/


//creating a derived class named programmer from base class Employee
class Programmer : public Employee{
    public:
    int languageCode;
    
    // Programmer(int inpId):Employee(inpId){            //if you do this, you neednot make a default 
                                                         //constructor in Employee class
    Programmer(int inpId){                  //when this function is called, it calls Employee() function
                                            //as it is derived from that function and id is its member
        id=inpId;
        languageCode=9;
        salary=9000;                     //only data members of class are inherited, not the value assigned
                                         //so you need to assign the expected value
    }
    void getdata(){
        cout<<id<<" , "<<salary<<endl;
    }
};




int main(){
    Employee Ram(1), Shyam(2);
    // cout<<Ram.id<<endl;            //error as id is private member
    cout<<Ram.salary<<endl;
    // cout<<Shyam.id<<endl;
    cout<<Shyam.salary<<endl;

    //accessing derived class members
    //creating object of derived class without making constructor function of its name gives error
    //so we must make a constructor function after making a derived class

    /*
         error: implicit default constructor for 'Programmer' must explicitly initialize the base 
         class 'Employee' which does not have a default constructor
    */

    Programmer p(77);                       
    cout<<p.languageCode<<endl;                //this throws an error if visibility mode is not set because
                                             //visibility mode is private by default and which means that its
                                        //members are also private and accessing private member throws error

    cout<<p.id<<endl;                //when the visibility mode is not set, it is provate by default
                                        //hence you cannot access inless visibility mode declared to public
    cout<<p.salary<<endl;
    p.getdata();
    p.getdata();
}