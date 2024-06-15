#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //Method 1 to open file
    // ofstream out("sample.txt");

    //Method 2 to open file
    ofstream out;
    out.open("sample.txt");

    out<<"This is me in files.\n";            //writing to file
    out<<"This is me in files.\n";            //writing to file
    out<<"This is me in files.\n";            //writing to file
    out<<"This is me in files.\n";            //writing to file
    out.close();                            //closing the file



    ifstream in;
    in.open("sample.txt");
    string st;
    // in>>st;                     //reads a single word
    // getline(in,st);                //reads a single line
    // cout<<st;

    //reading using while loop

   /*
        When the stream reaches the end of the file, the eof() function returns true (non-zero).
        non-zero == 0 is false condition, hence loop terminates at in.eof()==0 ie at end of file
   */
    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }

    in.close();

    return 0;
}