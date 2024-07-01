#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    int ans=0;
    int power=1;

    while (n!=0)
    {
        int digit = (n & 1);
        if( digit == 1){
           digit = 0;
        }else{
            digit = 1;
        };
        n = n>>1;
        ans= (digit * power) +ans;
        power = power*10;
    }
    cout<<ans<<endl; 
    int i=0;
    int com=0;
    while (ans != 0)
    {
        int remi = ans%10;
        ans = ans/10;
        if(remi == 1){
            com=com + pow(2, i);
        }
        i++;
    }
    cout<<"the complement of number : "<<com<<endl;
    cout<<(13>>1)<<endl;
} 