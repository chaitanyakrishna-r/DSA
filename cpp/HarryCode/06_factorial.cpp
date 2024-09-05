#include<iostream>
using namespace std;

int factorial( int num){
    // recurive approach
    if(num == 0 || num == 1){
        return 1;
    }
    int ans = num * factorial(num - 1);
    return ans;
}


int main(){
    int num;
    
    cout<<"Enter the number to find factorial : "<<endl;
    cin>>num;
    int factorialNum = factorial(num);
    cout<<factorialNum<<endl;
   
}