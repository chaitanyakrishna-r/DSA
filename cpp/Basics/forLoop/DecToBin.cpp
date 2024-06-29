#include <iostream>
#include<math.h>
using namespace std;


int main(){



    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

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
    int ans=0;
    int i=0;
    while (n != 0)
    {
        
        int digit = (n&1);
        n=n>>1;
        ans=(digit * pow(10,i))+ans;
        cout<<"ans: "<<ans<<endl;  
        i++;
        
    }
    cout<<"final answer is :"<<ans;


    
}