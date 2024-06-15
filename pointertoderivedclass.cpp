#include<iostream>
using namespace std;
class BaseClass{
    public:
        int basevar;
        void display(){
            cout<<"Value of Basevar is "<<basevar<<endl;
        }
};
class DerivedClass:public BaseClass{
    public:
        int derivedvar;
        void display(){
            cout<<"Value of Basevar is "<<basevar<<endl;    
            cout<<"Value of derivedvar is "<<derivedvar<<endl;
        }
};
int main(){
    BaseClass baseobj;
    BaseClass *ptrbase;
    DerivedClass derivedobj;
    //base class pointer pointing to derived class object
    ptrbase = &derivedobj;


    //even if the pointer of base class points to the object of derived class but if you call function using 
    //pointer which is present in both base and derived class,
    //base class function will be called
    ptrbase->basevar=8;
    ptrbase->display();

    // ptrbase->derivedvar=99;        //base class pointer has no access to derived class variable evenif
                                      //pointer points to derived class as pointer is of base class
                                      //like, maan jayenge magar gaddari nahi karenge 🤣
                                      //same as Yudhisthir about Aswatthama 🤣
                                      //kaam bhi ho jaaye or dharm bhi nast na hoo
    ptrbase->basevar=90;
    ptrbase->display();

    //pointer is of base class so it binds calling function to the address of base class which takes place
    //during run time so it is also called late binding



    DerivedClass *ptrderived;
    ptrderived= &derivedobj;
    ptrderived->derivedvar=0;
    ptrderived->basevar=9;
    ptrderived->display();

    return 0;
}

//it doesnot throw error when you point derived class object to base class pointer but you can access only
//members of base class, derived class members cannot be acccessed using base classs pointer

//its like baau ko ghar ma aafu ta basna paayiyo tara baau ko permision ra access bahek chora ko kehi chaldaina
//function same hos ya different, baau kai chalxa

//tara chora ko ghar xa bhane chora ko ta chalne bhai nai halyo, baau ko kura pani mannai paryo, tara same 
//function chha bhane chora kai chalxa