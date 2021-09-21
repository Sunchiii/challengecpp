#include <iostream>
using namespace std;

int main(){
    int i, sum = 0;
    int input_1,input_2;

    cout << " Find the number and sum of all integer between input1 and input2 by 5:\n";
    cout << "--------------------------------------------------------------------------------\n";
    cout << "input_1:";
    cin >>input_1;
    cout << "input_2:";
    cin >>input_2;

    if(input_1 <= input_2){
        for(input_1;input_1<=input_2;input_1++){
            if(input_1 % 5 == 0 ){
                cout<<" "<<input_1;
                sum += input_1;
            }
        }
        cout<<"\n sum value is:"<<sum;
    }
    else{
        cout<<"not calculate";
    }
    return 0;
}
