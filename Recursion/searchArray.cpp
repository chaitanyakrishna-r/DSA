#include<iostream>
using namespace std;
 
 bool isFound(int arr[],int n,int key){
    // base case;
    if(n <= 0){
        return 0;
    } 
    
    if(key == arr[0]){
        return 1;
    }
     return isFound(arr+1, n-1, key);

 }


int main(){
    int arr[5]={2,3,5,6,5};
    int key = 6;
    int ans = isFound(arr, 5,key);
    cout<<ans<<endl;
    if(ans){
        cout<<"key is found"<<endl;
    }
    else{
        cout<<"key is not found"<<endl;
    }
    return 0;
}