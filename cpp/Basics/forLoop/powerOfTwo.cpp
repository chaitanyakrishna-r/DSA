#include<iostream>
#include<math.h>
using namespace std;

int main( ){

    int n;
    cin>> n;

    int i=0; 
    bool ans = false;
    int power=0;
    while (power <= n)
    {
       if(power == n){
        ans = true;
        // break;
       }
       i++;
       power = pow(2, i);
    }
    
    cout<<ans<<endl;

// this is with edge case that 2^31-1 so 30 times loop should go
    //  for( int i =0; i<=30 ; i++){
    //         int ans = pow(2,i);
    //         if(ans == n){
    //             return true;
    //             break;
    //         }
}