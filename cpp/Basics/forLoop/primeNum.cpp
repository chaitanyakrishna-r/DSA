#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number to check the prime :"<<endl;

    cin>>n;
    bool isPrime=1;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            isPrime=0;
            break;
        }

    }
    if(isPrime){
        cout<<"The Number is prime"<<endl;
    }
    else{
        cout<<"The Number is not a prime"<<endl;
    }

}