#include<iostream>
using namespace std;
class Employee {
    int id;
    int salary;
    public:
        void setId(){
            salary=1000;
            cout<<"Enter Id : "<<endl;
            cin>>id;
        }
        void getId(){
            cout<<"Id of Employee is : "<<id<<endl;
        }
};
int main(){
    // if we have fixed small number of objects, we can do this
    // Employee anish,om,hari,rahul;
    // anish.setId();
    // anish.getId();

    //But the method above is not appropriate for large number of objects
    //let us solve this for 5 objects
    Employee emp[5];
    for(int i=0;i<5;i++){
        emp[i].setId();
        emp[i].getId();
    }



    return 0;
}