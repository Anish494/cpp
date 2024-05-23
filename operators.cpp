// operators are of 3 types:
/*
- arithmetic
- comparison
- logical
*/

#include<iostream>
bool check(int a,int b){
    // return a==b;
    // return a>b;
    // return a<b;
    // return a>b || a==b;
    return a<b || a==b;

}
using namespace std;
int main(){
    int a=4,b=5;
    cout<<check(a,b);
    return 0;
}