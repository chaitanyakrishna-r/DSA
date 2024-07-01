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
}