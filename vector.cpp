//cpp.com


#include<iostream>
#include<vector>
using namespace std;

template <class T>                             //template makes T of same datatype as in calling function
void display(vector<T> &v){
    cout<<"Displaying this vector: "<<endl;
// void display(vector<int> &v){
// void display(vector<int> v){                   
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //vector is like an array with variable length which is not fixed at beginning
    vector<int> vec1;               //zero length integer vector
    display(vec1);

    vector<char> vec2(4);             //4 length character vector
    vec2.push_back('r');
    display(vec2);

    vector<char> vec3(vec2);           //vector made from vec2 elements
    display(vec3);

    vector<int> vec4(6,3);                 //6 element vector of 3's
    display(vec4);
    cout<<vec4.size()<<endl;

    int element,size;
    cout<<"Enter size of vector to be inserted: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Input an element to be added to vector: ";
        cin>>element;
        vec1.push_back(element);              //function to add element to vector at the end
    }
    // vec1.pop_back();                //function to remove last element from vector
    
    display(vec1);
    vector<int>:: iterator iter =vec1.begin();          //function to add element at specified 
                                                         //position in vector
    //vec1.insert(position,number of copdies which is 1 by default,value);
    // vec1.insert(iter,5,55);
    // display(vec1);
    return 0;

}