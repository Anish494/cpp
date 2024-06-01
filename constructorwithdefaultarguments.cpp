#include<iostream>
using namespace std;
class Simple{
    int data1,data2;
    public:
        Simple(int a, int b=5){                  //parameterized constructor with default arguments
            data1=a;
            data2=b;
        }
        void displayData();
};
void Simple :: displayData(){
    cout<<"Entered data is "<<data1<<" and "<<data2<<endl;
}
int main(){
    Simple s(2,3);
    s.displayData();

    Simple s1(4);
    s1.displayData();



    return 0;
}