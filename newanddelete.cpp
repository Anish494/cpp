//since new and delete manipulate memory in free store, they are also known as free store operators

//a data object created inside a block with new will remain in existence until it is explicitely destroyed
//using delete
//thus, lifetime of variable is directly under our control

#include<iostream>
using namespace std;
int main(){
    

    //new keyword is used to initialize variable dynamically at run time

    // int *p=new int(6);                        //we can direct assign value during 
                                                 //declaration or assign it later                   
    int *p=new int;                   
    *p=9;
    if(!p)
    {
        cout<<"allocation failed";
    }
    cout<<"The value at address p is "<< *p<<endl;          //* in int is compulsory
    // cout<<"The value at address p is "<< p<<endl;
    delete p;
    cout<<"The value at address p after deletion is "<< *p<<endl<<endl<<endl;
    // cout<<"The value at address p after deletion is "<< p<<endl<<endl<<endl;



    char *ch=new char('c');
    cout<<"The value at address ch is "<< *ch<<endl;
    cout<<"The value at address ch is "<< ch<<endl;           //* in char is optional
    delete ch;
    cout<<"The value at address ch after deletion is "<< *ch<<" ."<<endl;
    cout<<"The value at address ch after deletion is "<< ch<<" ."<<endl<<endl<<endl;

    int *arr=new int[6];                   //number of terms must be initialized in right 
                                           //hand side part after new keyword is used
    // arr[0]=1;

    //since arr is equal to &arr[0] so we can use
    *arr = 1;                  //too instead of arr[0]=1
    // arr[1]=2;
    *(arr+1)=2;
    arr[2]=3;
    arr[3]=4;
    arr[4]=5;
    arr[5]=6;
    cout<<"The value of array is "<<arr[0]<<" , "<<arr[1]<<" , "<<arr[2]<<" , "
                                  <<arr[3]<<" , "<<arr[4]<<" , "<<arr[5]<<endl;

    delete [] arr;           //we cannot delete specific number of array data only
                             //we need to delete all data if we use delete keyword
    
    cout<<"The value of array is "<<arr[0]<<" , "<<arr[1]<<" , "<<arr[2]<<" , "
                                  <<arr[3]<<" , "<<arr[4]<<" , "<<arr[5]<<endl;
    

    return 0;
}