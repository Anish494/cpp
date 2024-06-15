#include<iostream>
#include<fstream>
// fsream is a file containing a set of inbuilt class in CPP that are used to read and write files in 
//computer using cpp program
/*
    Useful classes for working with files in cpp are :
    -- fstreambase
    -- ifstream      --> derived from fstreambase
    -- ofstream      --> derived from fstreambase
*/

/*
    In order to work with files in CPP, we will need to open it first
    There are two ways to open files in CPP, they are
    ---- Using constructor
    ---- using the member function open() of the class
*/

using namespace std;
int main(){
    string st = "Anish Singh";
    string st2;
    //opening file using constructor and writing it
    ofstream out("sample.txt");              
    out<<st;                                  //Write operation

    //opening file using constructor and reading it
    ifstream in("sampleb.txt");
    // in>>st2;                                 //read operation that reads upto a space 
                                                //just like cin
    getline(in,st2);  
    cout<<st2;                           //read operation that reads a line at a time
    getline(in,st2);                             //so if you have 2 lines, you need to use getline() twice
    cout<<st2;


    return 0;
}