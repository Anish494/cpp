#include<iostream>
using namespace std;
//structure, union, enumeration are user defined datatypes 
//typedef gives nickname to the value right to it
typedef struct student{    
    int age;
    char favchar;
    float salary;

} stud;
union employee{
    int id;
    char favone;

};
int main(){
    // struct student s;
    stud s;
    s.age=34;
    s.favchar='r';
    s.salary=234234.343;
    cout<<s.age<<endl<<s.favchar<<endl<<s.salary<<endl;

    union employee e1;
    e1.id=87;
    e1.favone='u';
    cout<<e1.id<<endl;             //it gives wrong output as the space is now occupied by char at last
    cout<<e1.favone<<endl;




    enum meal{breakfast, lunch , dinner};     //meal is now a datatype
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    meal m1;
    m1=lunch;
    cout<<(m1==1)<<endl;        //which is true, so output is 1
    cout<<(m1==2)<<endl;        //which is false, so output is 0 
    

}