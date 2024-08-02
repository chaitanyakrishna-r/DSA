#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num <= 1){
        return 0;
    }
    for(int i=2; i*i <= num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}


int main(){
    int num1,num2 ;
    cout<<"Enter the number"<<endl;
    cin>>num1>>num2;
    for(int i=num1; i <= num2; i++ ){
        if(isPrime(i)){
            cout<<" "<<i<<" ";
        }
    }
    return 0;
}