#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // //open thelfile 
    // ofstream fout;
    // fout.open("zoom.txt");//open or cerate and open
    // //writein the file
    // string name ="Aaditya Singh";
    
    // fout<<name<<endl;
    // fout.close();

    // ifstream fin;
    // fin.open("zoom.txt");
    // getline(fin,name);
    // cout<<name<<endl;
    // fin.close();
     int arr[5];
    cout<<"Enter the input:"<<endl;
    for (int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    //opne file
    ofstream outfile;
    outfile.open("zero.txt");
    for(int i=0;i<5;i++){
        outfile<<arr[i]<<endl;
    }
    outfile.close();

    ifstream infile("zero.txt");
    // int arr2[5];
    for(int i=0;i<5;i++){
        infile>>arr[i];
        cout<<arr[i]<<endl;
    }
    infile.close();
    return 0;
}