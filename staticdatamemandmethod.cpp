#include <iostream>
using namespace std;
class Employee
{
    // count is static data member of class Employee
    static int count;

    int id;

public:
    void setData()
    {
        cout << "Enter your id: " << endl;
        count++;
        cin >> id;
    }
    void getData()
    {
        cout << "Your id is " << id << " and You are employee number : " << count << endl;
    }

    //getCount is static data function which can only access and edit static variables as it is static 
    //function
    //it can be accessed with name of class directly and neednot have oobject to call it

    static void getCount(){
        // cout<<id<<endl;         //which throws an error as id is not static variable but
                                   //static function can only access static variable
        cout<<"The value of count is : "<<count<<endl;
    }
};
int Employee::count = 0; // we have declared it inside class but also declared globally and written as
                         // a member of Employee coz it is gonna be used as variable by all the objects
                         // this count is shared by all the objects and retain its value
                         // it is declared only once which means it occupies only one address in memory
                         // but its value is changed frequently
int main()
{
    Employee anish, om, rahul;
    // anish.count=1;
    // anish.id=1;        // which throws an error as count and id are private members
    anish.setData();
    anish.getData();
    Employee::getCount();          //we are able to use this function using name of class coz it is static func˜

    om.setData();
    om.getData();
    Employee::getCount();

    rahul.setData();
    rahul.getData();
    Employee::getCount();

    // cout<<count<<endl;          //count is private
    return 0;
}