#include<iostream>
using namespace std;
void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
};
void swapPointer(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
};
void swapReference(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;

};
int main(){
    int x,y;
    cin>>x>>y;
    cout<<x<<"  "<<y<<endl;
    swap(x,y);
    cout<<x<<"  "<<y<<endl;
    swapPointer(&x,&y);
    cout<<x<<"  "<<y<<endl;
    swapReference(x,y);
    cout<<x<<"  "<<y<<endl;
}