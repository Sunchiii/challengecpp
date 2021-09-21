#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Input a number:";
    cin>>n;
    if(n<0){
        n = n*(-1);
    }
    cout<<"absolute value is:"<<n;
    return 0;
}
