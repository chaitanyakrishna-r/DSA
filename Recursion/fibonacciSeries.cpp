#include<iostream>
using namespace std;


// void fibonacci(int a, int b, int num){
//     // print 0 and 1 for only once at first
//     if(a == 0 && b == 1){
//         cout<<a<<" "<<b<<" ";
//     }
//     int sum = a + b; 

//     // base case;
//     if(sum > num){
//         return ;
//     }
    
//     cout<<sum<<" ";
//     // recursion call
//     fibonacci(b, sum, num);

// }
int fib(int n){
    // base case;
    if(n == 1){
        return 0; 
    }
    if(n == 2){
        return 1;
    }
     
    int ans = fib(n-1) + fib(n-2);
    return ans ;
}

int main(){
    int ans = fib(8);
    cout<<ans<<endl;
    return 0;
}