//enum is symbolic constant mostly used in switch case

#include<iostream>
using namespace std;
int main(){
    //enum with name
    enum days{sunday, monday, tuesday, wed, th, fr, sat};

    cout<<monday;    

    days holiday=fr;
    cout << holiday;

    days holi2=days(5);               //though enum is of type int but integer cannot be assigned to it
    cout<<holi2;


    int weekend=sat;              //but enumerated value can be used directly as integer
    cout<<weekend;



    //anonymous enum
    enum{off, on};
    cout<<off;
    
    int switch2= on;
    cout<<switch2<<endl<<endl<<endl;

    //using enum to create a switch case
    enum fruits{apple, mango, grape};
    int code;
    cout<<"Enter fruit code: "<<endl;
    cin>>code;
    switch(code){
        case 0:{
            cout<<"apple"<<endl;
            break;
        }
        case 1:
        {
            cout<<"mango"<<endl;
            break;
        }
        case 2:
        {
            cout<<"Grape"<<endl;
            break;
        }
        default:
            cout<<"wrong input";
    }


}