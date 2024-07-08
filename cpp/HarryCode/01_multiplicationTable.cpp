#include<iostream>
using namespace std;

void multi(int n){
    for(int i=1; i<=10 ; i++){
        cout<<i<<" * "<<n<<" = " <<(i*n)<<endl;
    }
}

int main(){
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    multi(number);

    return 0;
}