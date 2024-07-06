#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num<=1){
        return 0;
    }
   
    for(int i=2; i < num; i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;

    if(isPrime(n)){
        cout<<"The number is prime";
    }
    else{
        cout<<"The number is not prime";
    }
}