#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
   

    int i=1;

    while(i<=n){
        int j=1;
        while(j<=(n-i)){
            cout<<" "<<" ";
            j++;
        }
    
        int col =1;
        while(col<=i){
            cout<<i<< " ";
            col++;
        }
        cout<<endl;
        i++;
    }


}