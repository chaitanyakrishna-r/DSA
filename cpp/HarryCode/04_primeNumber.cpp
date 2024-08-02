#include<iostream>
using namespace std;

// bool primeNumber(int num){
//     if(num == 1 || num == 0){
//         return false;
//     }
// instead of using sqrt we can i*i  do this ;
//     for(int i=2; i*i < num; i++){
//         if(num % i == 0){
//             cout<<"The number is not prime"<<endl;
//             return false;
//         }
//     }
//     cout<<"the number is prime"<<endl;
//     return true;
// }
void primeNumber(int num){
    if(num <= 1){
        cout<<"The number is not a prime";
        return;
    }
    for(int j=2; j <= num; j++){ 
        bool isPrime = true;
        for(int i=2; i <= j/2 ; i++){
            if(j % i == 0){
               isPrime = false;
               break;
            }
        }
       if(isPrime){
            cout<<" "<<j<<" ";
       }
    }
    cout<<endl;
}

int main(){
    int number ;
    cout<<"Enter the number to check prime : "<<endl;
    cin >>number;
    primeNumber(number);
    cout<<5%1<<endl;
    cout<<5%2<<endl;
    cout<<5%3<<endl;
    cout<<5%4<<endl;
    cout<<5%5<<endl;
    return 0;
}