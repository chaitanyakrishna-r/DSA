#include<iostream>
using namespace std;

int fibonacci(int n){
    int a = 0,b = 1;
    
    cout<<a<<" "<<b<<" ";
  
    for(int i=2; i<n ;i++){
        int fib=a+b;
        cout<<fib<<" ";
        a=b;
        b=fib;
    }
    return b;
}

int main(){
    int n;
    cin>>n;
    int ans = fibonacci(n);
    cout<<endl<<"The ans is "<<ans;
    return 0;
}