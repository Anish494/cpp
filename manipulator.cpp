// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     int m=232366;
//     int n=3;
//     int o=988;
//     cout<<setw(3)<<m<<endl
//         <<setw(3)<<n<<endl
//         <<setw(3)<<o<<endl;
//     return 0;
// }



//we can also make our own custom manipulator as follows:
#include<iostream>
using namespace std;
ostream & symbol(ostream & output){
    return output<< "\tRs";
}
//now, symbol is new manipulator which represents Rs

int main(){
    cout<<symbol<<50;
    return 0;
}

