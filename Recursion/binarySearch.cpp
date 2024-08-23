#include<iostream>
using namespace std;
 bool binarySearch(int arr[], int s, int e, int key){
    int mid = s +(e-s)/2;

    // base case
    if(s>e){
        return false;
    }
    if(arr[mid] == key){
        return true;
    }


    if(arr[mid]> key){
       return binarySearch(arr, s, mid-1, key);
    }else{
        return binarySearch(arr, mid+1, e, key);
    }
 }

int main(){
    int arr[6]={2,3,6,4,5,9};
    int size = 6;
    int key = 6;
    int ans = binarySearch(arr, 0, size -1, key);
    cout<<ans<<endl;
    if(ans){
        cout<<"The key is present"<<endl;
    }else{
        cout<<"The key is not presents"<<endl;
    }
    return 0;
}