#include<iostream>
using namespace std;
class CWH{
    protected:
        char title[30];
        float ratings;
    public:
        //operator function (parametized)
        CWH(char *s, float f){
            strcpy(title, s);
            ratings=f;
        }
        virtual void display(){

        }
};

class CWHVideo: public CWH{
    float videolength;
    public:
        CWHVideo(char *s, float f, float l):CWH(s,f){
            videolength=l;
        }
        void display(){
            cout<<"The title of the video is "<<title<<endl;
            cout<<"The ratings of the video is "<<ratings<<" out of 5"<<endl;
            cout<<"The length of the video is "<<videolength<<" minutes."<<endl;
        }
};

class CWHText: public CWH{
    int words;
    public:
        CWHText(char *s, float f, int w):CWH(s,f){
            words=w;
        }
        void display(){
            cout<<"The title of the topic is "<<title<<endl;
            cout<<"The ratings of the text is "<<ratings<<" out of 5"<<endl;
            cout<<"The number of words is "<<words<<" minutes."<<endl;
        }
};

int main(){
    char *title=new char[30];
    float ratings, videolength;
    int words;

    //for CWHVideo
    strcpy(title,"Perfect Video");
    videolength = 40.7;
    ratings= 4.8;
    CWHVideo djvideo(title,ratings,videolength);
    djvideo.display();

    //for CWHText
    strcpy(title,"Perfect Text");
    words = 300;
    ratings= 4.8;
    CWHVideo djtext(title,ratings,words);
    djtext.display();


    //Using pointers
    CWH * tuts[2];
    tuts[0]=&djvideo;
    tuts[1]=&djtext;

    tuts[0]->display();
    tuts[1]->display();


    return 0;
}



//Rules for virtual function
/*
        1. they cannot be static
        2. they are accessed by object pointers
        3. A virtual function in base class might not be used
        4. virtual function can be a friend of another class
        5. if a virtual function is defined in base class, then it not necessary 
           to define redefine it in derived class
           
*/