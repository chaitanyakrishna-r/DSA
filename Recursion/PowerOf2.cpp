#include<iostream>
using namespace std; 

int Power(int n){

    // base case;
    if(n == 0){
        return 1;
    }
    // recursive relation 
    // type:linear recursion
    return 2 * Power(n - 1);
}


int main(){
    int number;

    cout<<"Enter the number : "<<endl;
    cin>>number;
    int ans = Power(number);
    cout<<"The ans is ; "<<ans<<endl;
    return 0;
}