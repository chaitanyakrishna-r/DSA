#include<iostream>
using namespace std;


int main(){
      int n = 6;
    for(int i=0; i<=n; i++){
        for(int k=1; k <= i; k++){
            cout<<"   ";
        }
        for(int j=0; j<=n-i; j++){
            cout<<" "<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}