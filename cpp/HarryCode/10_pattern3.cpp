#include<iostream>
using namespace std;


int main(){
    int n = 5;
    for(int i=0; i<n; i++){
        for(int j = 1; j < n-i; j++ ){
            cout<<"   ";
        }
        for(int k=0; k <= i; k++){
            cout<<" * ";
        }for(int a = 1; a <= i; a++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}