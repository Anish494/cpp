#include<iostream>
using namespace std;
int factorial(int a){
    if(a==0 || a==1){
        return 1;

    }
    else{
        return a*factorial(a-1);
    }
}
int fibo(int m){
    if(m==1){
        return 0;
    }
    else if(m==2){
        return 1;

    }
    else{
        return fibo(m-1)+fibo(m-2);
    }

}
int main(){
    cout<<factorial(5)<<endl;
    int x;
    cout<<"Enter value of a:";
    cin>>x;
    for(int i=1;i<=x;i++){
        cout<<fibo(i)<<endl;
    }
}