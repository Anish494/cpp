#include<iostream>
using namespace std;

//Base class
class Student{
    protected:
        int rollNumber;
    public:
        void setNumber(int);
        void getNumber();
};
void Student::setNumber(int r){
    rollNumber=r;
}
void Student::getNumber(){
    cout<<"The rollNumber is "<<rollNumber<<endl;
}

//derived class
class Exam: public Student{
    protected:
        float maths;
        float physics;
    public :
        void setMarks(float m , float p){
            maths=m;
            physics=p;
        }
        void getMarks();
};
void Exam:: getMarks(){
    cout<<"The marks in maths is "<<maths<<endl;
    cout<<"The marks in physics is "<<physics<<endl;
}

//derived class
class Result: public Exam{
    float percentage;
    public:
        void display();
};
void Result::display(){
    getNumber();
    getMarks();
    cout<<"Your obtained percentage is "<<(maths+physics)/2<<endl;
}

int main(){
  
    Result anish;
    anish.setNumber(1);
    anish.setMarks(98,96);
    anish.display();

    return 0;
}



/*
        Notes:
        If A----->B----->C
        A is base class for B and B is base class for C
        ABC is called inheritance path
*/