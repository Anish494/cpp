#include<iostream>
using namespace std;
class Complex{
    int a,b;
    // friend Complex sumComplex(Complex o1,Complex o2 );
    public:
        void setNumber(int n1, int n2){
            a=n1;
            b=n2;
        }

        //friend keyword gives permission to the function below to access private datamembers of the class/object
        friend Complex sumComplex(Complex o1,Complex o2 );
        
        void printNumber(){
            cout<<"The complex number is : "<<a<<" + "<<b<<"i"<<endl;
        }
};
Complex sumComplex(Complex o1,Complex o2 ){
    Complex o3;
    o3.a=o1.a+o2.a;
    o3.b=o1.b+o2.b;
    return o3;
}

int main(){
    Complex c1,c2,sum;
    c1.setNumber(1,2);
    c1.printNumber();

    c2.setNumber(3,4);
    c2.printNumber();

    sum=sumComplex(c1,c2);
    sum.printNumber();

    return 0;
}



/*Properties of friend function
1. Not in the scope of class

2. Since it is not part of class, this function cannot be assessed using the object of class
       eg, c1.sumComplex(l1,l2) is invalid

3. This function can be called/invoked without the use of object

4. Usually contains the objects as arguments

5. Friend function can be indicated in public as well as private part of the class and there is no difference

6. It cannot access the members directly by their names and need object_name.member_name to access any member
*/