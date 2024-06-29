#include <iostream>
#include<math.h>
using namespace std;


int main(){



    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

// revsering the integer
    int digit=0;
    int ans=0;
    while (n !=0 ){
        digit=n%10;
        n=n/10;
        ans=(ans*10)+digit;
        cout<< ans << endl;
    }
    cout<<ans<<" This is the final answer"<<endl;


// without using pow

    // int ans=0;
    // int power=1;
    // while (n != 0)
    // {
        
    //     int digit = (n&1);
    //     cout<<"digit  "<<digit<<endl;
    //     n=n>>1;
    //     ans=(digit*power)+ans;
    //     cout<<"ans: "<<ans<<endl;  
    //     power=power*10;
    //     cout<<power<<endl;
    // }
    // cout<<"final answer is :"<<ans;


// with pow from math lib
    // int ans=0;
    // int i=0;
    // while (n != 0)
    // {
        
    //     int digit = (n&1);
    //     n=n>>1;
    //     ans=(digit * pow(10,i))+ans;
    //     cout<<"ans: "<<ans<<endl;  
    //     i++;
        
    // }
    // cout<<"final answer is :"<<ans;


    
}