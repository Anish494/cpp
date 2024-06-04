#include<iostream>
using namespace std;
class Base{
    protected:              // is inheritable but also private
                            //it is same as private with only difference that it is inheritable
        int a;              //int a is private member which is inheritable

    private:                //is not inheritable
        int b;
};

/*
        For a protected member:

                            Public derivation          Private derivation        Protected derivation
  1. private members         not inherited               not inherited             not inherited 
  2. protected members       protected                   private                   protected
  3. public members          public                      private                   protected

*/

class Derived:protected  Base{

};
int main(){
    Base b;
    Derived d;

    // cout<<b.a<<endl;                       //error: 'a' is a protected member of 'Base'
                                              //protected member acts as private member and is not 
                                              //directly accessable

    // cout<<d.a<<endl;                         //error: 'a' is a protected member of 'Base'
                                             //as derived in protected visibility mode
    return 0;
}