#include<iostream>
using namespace std;

/*
    Initialization Section

    constructor(argument-list): initialization-section
    {
        assignment + other code
    }
*/
class Data{
    int a;
    int b;
    public:
                           //which is same as 
                           //a=i;
                                  //b=j;
                           //initialization section  
        // Data(int i, int j) : a(i), b(2*j){
        // Data(int i, int j) : a(i), b(j+7){                        
        Data(int i, int j) : a(i), b(j){
        // Data(int i, int j) : a(i), b(j+a){
        // Data(int i, int j) : b(j), a(i+b){             //which do not give desired output because a is 
                                                          //initialized first and then b 
            cout<<"Constructor function called"<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }
};

int main(){
    Data d(2,3);
    return 0;
}