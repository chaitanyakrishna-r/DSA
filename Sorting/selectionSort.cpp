#include<iostream>
using namespace std;

void PrintArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int SelectionSort(int arr[],int n){
   
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n ;j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        
         swap(arr[i],arr[minIndex]);
        
   
    }
    PrintArr(arr, n);
}


int main(){
    int arr[5]={2,3,1,4,3};
    SelectionSort(arr,5);
    return 0;
}