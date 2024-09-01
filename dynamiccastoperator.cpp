//it is used to perform safe down casting
//normaly used to convert base class pointer to derived class pointer

#include<iostream>
using namespace std;
class Base{
    public:
    virtual void show(){}
};
class Derived:public Base{

};
int main(){
    Base *bp=new Derived;
    Derived *d=dynamic_cast<Derived *>(bp);
    if(d!=NULL){
        cout<<"Converted"<<endl;
    }
    else{
        cout<<"Cannot Convert"<<endl;
    }
    return 0;

}