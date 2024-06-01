#include<iostream>
#include<cmath>
using namespace std;
class Point{
    int a,b;
    friend void distance(Point p1,Point p2 );          //friend function declaration
    public:
        Point(int x,int y){                      //parameterized constructor which takes 2 arguments
            a=x;
            b=y;
        }
        void displayNum(){
            cout<<"("<<a<<" , "<<b<<")"<<endl;
        }
        
};
void distance(Point p1,Point p2 ){                       //friend function defination
    int d;
    d=sqrt((p2.a-p1.a)*(p2.a-p1.a)+(p2.b-p1.b)*(p2.b-p1.b));
    cout<<"Distance is "<<d;
}
int main(){
    Point p(1,1);
    p.displayNum();

    Point q(0,0);
    q.displayNum();

    distance(p,q);

    return 0;
}