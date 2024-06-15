#include<iostream>
using namespace std;
class Vector[
    int size;
    int *arr;
    public:
        Vector(int m){
            size=m;
            arr=new int[size]; 
        }
]
int main(){

    return 0;
}

/*
    class ---------> Object
    so, class is  a template for object

    template --------> class
    template is template for class


    template is sometimes also called parameterized class as it is like class that takes parameter

    Why templates?
    ---- DRY -> do not repeat yourself
    ---- Generic programming ie general programming, like the template defined is a general class valid for 
         different class so it acts as a general class for all



    Syntax for templates:

    //this template acts as class that accepts different datatypes,
    //it acts as now different number of class
    //it is a class with datatype int
    //it us another class with datatype char and so on
    //so we do not need to make different class for different datatype and our DRY principle reserves
 
               //here, T acts as a parameter for class / datatype
    template <class T>             
    class Vector{
        T* arr;                    //T can be int, char, float, etc 
        Public:
            Vector(T* ar){
                //code
            }
    }     

    int main(){

        // to make object, we used to write Class_name Object_name(parameter to be passed);
        // now we also sent parameter to class so syntax changes as 

        // Class_name <datatype> object_name(parameter to be passed);
        
        Vector <int> myvec(ptr);
        Vector <float> myfvec(ptr2);

    }
*/