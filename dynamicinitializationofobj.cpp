//dynamic initialization of objects using constructors
#include<iostream>
using namespace std;
class BankDeposit{
    int principal;
    int time;
    float rate;
    float interest;
    float returnValue;
    public:
        BankDeposit(){}
        BankDeposit(int p,int y,float r);
        BankDeposit(int p,int y,int r);
        void show();


};
BankDeposit::BankDeposit(int p,int y,float r){
    principal=p;
    time=y;
    rate=r;
    returnValue=principal;
    for(int i=0;i<time;i++){
        returnValue=returnValue*(1+rate);
    }
}
BankDeposit::BankDeposit(int p,int y,int r){
    principal=p;
    time=y;
    rate=float(r)/100;
    returnValue=principal;
    for(int i=0;i<time;i++){
        returnValue=returnValue*(1+rate);
    }
}
void BankDeposit::show(){
    cout<<"Principal amount was : "<<principal<<endl;
    cout<<"Return value after "<<time<<" years is : "<<returnValue<<endl;
}
int main(){
    // BankDeposit bd1,bd2,bd3;
    int pr,yr;
    int r;
    float R;

    

    cout<<"Enter principal, time, rate in integer/percentage: "<<endl;
    cin>>pr>>yr>>r;
    BankDeposit bd1=BankDeposit(pr,yr,r);
    bd1.show();
    
    cout<<"Enter principal, time, rate in float: "<<endl;
    cin>>pr>>yr>>R;
    BankDeposit bd2=BankDeposit(pr,yr,R);
    bd2.show();

    BankDeposit bd3;
    bd3.show();


    return 0;
}