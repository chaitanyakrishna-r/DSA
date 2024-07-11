#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    // int ans=0;
    // int power=1;

    // while (n!=0)
    // {
    //     int digit = (n & 1);
    //     if( digit == 1){
    //        digit = 0;
    //     }else{
    //         digit = 1;
    //     };
    //     n = n>>1;
    //     ans= (digit * power) +ans;
    //     power = power*10;
    // }
    // cout<<ans<<endl; 
    // int i=0;
    // int com=0;
    // while (ans != 0)
    // {
    //     int remi = ans%10;
    //     ans = ans/10;
    //     if(remi == 1){
    //         com=com + pow(2, i);
    //     }
    //     i++;
    // }
    // cout<<"the complement of number : "<<com<<endl;
  
  
    // other approach 
    int m = n;

    // edge case where 0 complement is 1 so we return 1;
    if(n ==0){
        cout<<"1";
        return 1 ;
    }

    int mask=0;
    while (m !=0 )
    {
       mask =(mask << 1) |1;
       cout<<mask<< " ";
       m=m >> 1;
    }
    int ans = (~n) & mask;
    cout<<ans<<endl;
} 