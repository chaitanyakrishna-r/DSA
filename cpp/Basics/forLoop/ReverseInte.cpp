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
}