#include<iostream>
using namespace std;
// brute force

int HCF(int a , int b){
    int ans = 1;
    for(int i=1; i<=min(a,b); i++){
        if(a%i == 0 && b%i == 0){
            ans = i;

        }
        cout<<ans<<" ";
    }
    cout<<"hcf of a and b is : "<<ans;
    return ans;
}

int gcd(int a, int b){
    if(a == 0){
        return b;
    }
    if(b == 0){
        return a;
    }
    while (a != b)
    {
        if(a > b){
            a -= b;
        }
        else{
            b -= a;
        }
    }
    cout<<a<<endl;
    return a;
}


int main(){
    int a=1071, b=462;
    gcd(a, b);
    HCF(a, b);
    return 0;
}