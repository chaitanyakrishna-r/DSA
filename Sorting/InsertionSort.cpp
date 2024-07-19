#include<iostream>
using namespace std;

void PrintArr(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[], int n){
    
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        for( ; j >= 0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j]; 
            }else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    PrintArr(arr,n);
}


int main(){
    int arr[5]={3,1,5,6,4};
    insertionSort(arr,5);
    return 0;
}