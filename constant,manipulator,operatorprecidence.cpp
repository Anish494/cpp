#include<iostream>                //input output stream
#include<iomanip>                 //input output manipulator
using namespace std;
int main(){

    //constant cannot be changed once declared
    const int a=5;
    cout<<a<<endl;
    // it throws an error
    // a=40;
    // cout<<a<<endl;


    char ch='r';
    cout<<ch<<endl;
    ch='t';
    cout<<ch<<endl;



    //manipulators are used in cpp to manage the
    // display or presentation of the program
    // example: endl, setw(...)
    //endl confirms new line
    //setw() aligns the output to the right and assures the data is 
    //taking its specified width which is next to it
    //setw() is in <iomanip> so we need to include it before use

    int m=4;
    int n=534;
    int o=73453453;
    cout << m <<endl;
    cout << n <<endl;
    
    cout << o <<"\n\n\n\n\n\n" <<endl;

    cout<< setw(8)<<m<<endl;            //it specifies 8 empty spaces for variable next to it
    cout<< setw(8)<<n<<endl;             //it can be used if we need to allign variable to right which is left
    cout<< setw(8)<<o<<endl;             //by default

    
}