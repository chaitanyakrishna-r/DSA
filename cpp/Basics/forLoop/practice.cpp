#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans=0;
    while (n!=0)
    {
        int digit = n%10;//returns the last digit
        n = n/10;
        if((ans>INT32_MAX/10)||(ans<INT32_MIN/10)){
            cout<<"0"<<endl;
            return 0;
        }

        ans=(ans*10)+digit;
    }
    cout<<ans<<endl;
    int a = INT32_MAX;
    cout<<a<<endl;   
}