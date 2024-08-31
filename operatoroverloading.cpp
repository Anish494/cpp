//Binary Operator Overloading

// #include<iostream>
// using namespace std;
// class Point{
//     int x;
//     int y;
// public:
//     Point(int a=0,int b=0):x(a), y(b){}
//     Point operator + (const Point& rhs){
//         Point p;
//         p.x=x+rhs.x;
//         p.y=y+rhs.y;
//         return p;
//     }
//     void display(){
//         cout<<x<<" , "<<y;
//     }
// };
// int main(){
//     Point p1(1,2),p2(3,4);
//     Point p3=p1+p2;
//     p3.display();
//     return 0;
// }




//Unary Operator Overloading

// #include<iostream>
// using namespace std;
// class Point{
//     int x,y;
// public:
//     Point(int a=0,int b=0):x(a),y(b){}
//     Point operator - (){
//         Point p;
//         p.x=-x;
//         p.y=-y;
//         return p;
//     }
//     void display(){
//         cout<<x<<" , "<<y;
//     }
// };
// int main(){
//     Point p1(1,2),p2;
//     Point p3=-p1;
//     p3.display();
//     return 0;
// }




//Array Subscript Operator arr[]

#include<iostream>
using namespace std;
class Point{
    int arr[2]; 
public:
    Point(int a=0,int b=0){
        arr[0]=a;
        arr[1]=b;
    }
    int & operator[](int pos){
        if(pos==0){
            return arr[0];
        }
        else if(pos==1){
            return arr[1];
        }
        else{
            cout<<"Out of bound"<<endl;
            exit(0);
        }
    }
    void display(){
        cout<<arr[0]<<" , "<<arr[1]<<endl;
    }
};
int main(){
    Point p1(1,2);
    p1.display();
    p1[0]=7;
    // p1[1]=8;
    p1.display();
    p1[2]=9;
    p1.display();
    return 0;
}