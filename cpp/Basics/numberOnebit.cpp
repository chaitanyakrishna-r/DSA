#include <iostream>
using namespace std;


int main(){

    int n=10;
    int count=0;
    while (n!=0)
    {
       if(n&1){
        count++;
       
       }
       n=n>>1;
    }
    cout<<"The number of setbit is : "<<count<<endl;
}