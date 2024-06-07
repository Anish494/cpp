#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int a)
    {
        data1 = a;
        cout << "Base1 constructor called. " << endl;
    }
    void printData1()
    {
        cout << "Value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int a)
    {
        data2 = a;
        cout << "Base2 constructor called. " << endl;
    }
    void printData2()
    {
        cout << "Value of data2 is " << data2 << endl;
    }
};

//order of constructor call depends on order in which derived class is derived from base class
//first Base1 constructor is called and then Base2 constructor
class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called." << endl;
    }
    void printData()
    {
        cout << "Value of derived1 is " << derived1 << endl;
        cout << "Value of derived2 is " << derived2 << endl;
    }
};
int main()
{
    Derived data(1, 2, 3, 4);
    data.printData1();
    data.printData2();
    data.printData();

    return 0;
}

/*

*/