#include <iostream>
using namespace std;

int main(){
    int qua;
    double price;
    cout<<"Enter quantity is:";
    cin>>qua;
    price = qua*100;
    if(price>=1000){
        cout<<"total is after -10%:"<<price-(price*0.1);
    }
    else{
        cout<<"total is:"<<price;
    }
    return 0;
}
