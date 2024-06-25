#include <iostream>
using namespace std;

int main(){

    cout<<"Enter the number : "<<endl;

    int n;
    cin>>n;

    int i =1;
    // while(i<=n){
    //     cout<<i <<" ";
    //     i=i+1;
    // }
    int sum=0;
    while(i<=n){
        cout<<i<<"+";
        sum=sum+i;
        i++;
    }
    cout<<"The sum of 1 to N is :"<<sum;
}