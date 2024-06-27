#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number to check the prime :"<<endl;

    cin>>n;

    for(int i=2; i<n ; i++){
        if(n%i !=0){
            cout<<"the Number is prime"<<endl;
        }
        else{
            cout<<"The number is not prime "<<endl;
            break;
        }
    }

}