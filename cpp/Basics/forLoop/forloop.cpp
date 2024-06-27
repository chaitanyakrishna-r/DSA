#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of N: "<<endl;
    cin>>n;
    int sum=0;
    for(int i=1; i<=n ; i++){
        cout<<i<<" ";
        sum=sum+i;
    }
    cout<<endl<<sum;
}