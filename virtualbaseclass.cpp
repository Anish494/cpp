#include<iostream>
using namespace std;
class Student{
    protected:
        int rollNo;
    public:
        void setNumber(int a){
            rollNo=a;
        }
        void printNo(){
            cout<<"Your RollNo is "<<rollNo<<endl;
        }
};

class Test:virtual  public Student{
    protected:
        float maths, physics;
    public:
        void setMarks(float a , float  b){
            maths=a;
            physics=b;
        }
        void printMarks(){
            cout<<"Your Result is here: "<<endl;
            cout<<"Marks is maths is "<<maths<<endl;
            cout<<"Marks is physics is "<<physics<<endl;
        }
    
};

class Sports:virtual public Student{
    protected:
        int score;
    public:
        void setScore(int sc){
            score=sc;
        }
        void printScore(){
            cout<<"Your PT score is "<<score<<endl;
        }
};

class Result: public Test, public Sports{
    private:
        float total;
    public:
        void display(){
            total = maths + physics + score;
            printNo();
            printMarks();
            printScore();
            cout<<"Your total score is "<<total<<endl;
        }
};

int main(){
    Result anish;
    anish.setNumber(1);
    anish.setMarks(78,89.5);
    anish.setScore(60);
    anish.display();
    return 0;
}

/*
    A virtual base class in C++ is used to solve the diamond problem in multiple inheritance. It ensures that only one instance of the base class is shared among all the derived classes, avoiding duplication and ambiguity.                         Student
                                          A         has variable 'a'
                                        /  \
                                       /    \
                                      /      \ 
                                     /        \    
                         Test       B          C    Sports 
                                    \         /       has variable 'a' , 'a' each
                                     \       / 
                                      \     / 
                                       \   /
                                        \ /
                                         D          has variable 'a'
                                      Result
    Key Points:
-------Diamond Problem: Occurs when two derived classes inherit from the same base class, and a third class inherits from these two derived classes, leading to two copies of the base class.
-------Virtual Inheritance: By declaring a base class as virtual, you ensure that only one instance of the base class is created, regardless of how many times it is inherited.


    Only one instance of the base class A is created, even though it is inherited by both B and C, and then by D.
*/