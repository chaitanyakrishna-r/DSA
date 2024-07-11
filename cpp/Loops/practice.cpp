#include<iostream>
using namespace std;


int main(){
    int n=2;
    int m=n;
    int mask=0;
    int comli=0;
    
    while (m !=0)
    {
        mask= 1| mask<<1;
        m=m>>1;
        
    }
    int ans= (~n) & mask;
    cout<<endl<<ans<<endl;
    return 0;
} 