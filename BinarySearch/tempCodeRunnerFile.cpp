// pivot
#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void sorts(int arr[],int n){

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    printArr(arr,n);
}

int main(){
    int arr[9]={2,5,1,8,3,7,2,2,6};
    sorts(arr,9);
    return 0;
}