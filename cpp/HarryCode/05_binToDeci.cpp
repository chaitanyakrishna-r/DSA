#include<iostream>
#include<cmath>
using namespace std;

int binToDeci(int num){

    int ans = 0; 
    int power = 1;
    while(num != 0){
        int digit = num % 10;
        num = num / 10;
        if(digit & 1){
            ans = ans + power;
        }
        power *= 2;
    }
    cout<<ans<<endl;
    return ans;
}
int main(){
    int binary;
    cout<<"Enter the binary number : "<<endl;
    cin>>binary;
    binToDeci(binary);
    
}