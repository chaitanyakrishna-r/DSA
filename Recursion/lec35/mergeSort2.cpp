#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i= 0; i< n; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int arr[], int s, int mid, int e){
    int i = s;
    int j = mid + 1;


    while (i <= mid && j <= e) 
    {
        if(arr[i] < arr[j]){
            i++;
        }else{
            int temp = arr[j];
            for(int k = j; k > i; k--){
                arr[k] = arr[k-1];
            }
            arr[i] = temp;
            i++; 
            j++;
            mid++;
        }
        
    }
     
}

void mergeSort(int arr[],int s, int e){
    //base case
    if(s >= e){
        return;
    }

    int mid = s+(e-s)/2;  
    //recurvie call
    mergeSort(arr, s, mid);

    mergeSort(arr, mid+1, e);

    merge(arr, s, mid, e);
}

int main(){
    int arr[5]={1,8,43,500,6};
    mergeSort(arr, 0, 4);
    printArr(arr, 5);
    return 0;
}