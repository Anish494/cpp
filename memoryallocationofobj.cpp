#include<iostream>
using namespace std;
class Shop{
    int counter;
    int itemId[50];
    int itemPrice[50];
    public:
    void initCounter(){
        counter=0;
    }
    void setPrice();
    void displayPrice();
};
void Shop::setPrice(){
    cout<<"Enter Id of item "<<counter+1<<" : "<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of item "<<counter+1<<" : "<<endl;
    cin>>itemPrice[counter];
    counter++;

}
void Shop::displayPrice(){
    for(int i=0;i<counter;i++){
        cout<<"Price of item with itemId "<<itemId[i] <<" is : "<<itemPrice[i]<<endl;
    }
}
int main(){
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}    