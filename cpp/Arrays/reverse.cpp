#include<iostream>
using namespace std;


void swaps(int arr[] ,int start ,int end){
    int temp =arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
}

void reverseArray(int arr[],int size){
    int end = size-1;

    for(int start=0; start<=end ;start++, end--){
        swap(arr[start],arr[end]);
        // swaps(arr,start,end);
        
    }
  
}

void printArray(int arr[],int size){
    for(int i=0; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[8]={1,2,3,4,8,6,9,8};
    int size= sizeof(arr)/sizeof(int);

    printArray(arr,size);
    reverseArray(arr,size);
    printArray(arr,size);
}