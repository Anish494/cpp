#include<iostream>
using namespace std;
int main(){
    float a=34.4;
    long double b=34.4;
    // by default, decimal numbers are double
    cout<<sizeof(34.4)<<endl;
    cout<<sizeof(34.4f)<<endl;
    cout<<sizeof(34.4F)<<endl;
    cout<<sizeof(34.4l)<<endl;
    cout<<sizeof(34.4L)<<endl;
    cout<<sizeof(b)<<endl;



    // reference variable, 
    // sometimes single person has many names, same for variables
    int x=16;
    int &y=x;
    cout<<x<<endl;
    cout<<y<<endl;
    y=y+5;
    cout<<x<<endl;
    cout<<y<<endl;
    x=x+5;
    cout<<x<<endl;
    cout<<y<<endl;



    //typecasting in cpp
    int m=5;
    float n=45.56;
    cout << m <<endl;
    cout <<(float)m<<endl;
    cout <<n<<endl;
    cout<<(int)n<<endl;
    cout<<int(n)<<endl;


    
}