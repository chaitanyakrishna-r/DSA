#include<iostream>
using namespace std;


int main(){
    // 2D array dynamically
    int n,m;
    cout<<"Enter the size of 2D array as n and m ; "<<endl;
    cin>>n>>m;
    int ** arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int [m];
    }

    // Taking input
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    // printing output
    cout<<"printing the array"<<endl;
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
   

    // releasing memory
    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete []arr;
    return 0;
}