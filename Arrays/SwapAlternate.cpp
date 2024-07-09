#include<iostream>
using namespace std;

void Printarr(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void swapAlt(int arr[],int size){
    
    for(int i=0; i<size-1 ; i+=2){
        swap(arr[i],arr[i+1]);
    }
}


int main(){
    int arr[5]={2,3,4,5,7};
    swapAlt(arr,5);
    Printarr(arr,5);
    return 0;
}