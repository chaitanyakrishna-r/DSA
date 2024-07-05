#include<iostream>
using namespace std;

bool isEven(int number){
    if(number&1){
        return 0;
    }
    return 1;
}
int main(){

    int number;
    cout<<"Enter the number to check the even or odd : "<<endl;
    cin >> number;

    int answer = isEven(number);
    if(answer == 0){
        cout<<"The number "<<number<<" is odd "<<endl;
    }else{
        cout<<"The number "<<number<<" is even "<<endl;
    }
}
    