#include<iostream>
using namespace std;
// brute force
bool isSorted(int arr[],int size){
    for(int i=0; i<size; i++){
        if(arr[i]>arr[i+1]){
            cout<<"The array is not sorted "<<endl;
            return 0;
        }
    }
    cout<<"The array is sorted "<<endl;
    return 1;
}

// using recursion
bool isSorted(int arr[],int size){

    // base case
    if(size ==0 || size ==1){
,./    }`    aswtyui-
   if(arr[0]>arr[1]){
    return false;
   }
}

int main(){

    int arr[6]={1,1,3,5,6,10};
    isSorted(arr,6);

    return 0;
}