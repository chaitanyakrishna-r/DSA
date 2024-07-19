#include<iostream>
using namespace std;


void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        int minIndex =i;
        for(int j=i+1; j<n; j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }

        }
        swap(arr[i],arr[minIndex]);
    printArr(arr,n);
    }
}


int main(){
    int arr[10]={10,2,9,8,6,4,73,2,2,56};
    selectionSort(arr,10);
    return 0;
}