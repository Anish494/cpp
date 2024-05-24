// class is actually extension of structur
// members in structure were public and there was no fearure of methods
// classes can have methods and properties
// its members can be private or public

// harry.age=34 makes no sense if age is private

#include <iostream>
#include <string>
using namespace std;
class Binary
{
private:
    string s;
    void chk_bin();

public:
    void read();
    // void chk_bin();
    void ones();
    void display();
};
void Binary::read(){
    cout<<"Enter a binary number: "<<endl;
    cin >>s;

}
void Binary::chk_bin(){
    for (int i=0;i<s.length();i++){
        // if(s[i]!='0' || s[i]!='1'){
        if(s[i]!='0' && s[i]!='1'){
            cout<<"Incorrect binary"<<endl;
            exit(0);
        }
    }
}

void Binary::ones(){
    // we cannot use this function directly in the main function
    //because it is private
    //so we need to use this inside other function
    chk_bin(); 
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            s[i]='0';
        }
        else if(s[i]=='0'){
            s[i]='1';
        }
    }
}
void Binary::display(){
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
}

// we can directly declare objects along with declaration of class
//  class Employee{
//      int salary;
//  } anish, om;
// here, anish and om are objects of class Employee

int
main()
{
    //we cannot use b.s because s is private

    // nesting of member function
    Binary b;
    b.read();
    // b.chk_bin();          //this can be done if chk_bin() is public
    b.ones();
    b.display();
    return 0;
}