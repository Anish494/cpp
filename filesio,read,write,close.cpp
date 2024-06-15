#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string st="Anish Kumar Singh";

    //connecting our program to file for writing using ofstream class
    ofstream hout("sample.txt");
    //writing string to file
    //it prints the data in st to hout which is an object pointing to file
    //so in short printing in file
    hout<<"Hello, I am "+ st;
    hout.close();
    //it closes the file and the connection between file and cpp program is now disconnected

    

    string st2;
    ifstream hin("sample.txt");    
    cout<<"The content of this file is : "<<endl;    
    getline(hin, st2);
    cout<<st2;
    hin.close();
    

    return 0;
}