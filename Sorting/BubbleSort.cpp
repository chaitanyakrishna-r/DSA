#include<iostream>
using namespace std;
void PrintArr(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void BubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j])
            swap(arr[i],arr[j]);
        }
    }
    PrintArr(arr, n);
}
void Bubblesort(int arr[],int n){
    int SwapCount = 0;
    for(int i=1; i<n; i++){
     bool isSwaped = false;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                SwapCount++;
                isSwaped = true;
            }
            
        }
        if(isSwaped == false){
            break;
        }
    }
    cout<<"total swap :  " <<SwapCount<<endl;
     PrintArr(arr, n);
}


int main(){
    int arr[7]={8, 22, 7, 9, 31, 5, 13};
    BubbleSort(arr,7);
    Bubblesort(arr,7);
    return 0;
}