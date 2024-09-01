#include<iostream>
#include<cmath>
using namespace std;
class A{
    int v[3];
    public:
    A(){
        for(int i=0;i<3;i++){
            v[i]=i+1;
        }
    }
    operator float(){
        int sum=0;
        for(int i=0;i<3;i++){
            sum+=v[i]*v[i];
        }
        return float(sqrt(sum));
    }
};
int main(){
    A a;
    float f1=a;
    cout<<f1;
}