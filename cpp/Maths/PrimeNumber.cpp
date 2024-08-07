#include<iostream>
#include<vector>
using namespace std;

// int countPrime(int n){
    
//    int count = 0;
//    if(n == 2){
//         cout<<count;
//         return count;
//     }
        
//         for(int i=2; i <= n; i++){
//             bool isPrime = true;
//             for(int j=2; j*j <= i; j++){
//                 if(i%j == 0){
//                     isPrime = false;
//                     break;
//                 }
//             }
//             if(isPrime){
//                 count++;
//             }
            
//         }
//         cout<<count;
//         return count;
// }

int countPrime(int n){
    int cnt = 0;
    vector<bool> prime(n+1,true);

    prime[0] = prime[1] = 0;

    for(int i=2; i<n; i++){
        if(prime[i]){
            cnt++;

            for(int j=2*i; j<n; j=j+i){
                prime[j] = 0;
            }
        }
    }
    // cout
    cout<<cnt<<endl;
    for(int i=0; i<n; i++){
        cout<<prime[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int number =2;
    countPrime(3);
    return 0;
}