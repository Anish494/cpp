#include<iostream>
using namespace std;
int main(){
    //control statements in cpp are of 3 types
    // sequence
    //selection 
    // loop

    //if else progrma
    int a;
    cout<<"Enter a: "<<endl;
    cin>>a;
    if (a>4){
        cout<<"a is greater than 4"<<endl;
    }
    else{
        cout<<"a is less than 5"<<endl;
    }

    int x;
    cout<<"Enter x:"<<endl;
    cin>>x;
    switch(x){
        case 1:
            cout<<"x is 1"<<endl;
            break;
        case 2:
            cout<<"x is 2"<<endl;
            break;    
        case 3:
            cout<<"x is 3"<<endl;
            break;
        case 4:
            cout<<"x is 4"<<endl;
            break;
        default:
            cout <<"x is greater than 4";    
    }
    return 0;

}