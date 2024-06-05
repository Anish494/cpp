/*
    syntax for multiple inheritance

    class Derived-class-name : visibility-mode base1, visibility-mode base2{

    }
*/
#include<iostream>
using namespace std;

class Base1{
    protected :
        int base1int;
    public:
        void setbase1int(int a){
            base1int=a;
        }
};

class Base2{
    protected :
        int base2int;
    public:
        void setbase2int(int a){
            base2int=a;
        }
};
class Base3{
    protected :
        int base3int;
    public:
        void setbase3int(int a){
            base3int=a;
        }
};

class Derived: public Base1, public Base2,public Base3{
    public:
    void showdata(){
        cout<<"The value of Base1int is "<<base1int<<endl;
        cout<<"The value of Base2int is "<<base2int<<endl;
        cout<<"The value of Base3int is "<<base3int<<endl;
        cout<<"The sum is "<<base1int+base2int+base3int<<endl;
    }
};

int main(){
    Derived anish;
    anish.setbase1int(4);
    anish.setbase2int(8);    
    anish.setbase3int(3);    
    anish.showdata();
    return 0;
}