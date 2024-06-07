//Array of objects

#include<iostream>
using namespace std;
class Complex{
    int real;
    float img;
    char ch;
    public:
        void setdata(int a , float b, char c){
            real=a;
            img=b;
            ch=c;
        }
        void getdata(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary is "<<img<<endl;
            cout<<"The char is "<<ch<<endl;
        }
};
int main(){
    //Method 1
    // Complex c[3];
    // c[1].setdata(1,1,'a');
    // c[1].getdata();

    // c[2].setdata(2,2,'b');
    // c[2].getdata();

    // c[3].setdata(3,3,'c');
    // c[3].getdata();



    //Method 2
    // Complex c1[3];
    Complex *ptr= new Complex[3];
    Complex *ptrTemp=ptr;
    Complex *ptrTemp2=ptr;
    
    int m;
    float n;
    char c;
    for(int i=0;i<3;i++){
        cout<<"Enter the value of real and imaginary and char part of "<<i+1<< " complex number: ";
        cin>>m>>n>>c;
        ptr->setdata(m,n,c);
        ptr++;
    }
    for(int i=0;i<3;i++){
        cout<<"Value at "<<i+1<<" is : ";
        ptrTemp->getdata();
        ptrTemp++;
    }
//its easy to access data or array of objects using for loop and is also convenient and error free
//if you use general method, you may  face errors due to dereferancing so use for loop

    // (ptrTemp2)->getdata();
    // (*ptrTemp2).getdata();

    // (ptrTemp2+1)->getdata();
    // // *(ptrTemp2+1)->getdata();

    // (ptrTemp2+2)->getdata();


    return 0;
}