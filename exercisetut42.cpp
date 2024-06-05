/*
    1. Simple calculator that performs +,-,* , /, takes 2 inputs and display output
    2. Scientific calculator, additionally performs 4 other operations
    3. Create hyberid calculator that performs both the operations

*/

#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalc{
    protected:
        float n1;
        float n2;
    public:
        
        void setNum(){
            cout<<"Enter first number: "<<endl;
            cin>>n1;
            cout<<"Enter second number: "<<endl;
            cin>>n2;
        }
        void simpProcess(){
            char op;
            cout<<"Welcome to Simple Calculator: "<<endl;
            cout<<"Choose operator among +,-,*,/"<<endl;
            cin>>op;
            switch(op){
                case '+':
                    cout<<"The result of "<<n1<<" "<<op<<" "<<n2<<" is "<<n1+n2<<endl;
                    break;
                case '-':
                    cout<<"The result of "<<n1<<" "<<op<<" "<<n2<<" is "<<n1-n2<<endl;
                    break;
                case '*':
                    cout<<"The result of "<<n1<<" "<<op<<" "<<n2<<" is "<<n1*n2<<endl;
                    break;
                case '/':
                    cout<<"The result of "<<n1<<" "<<op<<" "<<n2<<" is "<<n1/n2<<endl;
                    break;         
                default:
                    cout<<"Choose right operator you Naughty!!"<<endl;       
            }
        }
};

class ScientificCalc{
    protected:
        float n1;
        float n2;
    public:
        
        void setNum(){
            cout<<"Enter first number: "<<endl;
            cin>>n1;
            cout<<"Enter second number: "<<endl;
            cin>>n2;
        }
        void sciProcess(){
            cout<<"Welcome to Scientific Calculator: "<<endl;
            cout<<"Value of sin(a) is "<<sin(n1)<<endl;
            cout<<"Value of cos(a) is "<<cos(n1)<<endl;
            cout<<"Value of exp(a) is "<<exp(n1)<<endl;
            cout<<"Value of tan(a) is "<<tan(n1)<<endl;
        }
};

class HybridCalc: public SimpleCalc, public ScientificCalc{
    public:
        void setNum(){
            SimpleCalc::setNum();
        }
};

int main(){
    HybridCalc calc1;
    calc1.setNum();
    calc1.simpProcess();
    calc1.sciProcess();

    return 0;
}