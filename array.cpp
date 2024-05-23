#include<iostream>
using namespace std;
int main(){
    int marks[]={23,34,45,56};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2]=22;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<"Print using loop:"<<endl;
    for (int i=0;i<4;i++){
        cout<<marks[i]<<endl;
    }
    cout<<"Prgm terminated"<<endl;







    //pointers in array
    //name of array itself is the address of first element of the array
    int *p=marks;
    cout<<p<<endl;
    cout<<marks<<endl;

    cout<<*p<<endl;
    cout<<*marks<<endl;
    
    cout<<(p+1)<<endl;
    cout<<(marks+1)<<endl;

    cout<<*(p+1)<<endl;
    cout<<*(marks+1)<<endl;
    return 0;
}