#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n){


    //base case
    if(n == 0 || n == 1){
        return;
    }

    //solve one case 
    // to be remembers alway check is i+1 is then n-1 should ther
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    bubbleSort(arr, n-1);
}

int main(){
    int arr[5]={8,6,4,3,2};
    bubbleSort(arr, 5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<  " ";
    }
    return 0;
}