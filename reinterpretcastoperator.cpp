#include<iostream>
using namespace std;
int main(){
    int * p=new int(65);
    char * ch=reinterpret_cast<char*>(p);
    cout<<*p;
    cout<<endl<<*ch;
}