#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string name[5];
    int roll[5];
    ofstream outfile("anish.txt");
    for(int i=0;i<2;i++){
        cout<<"Enter your name: ";
        cin>>name[i];
        outfile<<name[i];
        cout<<"Enter your roll number: ";
        cin>>roll[i];
        outfile<<roll[i];
    }
    outfile.close();

    ifstream infile("anish.txt");
    for(int i=0;i<2;i++){
        infile>>name[i];
        infile>>roll[i];
        cout<<"Name : "<<name[i]<<endl;
        cout<<"Roll : "<<roll[i]<<endl;
    }
    infile.close();

    return 0;
}