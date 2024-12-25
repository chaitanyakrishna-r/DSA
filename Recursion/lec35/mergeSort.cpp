#include<iostream>
using namespace std;
//approach 1
void printArr(int arr[], int n){
    for(int i=0; i< n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void merge(int *arr, int s, int e ){
    
    int mid = s+(e-s)/2; 

    int len1 = mid - s+1;
    int len2 = e - mid;

    // create a empty is_array
    int *first = new int[len1];
    int *second = new int[len2];

    //copying values to  first  array
    int mainIndex = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainIndex++];
    }

    //copying values to  second  array
    mainIndex = mid + 1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainIndex++];
    }

    // merge two sorted array
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1]<second[index2]){
            arr[mainIndex++] = first[index1++];
        }
        else{
            arr[mainIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainIndex++] = second[index2++];
    }

    // deleting created arrays to save from memory leakage
    delete []first; 
    delete []second;  
}


void mergeSort(int *arr, int s, int e){

    //base case
    if(s>=e){
        return;
    }
    
    int mid = s+(e-s)/2;

    mergeSort(arr, s, mid);

    mergeSort(arr, mid+1, e);

    merge(arr, s, e);

}

int main(){
    int arr[5]={1,8,6,43,4};

    mergeSort(arr, 0, 4);

    printArr(arr, 5);
    return 0;
}