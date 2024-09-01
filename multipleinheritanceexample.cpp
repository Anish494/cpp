// //multilevel inheritance example

// #include<iostream>
// using namespace std;
// class Student{
//     protected:
//     int id;
//     public:
//     void setid(int a){
//         id=a;
//     }
// };
// class Test: public Student{
//     protected:
//     int sub1,sub2;
//     public:
//     void setmarks(int m, int n){
//         sub1=m;
//         sub2=n;
//     }
// };
// class Result:public Test{
//     int total;
//     public:
//     void display(){
//         cout<<"Roll = "<<id;
//         total=sub1+sub2;
//         cout<<endl<<"Total marks = "<<total<<endl;
//     }
// };
// int main(){
//     Result s1;
//     s1.setid(1);
//     s1.setmarks(34,45);
//     s1.display();
// }






// //multiple inheritance example

// #include<iostream>
// using namespace std;
// class A1{
//     protected:
//     int id;
//     public:
//     void setid(int a){
//         id=a;
//     }
// };
// class A2{
//     protected:
//     int sub1,sub2;
//     public:
//     void setmarks(int m, int n){
//         sub1=m;
//         sub2=n;
//     }
// };
// class B:public A1, public A2{
//     int total;
//     public:
//     void display(){
//         cout<<"Roll = "<<id;
//         total=sub1+sub2;
//         cout<<endl<<"Total marks = "<<total<<endl;
//     }
// };
// int main(){
//     B b1;
//     b1.setid(1);
//     b1.setmarks(34,45);
//     b1.display();
// }




//Hierarchial inheritance example

#include<iostream>
using namespace std;
class A{
    protected:
    int id;
    public:
    void setid(int a){
        id=a;
    }
};
class B: public A{
    protected:
    int sub1;
    public:
    void setmarks(int m){
        sub1=m;
        setid(1);
    }
    void display(){
        cout<<"Roll = "<<id;
        cout<<endl<<"Total marks = "<<sub1<<endl;
    }
};
class C:public A{
    int sub2;
    public:
    void setmarks(int n){
        sub2=n;
        setid(2);
    }
    void display(){
        cout<<"Roll = "<<id;
        cout<<endl<<"Total marks = "<<sub2<<endl;
    }
};
int main(){
    B b1;
    b1.setmarks(5);
    b1.display();
    C c1;
    c1.setmarks(34);
    c1.display();
}

