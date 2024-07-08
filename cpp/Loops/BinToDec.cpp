#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;



    int ans=0;
    int power=1;
    while (n !=0)
    {
       int digit = n%10;
       n = n/10;
       if(digit & 1){
        ans=ans+power;
       }
       power=power*2;
    }
    cout<<ans<<endl;
} 