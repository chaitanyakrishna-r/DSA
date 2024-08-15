#include<iostream>
using namespace std;

int factorial(int n){

    // base condition;
    if(n == 0)
        return 1;
    

    // // recrusive relation
    // int smallProblem = factorial(n-1);
    // int ans = n * factorial(n-1);

    return n * factorial(n-1);
}


int main(){
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;

    int ans = factorial(num);
    cout<<"The factorial of num is : "<<ans<<endl;
    return 0;
}