#include<iostream>
#include<cmath>
using namespace std;

int binToDeci(int num){

    int ans = 0; 
    int i=0;
    while(num != 0){
        int digit = num % 10;
        num = num / 10;
        if(digit == 1){
            ans = ans + pow(2,i++);
        }else{
            i++;
        }
       
    }
    cout<<ans<<endl;
    return ans;
}
int main(){
    int binary;
    cout<<"Enter the binary number : "<<endl;
    cin>>binary;
    binToDeci(binary);
    return 0;
}