#include<iostream>
using namespace std;
void print(char chars[]){
    cout << chars<<endl;
}
int main(){
    char name1[30];
    char name2[30];
    cin.getline(name1,30);
    cout<<name1<<endl;
    strcpy(name2,name1);
    cout<<name2<<endl;
    strcpy(name2,"Anish kumar");
    cout<<name2<<endl;
    print(name1);

    return 0;
}