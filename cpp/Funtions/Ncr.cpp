#include <iostream>
using namespace std;

int factorial(int num){
    int factorial =1;
    for(int i = 1; i <= num; i++){
        factorial = factorial*i;
    } return factorial;
}

int main(){
    int n,r;
    cout<<"Enter the numbers"<<endl;
    cin>>n >>r;

    int factN = factorial(n);
    int factR = factorial(r);
    int factnr =factorial(n-r);

    cout<<factN<<endl;
    cout<<factR<<endl;
    cout<<factnr<<endl;


    int ans = factN/(factR*(factnr));
    cout<<"The answer is : "<<ans<<endl;
}

