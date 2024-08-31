#include<iostream>
using namespace std;
class A{
    int a;
    static int course;
    public:
    A(){ a=0;course=5; }
    A(int i,int b){
        a=i;
        course=b;
    }
    void display(){
        cout<<"Value of a is "<<a<<endl;
    }
    static void displaycourse(){
        cout<<"Course is "<<course<<endl;
    }
};
int A::course;
int main(){
    A a1;
    A a2(3,10);
    a1.display();
    a1.displaycourse();
    a2.display();
    a2.displaycourse();
}