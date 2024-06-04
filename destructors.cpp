//destructors neither takes any arguments nor return any value
//as we know cpp is known for maximum utilization of memory of computer
//destructor is one of those beautiful features
//destructor destroys the object as soon as it exits the scope or area assigned as shown in program below

#include<iostream>
using namespace std;
int count = 0;
class Num{
    public:
        Num(){
            ::count++;          // ::count indicates that count used here is global
            cout<<"This is the time when constructor is called for object number "<<::count<<endl;
        }

        ~Num(){
            cout<<"This is the time when desnstructor is called for object number "<<::count<<endl;
            ::count--;
        }
};

int main(){
    cout<<"We are in our main function"<<endl;
    cout<<"Creating first object"<<endl;
    Num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects:"<<endl;
        Num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main function."<<endl;
    return 0;
}